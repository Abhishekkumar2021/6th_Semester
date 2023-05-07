#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node{
    private:
    Node* children[128];
    wchar_t base;
    bool end;

    Node(){
        end = false;
        base = 2304;
    }

    bool hasChild(wchar_t c){
        return children[c - base] != NULL;
    }

    Node* getChild(wchar_t c){
        return children[c - base];
    }

    void setChild(wchar_t c, Node* child){
        children[c - base] = child;
    }

    void setEnd(bool end){
        this->end = end;
    }

    bool isEnd(){
        return end;
    }

    friend class Trie;
};

class Trie{
    Node* root;
    public:

    Trie(){
        root = new Node();
    }

    void insert(wstring s){
        Node* curr = root;
        for(int i = 0; i < s.length(); i++){
            wchar_t c = s[i];
            if(!curr->hasChild(c)){
                curr->setChild(c, new Node());
            }
            curr = curr->getChild(c);
        }
        curr->setEnd(true);
    }

    bool search(wstring s){
        Node* curr = root;
        for(int i = 0; i < s.length(); i++){
            if(!curr->hasChild(s[i])){
                return false;
            }
            curr = curr->getChild(s[i]);
        }
        return curr->isEnd();
    }

    private: void printAllWords(Node* root, wstring s){
        if(root->isEnd()){
            wcout << s << endl;
        }

        for(int i = 0; i < 128; i++){
            if(root->children[i] != NULL){
                printAllWords(root->children[i], s + (wchar_t)(i + root->base));
            }
        }
        
    }

    public: void printAllWords(){
        wstring s = L"";
        printAllWords(root, s);
    }

};

