;; Quick Sort {input: array of integers}, {output: sorted array of integers}
(defun quick-sort (arr)
  ;; Base case
  (if (null arr) nil
      ;; Defining pivot and left/right arrays
      (let ((pivot (car arr))
            (left nil)  ;; left array
            (right nil))  ;; right array
        ;; Partitioning array into left and right
        (dolist (x (cdr arr))   ;; (cdr arr) because we already defined first element as pivot
          (if (< x pivot)   ;; if x < pivot, add to left array
              (push x left)  ;; push x to left array
              (push x right)))  ;; else, add to right array
        ;; Recursively call quick-sort on left and right arrays
        (append (quick-sort left) ;; appending left array to result
                (list pivot)  ;; appending pivot to result
                (quick-sort right)))))  ;; appending right array to result

;; Parse given space seperated input into array of integers
(defun parse-input (input)
  (let ((left 0)  ;; left index
        (right 0) ;; right index
        (arr '()))  ;; array of integers
    ;; Loop until left index is greater than or equal to length of input
    (loop
     (setq right (position #\Space input :start left)) ;; find index of space and set it as right index,
     (let ((num (subseq input left right))) ;; get substring from left index to right index
       (if (not (string= num "")) ;; if substring is not empty, parse it to integer and push to array
           (push (parse-integer num) arr))) ;; push to array
     (setq left (if right (+ right 1) (length input)))  ;; set left index to right index + 1 or length of input if right index is nil (last element)
     (if (>= left (length input)) 
         (return (reverse arr)))))) ;; return reversed array

;; Main Function
(defun main ()
  ;; Prompt the user to enter array of integers
  (format t "Enter array of integers must be space seperated:~%") ;; ~% is equivalent to \n
  (let ((input (read-line)))  ;; read input from user
    (let ((arr (parse-input input)))  ;; parse input into array of integers
      (format t "Unsorted array: ~A~%" arr) ;; print unsorted array
      (format t "Sorted array: ~A~%" (quick-sort arr)))))  ;; print sorted array

;; Call main function
(main)