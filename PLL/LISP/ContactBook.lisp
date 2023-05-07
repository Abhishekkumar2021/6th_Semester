;; Define a contact data structure
(defstruct contact name phone email)

;; Create an empty address contact-book
(setq *contact-book* '())

;; Function to add a contact to the address contact-book and at the same time append it to the file (Book.txt)
(defun add-contact (name phone email)
  (push (make-contact :name name :phone phone :email email) *contact-book*))  ;; Add the contact to the address contact-book

;; Function to load the address contact-book from a file which contains full book as one atom
(defun load-contact-book (file)
  (handler-case
      (with-open-file (in file :direction :input)
        (setq *contact-book* (read-from-string (read-line in))))  ;; Read the file as a string and then convert it to a list
    (end-of-file () (format t "Your contact book is empty!~%"))))

;; Function to save the address contact-book to a file on disk when the program exits
(defun save-contact-book (file)
  (with-open-file (out file :direction :output :if-exists :supersede)
    ;; Save as string to file
    (write-string (prin1-to-string *contact-book*) out))) ;; Write the address contact-book as a string to the file

;; Function to search for a contact by name
(defun search-contact-by-name (name)
  (loop for contact in *contact-book*
        when (string= name (contact-name contact))
        return contact))

;; Function to search for a contact by phone number
(defun search-contact-by-phone (phone)
  (loop for contact in *contact-book*
        when (string= phone (contact-phone contact))
        return contact))


;; Function to search for a contact by email
(defun search-contact-by-email (email)
  (loop for contact in *contact-book*
        when (string= email (contact-email contact))
        return contact))

;; Function to delete a contact from the address contact-book
(defun delete-contact (name)
  (setq *contact-book* (remove-if (lambda (contact) (string= name (contact-name contact))) *contact-book*)))

;; Function to delete a contact from the address contact-book by phone number
(defun delete-contact-by-phone (phone)
  (setq *contact-book* (remove-if (lambda (contact) (string= phone (contact-phone contact))) *contact-book*)))

;; Function to delete a contact from the address contact-book by email
(defun delete-contact-by-email (email)
  (setq *contact-book* (remove-if (lambda (contact) (string= email (contact-email contact))) *contact-book*)))

;; Function to display all contacts in the address contact-book
(defun display-all-contacts ()
  (let ((count 0))
    (loop for contact in *contact-book*
          do (incf count) ;; Increment the count by 1
          do (format t "~a. ~a ~a ~a~%" count (contact-name contact) (contact-phone contact) (contact-email contact)))))

;; Function to display a contact
(defun display-contact (contact)
  (format t "~a ~a ~a~%" (contact-name contact) (contact-phone contact) (contact-email contact)))

;; Function to display a menu
(defun display-menu ()
  (format t "============================================~%")
  (format t "1. Add a contact~%2. Search for a contact by name~%3. Search for a contact by phone number~%4. Search for a contact by email~%5. Delete a contact by name~%6. Delete a contact by phone number~%7. Delete a contact by email~%8. Display all contacts~%9. Exit~%")
  (format t "=============================================~%"))

;; Function to display a menu and get user input
(defun get-user-input ()
  (display-menu)
  (format t "Enter operation no: ")
  (read-line))

;; Function to add a contact
(defun choice-1 ()
  (format t "Enter name: ")
  (let ((name (read-line)))
    (format t "Enter phone: ")
    (let ((phone (read-line)))
      (format t "Enter email: ")
      (let ((email (read-line)))
        (add-contact name phone email)
        (format t "Contact added successfully~%")))))

;; Function to search for a contact by name
(defun choice-2 ()
  (format t "Enter name: ")
  (let ((name (read-line)))
    (let ((contact (search-contact-by-name name)))
      (if contact
          (display-contact contact)
          (format t "Contact not found~%")))))

;; Function to search for a contact by phone number
(defun choice-3 ()
  (format t "Enter phone: ")
  (let ((phone (read-line)))
    (let ((contact (search-contact-by-phone phone)))
      (if contact
          (display-contact contact)
          (format t "Contact not found~%")))))


;; Function to search for a contact by email
(defun choice-4 ()
  (format t "Enter email: ")
  (let ((email (read-line)))
    (let ((contact (search-contact-by-email email)))
      (if contact
          (display-contact contact)
          (format t "Contact not found~%")))))

;; Function to delete a contact by name
(defun choice-5 ()
  (format t "Enter name: ")
  (let ((name (read-line)))
    (let ((contact (search-contact-by-name name)))
      (if contact
          (progn    
            (delete-contact name)
            (format t "Contact deleted successfully~%"))
          (format t "Contact not found~%")))))


;; Function to delete a contact by phone number
(defun choice-6 ()
  (format t "Enter phone: ")
  (let ((phone (read-line)))
    (let ((contact (search-contact-by-phone phone)))
      (if contact
          (progn    
            (delete-contact-by-phone phone)
            (format t "Contact deleted successfully~%"))
          (format t "Contact not found~%")))))

;; Function to delete a contact by email
(defun choice-7 ()
  (format t "Enter email: ")
  (let ((email (read-line)))
    (let ((contact (search-contact-by-email email)))
      (if contact
          (progn    
            (delete-contact-by-email email)
            (format t "Contact deleted successfully~%"))
          (format t "Contact not found~%")))))
;; Function to display all contacts
(defun choice-8 ()
  (display-all-contacts))

;; Function to exit the program
(defun choice-9 ()
  (save-contact-book "Book.txt")
  (format t "Exiting program~%")
  (quit))


;; Function to process user input
(defun process-user-input (input)
  (cond ((string= input "1") (choice-1))
        ((string= input "2") (choice-2))
        ((string= input "3") (choice-3))
        ((string= input "4") (choice-4))
        ((string= input "5") (choice-5))
        ((string= input "6") (choice-6))
        ((string= input "7") (choice-7))
        ((string= input "8") (choice-8))
        ((string= input "9") (choice-9))
        (t (format t "Invalid input~%"))))

;; Function to run the program
(defun start-program ()
  (load-contact-book "Book.txt")
  (loop do (process-user-input (get-user-input))))

(start-program)