// Trie data structure with hindi characters support
map<int, string> hindi = {
    {2304, "ऀ"},
    {2305, "ँ"},
    {2306, "ं"},
    {2307, "ः"},
    {2308, "ऄ"},
    {2309, "अ"},
    {2310, "आ"},
    {2311, "इ"},
    {2312, "ई"},
    {2313, "उ"},
    {2314, "ऊ"},
    {2315, "ऋ"},
    {2316, "ऌ"},
    {2317, "ऍ"},
    {2318, "ऎ"},
    {2319, "ए"},
    {2320, "ऐ"},
    {2321, "ऑ"},
    {2322, "ऒ"},
    {2323, "ओ"},
    {2324, "औ"},
    {2325, "क"},
    {2326, "ख"},
    {2327, "ग"},
    {2328, "घ"},
    {2329, "ङ"},
    {2330, "च"},
    {2331, "छ"},
    {2332, "ज"},
    {2333, "झ"},
    {2334, "ञ"},
    {2335, "ट"},
    {2336, "ठ"},
    {2337, "ड"},
    {2338, "ढ"},
    {2339, "ण"},
    {2340, "त"},
    {2341, "थ"},
    {2342, "द"},
    {2343, "ध"},
    {2344, "न"},
    {2345, "ऩ"},
    {2346, "प"},
    {2347, "फ"},
    {2348, "ब"},
    {2349, "भ"},
    {2350, "म"},
    {2351, "य"},
    {2352, "र"},
    {2353, "ऱ"},
    {2354, "ल"},
    {2355, "ळ"},
    {2356, "ऴ"},
    {2357, "व"},
    {2358, "श"},
    {2359, "ष"},
    {2360, "स"},
    {2361, "ह"},
    {2362, "ऺ"},
    {2363, "ऻ"},
    {2364, "़"},
    {2365, "ऽ"},
    {2366, "ा"},
    {2367, "ि"},
    {2368, "ी"},
    {2369, "ु"},
    {2370, "ू"},
    {2371, "ृ"},
    {2372, "ॄ"},
    {2373, "ॅ"},
    {2374, "ॆ"},
    {2375, "े"},
    {2376, "ै"},
    {2377, "ॉ"},
    {2378, "ॊ"},
    {2379, "ो"},
    {2380, "ौ"},
    {2381, "्"},
    {2382, "ॎ"},
    {2383, "ॏ"},
    {2384, "ॐ"},
    {2385, "॑"},
    {2386, "॒"},
    {2387, "॓"},
    {2388, "॔"},
    {2389, "ॕ"},
    {2390, "ॖ"},
    {2391, "ॗ"},
    {2392, "क़"},
    {2393, "ख़"},
    {2394, "ग़"},
    {2395, "ज़"},
    {2396, "ड़"},
    {2397, "ढ़"},
    {2398, "फ़"},
    {2399, "य़"},
    {2400, "ॠ"},
    {2401, "ॡ"},
    {2402, "ॢ"},
    {2403, "ॣ"},
    {2404, "।"},
    {2405, "॥"},
    {2406, "०"},
    {2407, "१"},
    {2408, "२"},
    {2409, "३"},
    {2410, "४"},
    {2411, "५"},
    {2412, "६"},
    {2413, "७"},
    {2414, "८"},
    {2415, "९"},
    {2416, "॰"},
    {2417, "ॱ"},
    {2418, "ॲ"},
    {2419, "ॳ"},
    {2420, "ॴ"},
    {2421, "ॵ"},
    {2422, "ॶ"},
    {2423, "ॷ"},
    {2424, "ॸ"},
    {2425, "ॹ"},
    {2426, "ॺ"},
    {2427, "ॻ"},
    {2428, "ॼ"},
    {2429, "ॽ"},
    {2430, "ॾ"},
    {2431, "ॿ"},
};
map<string, int> code = {
{"ऀ" , 2304},
{"ँ" , 2305},
{"ं" , 2306},
{"ः" , 2307},
{"ऄ" , 2308},
{"अ" , 2309},
{"आ" , 2310},
{"इ" , 2311},
{"ई" , 2312},
{"उ" , 2313},
{"ऊ" , 2314},
{"ऋ" , 2315},
{"ऌ" , 2316},
{"ऍ" , 2317},
{"ऎ" , 2318},
{"ए" , 2319},
{"ऐ" , 2320},
{"ऑ" , 2321},
{"ऒ" , 2322},
{"ओ" , 2323},
{"औ" , 2324},
{"क" , 2325},
{"ख" , 2326},
{"ग" , 2327},
{"घ" , 2328},
{"ङ" , 2329},
{"च" , 2330},
{"छ" , 2331},
{"ज" , 2332},
{"झ" , 2333},
{"ञ" , 2334},
{"ट" , 2335},
{"ठ" , 2336},
{"ड" , 2337},
{"ढ" , 2338},
{"ण" , 2339},
{"त" , 2340},
{"थ" , 2341},
{"द" , 2342},
{"ध" , 2343},
{"न" , 2344},
{"ऩ" , 2345},
{"प" , 2346},
{"फ" , 2347},
{"ब" , 2348},
{"भ" , 2349},
{"म" , 2350},
{"य" , 2351},
{"र" , 2352},
{"ऱ" , 2353},
{"ल" , 2354},
{"ळ" , 2355},
{"ऴ" , 2356},
{"व" , 2357},
{"श" , 2358},
{"ष" , 2359},
{"स" , 2360},
{"ह" , 2361},
{"ऺ" , 2362},
{"ऻ" , 2363},
{"़" , 2364},
{"ऽ" , 2365},
{"ा" , 2366},
{"ि" , 2367},
{"ी" , 2368},
{"ु" , 2369},
{"ू" , 2370},
{"ृ" , 2371},
{"ॄ" , 2372},
{"ॅ" , 2373},
{"ॆ" , 2374},
{"े" , 2375},
{"ै" , 2376},
{"ॉ" , 2377},
{"ॊ" , 2378},
{"ो" , 2379},
{"ौ" , 2380},
{"्" , 2381},
{"ॎ" , 2382},
{"ॏ" , 2383},
{"ॐ" , 2384},
{"॑" , 2385},
{"॒" , 2386},
{"॓" , 2387},
{"॔" , 2388},
{"ॕ" , 2389},
{"ॖ" , 2390},
{"ॗ" , 2391},
{"क़" , 2392},
{"ख़" , 2393},
{"ग़" , 2394},
{"ज़" , 2395},
{"ड़" , 2396},
{"ढ़" , 2397},
{"फ़" , 2398},
{"य़" , 2399},
{"ॠ" , 2400},
{"ॡ" , 2401},
{"ॢ" , 2402},
{"ॣ" , 2403},
{"।" , 2404},
{"॥" , 2405},
{"०" , 2406},
{"१" , 2407},
{"२" , 2408},
{"३" , 2409},
{"४" , 2410},
{"५" , 2411},
{"६" , 2412},
{"७" , 2413},
{"८" , 2414},
{"९" , 2415},
{"॰" , 2416},
{"ॱ" , 2417},
{"ॲ" , 2418},
{"ॳ" , 2419},
{"ॴ" , 2420},
{"ॵ" , 2421},
{"ॶ" , 2422},
{"ॷ" , 2423},
{"ॸ" , 2424},
{"ॹ" , 2425},
{"ॺ" , 2426},
{"ॻ" , 2427},
{"ॼ" , 2428},
{"ॽ" , 2429},
{"ॾ" , 2430},
{"ॿ" , 2431},
};

