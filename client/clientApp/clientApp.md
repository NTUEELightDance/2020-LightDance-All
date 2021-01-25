# client Application

## Compile

```bash
$ make
```

## Usage

```bash
$ sudo ./clientApp [dancer ID]
(default dancer ID 0)
```

**Note:** must be run with `sudo` permission.

After read-in the json file (should show "[Done!!]")...

```c++
>> run <time>
```

**Note:** even from the begin, you should type `run 0`

After read-in the json file (should show "[Done!!]")...

```c++
>> run <time>
```

**Note:** even from the begin, you should type `run 0`

Catch system `signal` to do following actions:

- `2/SIGINT` (ctrl + c): Exit the process. Turn off all the ELs, LEDs.
- `16/SIGUSR1`: customed pause, can run again.
- `19/SIGSTOP`: Pause the process, waiting for `18/SIGCONT` to continue.

> For testing

```bash
$ kill -s SIGINT <pid>
$ kill -s SIGUSR1 <pid>
$ ps -C clientApp -o pid=|xargs kill -2
```

## Data.h

- paths

  - path of LED arrays

- Person
  - time_line(vector of execute)
    - start_time
    - end_time
    - LEDs(vector of LED_part)
      - name // use index of vector
      - path
      - alpha
    - parts(vector of EL_part)
      - name // use index of vector
      - brightness

### EL_part

<<<<<<< HEAD

1. "HAT1"
2. "HAT2"
3. "FACE1"
4. "FACE2"
5. "R_COAT1"
6. "R_COAT2"
7. "L_COAT1"
8. "L_COAT2"
9. "INNER1"
10. "INNER2"
11. "R_ARM1"
12. "R_ARM2"
13. "R_HAND"
14. "L_ARM1"
15. "L_ARM2"
16. "L_HAND"
17. "R_PANTS1"
18. "R_PANTS2"
19. "L_PANTS1"
20. "L_PANTS2"
21. "R_SHOE1"
22. "R_SHOE2"
23. "L_SHOE1"
24. "L_SHOE2"

> > > > > > > 230d97cb7ce450a186f13542c264e7b8cecbaac0

25. "HAT1"
26. "HAT2"
27. "FACE1"
28. "FACE2"
29. "R_COAT1"
30. "R_COAT2"
31. "L_COAT1"
32. "L_COAT2"
33. "INNER1"
34. "INNER2"
35. "R_ARM1"
36. "R_ARM2"
37. "R_HAND"
38. "L_ARM1"
39. "L_ARM2"
40. "L_HAND"
41. "R_PANTS1"
42. "R_PANTS2"
43. "L_PANTS1"
44. "L_PANTS2"
45. "R_SHOE1"
46. "R_SHOE2"
47. "L_SHOE1"
48. "L_SHOE2"

### LED_part

<<<<<<< HEAD

=======

> > > > > > > 230d97cb7ce450a186f13542c264e7b8cecbaac0

1. "CHEST"
2. "R_SHOE"
3. "L_SHOE"

## Json File

<<<<<<< HEAD

=======

> > > > > > > 230d97cb7ce450a186f13542c264e7b8cecbaac0
> > > > > > > Json file should follow specific format: "./json/test2.json"

**Note** The last execution of every dancer should be **ALL BLACK**

## Dependencies

- [bcm2835](https://www.airspayce.com/mikem/bcm2835/)
- [rpidmx512](https://github.com/vanvught/rpidmx512)
- [JSON for Modern C++](https://github.com/nlohmann/json)
