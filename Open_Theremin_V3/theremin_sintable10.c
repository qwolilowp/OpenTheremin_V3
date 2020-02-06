/* Theremin WAVE Table - 1024 entries full table, max amplitude 2048,*/

#include <avr/pgmspace.h>

const int16_t sine_table10[1024] PROGMEM = {

-2,
-3,
-3,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
17,
46,
84,
123,
165,
208,
239,
266,
288,
304,
317,
327,
338,
349,
360,
367,
373,
378,
385,
393,
402,
476,
571,
695,
707,
690,
627,
652,
691,
765,
777,
779,
758,
800,
855,
935,
980,
1022,
1051,
1075,
1092,
1106,
1121,
1135,
1149,
1158,
1166,
1171,
1176,
1179,
1182,
1262,
1368,
1508,
1574,
1626,
1648,
1625,
1576,
1504,
1508,
1529,
1582,
1566,
1538,
1482,
1480,
1485,
1512,
1566,
1637,
1722,
1774,
1820,
1853,
1879,
1899,
1914,
1926,
1935,
1942,
1947,
1951,
1954,
1956,
1958,
1959,
1960,
1961,
1962,
1962,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1963,
1962,
1961,
1959,
1955,
1950,
1943,
1939,
1936,
1933,
1929,
1924,
1918,
1914,
1911,
1909,
1907,
1906,
1905,
1900,
1893,
1885,
1880,
1876,
1873,
1870,
1868,
1867,
1866,
1865,
1864,
1859,
1853,
1845,
1838,
1830,
1822,
1773,
1710,
1629,
1581,
1538,
1508,
1447,
1379,
1300,
1251,
1208,
1177,
1147,
1121,
1097,
1075,
1053,
1033,
1019,
1008,
999,
978,
953,
922,
891,
858,
824,
801,
782,
768,
747,
725,
700,
685,
671,
662,
647,
632,
615,
604,
595,
588,
583,
579,
576,
564,
550,
532,
521,
512,
505,
493,
480,
465,
456,
448,
442,
426,
408,
386,
356,
322,
284,
254,
226,
201,
182,
167,
155,
146,
139,
134,
130,
127,
124,
122,
121,
120,
116,
111,
104,
96,
87,
77,
71,
65,
61,
54,
46,
37,
28,
19,
10,
4,
-1,
-4,
-9,
-14,
-19,
-23,
-27,
-31,
-34,
-37,
-39,
-41,
-43,
-45,
-48,
-52,
-56,
-58,
-60,
-62,
-63,
-64,
-65,
-68,
-71,
-76,
-78,
-81,
-82,
-86,
-90,
-95,
-98,
-101,
-103,
-104,
-105,
-106,
-107,
-107,
-108,
-111,
-115,
-120,
-123,
-125,
-127,
-132,
-138,
-146,
-251,
-390,
-572,
-679,
-775,
-843,
-997,
-1170,
-1379,
-1506,
-1618,
-1698,
-1762,
-1810,
-1847,
-1875,
-1897,
-1914,
-1927,
-1937,
-1944,
-1950,
-1954,
-1958,
-1960,
-1962,
-1964,
-1965,
-1966,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1967,
-1968,
-1969,
-1970,
-1970,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1971,
-1972,
-1972,
-1973,
-1973,
-1974,
-1974,
-1974,
-1974,
-1974,
-1975,
-1975,
-1976,
-1976,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1977,
-1978,
-1979,
-1980,
-1981,
-1982,
-1982,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1983,
-1984,
-1984,
-1985,
-1985,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1986,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1985,
-1783,
-1515,
-1157,
-948,
-759,
-627,
-520,
-440,
-378,
-330,
-294,
-266,
-226,
-184,
-138,
-109,
-84,
-66,
-51,
-40,
-32,
-25,
-20,
-16,
-13,
-11,
-9,
-8,
-7,
-6,
-6,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-5

};