int hexToInt(string s)
{
    int ans = 0;
    int start = 0;
    while (s[start] == '0')
        start++;
    for (int i = start; i < s.size(); i++)
    {
        ans *= 16;
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int val = 10 + (s[i] - 'A');
            ans += val;
        }
        else
        {
            int val = s[i] - '0';
            ans += val;
        }
    }
    return ans;
}

string intToHex(int x)
{
    string ans = "";
    while (x > 0)
    {
        int rem = x % 16;
        x /= 16;
        if (rem < 10)
        {
            ans += rem + '0';
        }
        else
        {
            ans += (rem - 10) + 'A';
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string hexToUnicode(string hex)
{
    string ans = "\\u";
    for (int i = 0; i < 4 - hex.size(); i++)
    {
        ans += '0';
    }
    ans += hex;
    return ans;
}

string intToUnicode(int num)
{
    switch (num)
    {
    case 2304:
    {
        string _2304 = "ऀ";
        return _2304;
    }
    case 2305:
    {
        string _2305 = "ँ";
        return _2305;
    }
    case 2306:
    {
        string _2306 = "ं";
        return _2306;
    }
    case 2307:
    {
        string _2307 = "ः";
        return _2307;
    }
    case 2308:
    {
        string _2308 = "ऄ";
        return _2308;
    }
    case 2309:
    {
        string _2309 = "अ";
        return _2309;
    }
    case 2310:
    {
        string _2310 = "आ";
        return _2310;
    }
    case 2311:
    {
        string _2311 = "इ";
        return _2311;
    }
    case 2312:
    {
        string _2312 = "ई";
        return _2312;
    }
    case 2313:
    {
        string _2313 = "उ";
        return _2313;
    }
    case 2314:
    {
        string _2314 = "ऊ";
        return _2314;
    }
    case 2315:
    {
        string _2315 = "ऋ";
        return _2315;
    }
    case 2316:
    {
        string _2316 = "ऌ";
        return _2316;
    }
    case 2317:
    {
        string _2317 = "ऍ";
        return _2317;
    }
    case 2318:
    {
        string _2318 = "ऎ";
        return _2318;
    }
    case 2319:
    {
        string _2319 = "ए";
        return _2319;
    }
    case 2320:
    {
        string _2320 = "ऐ";
        return _2320;
    }
    case 2321:
    {
        string _2321 = "ऑ";
        return _2321;
    }
    case 2322:
    {
        string _2322 = "ऒ";
        return _2322;
    }
    case 2323:
    {
        string _2323 = "ओ";
        return _2323;
    }
    case 2324:
    {
        string _2324 = "औ";
        return _2324;
    }
    case 2325:
    {
        string _2325 = "क";
        return _2325;
    }
    case 2326:
    {
        string _2326 = "ख";
        return _2326;
    }
    case 2327:
    {
        string _2327 = "ग";
        return _2327;
    }
    case 2328:
    {
        string _2328 = "घ";
        return _2328;
    }
    case 2329:
    {
        string _2329 = "ङ";
        return _2329;
    }
    case 2330:
    {
        string _2330 = "च";
        return _2330;
    }
    case 2331:
    {
        string _2331 = "छ";
        return _2331;
    }
    case 2332:
    {
        string _2332 = "ज";
        return _2332;
    }
    case 2333:
    {
        string _2333 = "झ";
        return _2333;
    }
    case 2334:
    {
        string _2334 = "ञ";
        return _2334;
    }
    case 2335:
    {
        string _2335 = "ट";
        return _2335;
    }
    case 2336:
    {
        string _2336 = "ठ";
        return _2336;
    }
    case 2337:
    {
        string _2337 = "ड";
        return _2337;
    }
    case 2338:
    {
        string _2338 = "ढ";
        return _2338;
    }
    case 2339:
    {
        string _2339 = "ण";
        return _2339;
    }
    case 2340:
    {
        string _2340 = "त";
        return _2340;
    }
    case 2341:
    {
        string _2341 = "थ";
        return _2341;
    }
    case 2342:
    {
        string _2342 = "द";
        return _2342;
    }
    case 2343:
    {
        string _2343 = "ध";
        return _2343;
    }
    case 2344:
    {
        string _2344 = "न";
        return _2344;
    }
    case 2345:
    {
        string _2345 = "ऩ";
        return _2345;
    }
    case 2346:
    {
        string _2346 = "प";
        return _2346;
    }
    case 2347:
    {
        string _2347 = "फ";
        return _2347;
    }
    case 2348:
    {
        string _2348 = "ब";
        return _2348;
    }
    case 2349:
    {
        string _2349 = "भ";
        return _2349;
    }
    case 2350:
    {
        string _2350 = "म";
        return _2350;
    }
    case 2351:
    {
        string _2351 = "य";
        return _2351;
    }
    case 2352:
    {
        string _2352 = "र";
        return _2352;
    }
    case 2353:
    {
        string _2353 = "ऱ";
        return _2353;
    }
    case 2354:
    {
        string _2354 = "ल";
        return _2354;
    }
    case 2355:
    {
        string _2355 = "ळ";
        return _2355;
    }
    case 2356:
    {
        string _2356 = "ऴ";
        return _2356;
    }
    case 2357:
    {
        string _2357 = "व";
        return _2357;
    }
    case 2358:
    {
        string _2358 = "श";
        return _2358;
    }
    case 2359:
    {
        string _2359 = "ष";
        return _2359;
    }
    case 2360:
    {
        string _2360 = "स";
        return _2360;
    }
    case 2361:
    {
        string _2361 = "ह";
        return _2361;
    }
    case 2362:
    {
        string _2362 = "ऺ";
        return _2362;
    }
    case 2363:
    {
        string _2363 = "ऻ";
        return _2363;
    }
    case 2364:
    {
        string _2364 = "़";
        return _2364;
    }
    case 2365:
    {
        string _2365 = "ऽ";
        return _2365;
    }
    case 2366:
    {
        string _2366 = "ा";
        return _2366;
    }
    case 2367:
    {
        string _2367 = "ि";
        return _2367;
    }
    case 2368:
    {
        string _2368 = "ी";
        return _2368;
    }
    case 2369:
    {
        string _2369 = "ु";
        return _2369;
    }
    case 2370:
    {
        string _2370 = "ू";
        return _2370;
    }
    case 2371:
    {
        string _2371 = "ृ";
        return _2371;
    }
    case 2372:
    {
        string _2372 = "ॄ";
        return _2372;
    }
    case 2373:
    {
        string _2373 = "ॅ";
        return _2373;
    }
    case 2374:
    {
        string _2374 = "ॆ";
        return _2374;
    }
    case 2375:
    {
        string _2375 = "े";
        return _2375;
    }
    case 2376:
    {
        string _2376 = "ै";
        return _2376;
    }
    case 2377:
    {
        string _2377 = "ॉ";
        return _2377;
    }
    case 2378:
    {
        string _2378 = "ॊ";
        return _2378;
    }
    case 2379:
    {
        string _2379 = "ो";
        return _2379;
    }
    case 2380:
    {
        string _2380 = "ौ";
        return _2380;
    }
    case 2381:
    {
        string _2381 = "्";
        return _2381;
    }
    case 2382:
    {
        string _2382 = "ॎ";
        return _2382;
    }
    case 2383:
    {
        string _2383 = "ॏ";
        return _2383;
    }
    case 2384:
    {
        string _2384 = "ॐ";
        return _2384;
    }
    case 2385:
    {
        string _2385 = "॑";
        return _2385;
    }
    case 2386:
    {
        string _2386 = "॒";
        return _2386;
    }
    case 2387:
    {
        string _2387 = "॓";
        return _2387;
    }
    case 2388:
    {
        string _2388 = "॔";
        return _2388;
    }
    case 2389:
    {
        string _2389 = "ॕ";
        return _2389;
    }
    case 2390:
    {
        string _2390 = "ॖ";
        return _2390;
    }
    case 2391:
    {
        string _2391 = "ॗ";
        return _2391;
    }
    case 2392:
    {
        string _2392 = "क़";
        return _2392;
    }
    case 2393:
    {
        string _2393 = "ख़";
        return _2393;
    }
    case 2394:
    {
        string _2394 = "ग़";
        return _2394;
    }
    case 2395:
    {
        string _2395 = "ज़";
        return _2395;
    }
    case 2396:
    {
        string _2396 = "ड़";
        return _2396;
    }
    case 2397:
    {
        string _2397 = "ढ़";
        return _2397;
    }
    case 2398:
    {
        string _2398 = "फ़";
        return _2398;
    }
    case 2399:
    {
        string _2399 = "य़";
        return _2399;
    }
    case 2400:
    {
        string _2400 = "ॠ";
        return _2400;
    }
    case 2401:
    {
        string _2401 = "ॡ";
        return _2401;
    }
    case 2402:
    {
        string _2402 = "ॢ";
        return _2402;
    }
    case 2403:
    {
        string _2403 = "ॣ";
        return _2403;
    }
    case 2404:
    {
        string _2404 = "।";
        return _2404;
    }
    case 2405:
    {
        string _2405 = "॥";
        return _2405;
    }
    case 2406:
    {
        string _2406 = "०";
        return _2406;
    }
    case 2407:
    {
        string _2407 = "१";
        return _2407;
    }
    case 2408:
    {
        string _2408 = "२";
        return _2408;
    }
    case 2409:
    {
        string _2409 = "३";
        return _2409;
    }
    case 2410:
    {
        string _2410 = "४";
        return _2410;
    }
    case 2411:
    {
        string _2411 = "५";
        return _2411;
    }
    case 2412:
    {
        string _2412 = "६";
        return _2412;
    }
    case 2413:
    {
        string _2413 = "७";
        return _2413;
    }
    case 2414:
    {
        string _2414 = "८";
        return _2414;
    }
    case 2415:
    {
        string _2415 = "९";
        return _2415;
    }
    case 2416:
    {
        string _2416 = "॰";
        return _2416;
    }
    case 2417:
    {
        string _2417 = "ॱ";
        return _2417;
    }
    case 2418:
    {
        string _2418 = "ॲ";
        return _2418;
    }
    case 2419:
    {
        string _2419 = "ॳ";
        return _2419;
    }
    case 2420:
    {
        string _2420 = "ॴ";
        return _2420;
    }
    case 2421:
    {
        string _2421 = "ॵ";
        return _2421;
    }
    case 2422:
    {
        string _2422 = "ॶ";
        return _2422;
    }
    case 2423:
    {
        string _2423 = "ॷ";
        return _2423;
    }
    case 2424:
    {
        string _2424 = "ॸ";
        return _2424;
    }
    case 2425:
    {
        string _2425 = "ॹ";
        return _2425;
    }
    case 2426:
    {
        string _2426 = "ॺ";
        return _2426;
    }
    case 2427:
    {
        string _2427 = "ॻ";
        return _2427;
    }
    case 2428:
    {
        string _2428 = "ॼ";
        return _2428;
    }
    case 2429:
    {
        string _2429 = "ॽ";
        return _2429;
    }
    case 2430:
    {
        string _2430 = "ॾ";
        return _2430;
    }
    case 2431:
    {
        string _2431 = "ॿ";
        return _2431;
    }
    }
    return "NULL";
}

void printToFile()
{
    int lower = hexToInt("900");
    int upper = hexToInt("97F");

    // for (int i = lower; i <= upper; i++)
    // {
    //     cout << "case " << to_string(i) << ": {" << endl;
    //     cout << "   string _" << to_string(i) << " = \"" << intToUnicode(i) << "\";" << endl;
    //     cout << "   return _" << to_string(i) << ";\n}" << endl;
    // }

    // Build map
    cout << "map<string, int> code = {" << endl;
    for (int i = lower; i <= upper; i++)
    {
        cout << "{\"" << intToUnicode(i) << "\" , " << to_string(i) << "}," << endl;
    }
    cout << "};";
}

vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while (getline(ss, tok, delimiter))
    {
        internal.push_back(tok);
    }

    return internal;
}

// Inbuilt function that coverts a string to unicode
int main()
{
    // Unicode values for Hindi characters - \u0900 to \u097F or 2304 to 2431
    // printToFile();

    
    // string s = "अ";
    // cout << code[s] << endl;

    // // using wstrings 
    // wstring ws = L"टैक्स";
    // wcout << ws << endl;
    
    // for(int i = 0; i < ws.length(); i++)
    // {
    //     cout <<  ws[i] << endl;
    //     // storing single character in wchar_t
    //     wchar_t ch = ws[i];
    //     cout << ch << endl;

    //     cout << ch - 200 <<endl;

    //     // character to hindi 
    //     cout << intToUnicode(ch) << endl;

    //     // hindi to character
    //     cout << code[intToUnicode(ch)] << endl;
    // }

    // ifstream file("Hindi.txt");

    // string str;
    // while (getline(file, str))
    // {
    //     // convert to wstring
    //     wstring wstr = wstring(str.begin(), str.end());

    //     // print wstring
    //     wcout << wstr << endl;
    // }

    // // convert a string to wstring
    // wstring wstr = wstring(str.begin(), str.end());

    // // convert a wstring to string
    // string str2 = string(wstr.begin(), wstr.end());

    Trie t;
    wstring wstr = L"टैक्स";
    wstring a = L"माँ";
    wstring b = L"पानी";
    wstring c = L"बच्चा";
    wstring d = L"भारत";
    wstring e = L"माँ";
    wstring f = L"हिन्दी";
    wstring g = L"विकिपीडिया";
    wstring h = L"बच्चा";
    wstring i = L"विज्ञान";

    t.insert(a);
    t.insert(b);
    t.insert(c);
    t.insert(d);
    t.insert(e);
    t.insert(f);
    t.insert(g);

    t.insert(wstr);

    // cout << t.search(wstr) << endl;
    cout << t.search(h) << endl;
    cout << t.search(i) << endl;

    t.printAllWords();

    return 0;
}