# INTEGERS IN COMPETITIVE PROGRAMMING

| INTEGER TYPE | BIT-TYPE |                  RANGE                   |                               APPX RANGE |
| :----------- | :------: | :--------------------------------------: | ---------------------------------------: |
| int          |    32    |  -2<sup>31</sup> ... 2<sup>31</sup> - 1  |   -2.10<sup>9</sup> ... 2.10<sup>9</sup> |
| long long    |    64    |  -2<sup>63</sup> ... 2<sup>63</sup> - 1  | -9.10<sup>18</sup> ... 9.10<sup>18</sup> |
| \_\_int128_t |   128    | -2<sup>127</sup> ... 2<sup>127</sup> - 1 |     -10<sup>38</sup> ... 10<sup>38</sup> |

## WRONG OUTPUT

     int p = 123456789;
     long long q = p * p;
     cout << 'Wrong output' << q << '\n';

- expression p\*p will result type int
- because of this q will have wrong output
- change p's type to long long or
- change expression to (long long)p\*p
