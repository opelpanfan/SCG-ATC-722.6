//722.6 temperature sensor map

static const int atfSensorMap[23][2] PROGMEM {
{1, -99  },   //temp
//-----------------------------------------------------------------------
{ 564, -40  },
{ 624, -30  },
{ 686, -20  },
{ 750, -10  },
{ 817, 0 },
{ 886, 10 },
{ 957, 20  },
{ 1032, 30  },
{ 1109, 40  },
{ 1189, 50  },
{ 1273, 60  },
{ 1306, 70  },
{ 1450, 80 },
{ 1545, 90 },
{ 1644, 100 },
{ 1747, 110 },
{ 1855, 120 },
{ 1968, 130 },
{ 2087, 140 },
{ 2211, 150 },
{ 2276, 160 },
{ 2479, 170 }};

static const int oilSensorMap[25][2] PROGMEM {
{9999, -99  },   //temp
//-----------------------------------------------------------------------
{ 130, 120 },
{ 145, 110  },
{ 185, 100  },
{ 245, 90  },
{ 325, 80  },
{ 435, 70  },
{ 600, 60 },
{ 830, 50 },
{ 1170, 40  },
{ 1700, 30  },
{ 2500, 20  },
{ 3700, 10  },
{ 5900, 0  },
{ 10000, -10  },
{ 15700, -20 }};

//Fueling map for injectionControl
static const int injectionMap[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load & lambda combined
//-----------------------------------------------------------------------
{ 0,         23,   28,   33,   33,   38,   56,   86,   96,   96,   20,  10 },
{ 1000,      23,   28,   33,   33,   38,   56,   86,   96,   96,   20,  10 },
{ 1500,      23,   28,   33,   33,   38,   56,   86,   96,   96,   20,  10 },
{ 2000,      23,   28,   33,   33,   38,   56,   86,   96,   96,   20,  10 },
{ 2500,      20,   25,   30,   30,   35,   53,   83,   93,   93,   20,  10 },
{ 3000,      15,   20,   25,   25,   30,   53,   80,   90,   90,   20,  10 },
{ 3500,      10,   15,   20,   20,   28,   53,   80,   85,   85,   20,  10 },
{ 4000,      10,   15,   20,   20,   28,   53,   80,   85,   85,   20,  10 },
{ 4500,      10,   15,   20,   20,   27,   53,   80,   85,   85,   20,  10 },
{ 5000,      10,   15,   20,   20,   27,   53,   80,   85,   85,   20,  10 },
{ 5500,       9,   15,   20,   20,   27,   53,   80,   85,   85,   20,  10 },
{ 6000,       9,   15,   20,   20,   27,   53,   80,   85,   85,   20,  10 },
{ 6500,       9,   15,   20,   20,   27,   53,   80,   85,   85,   20,  10 }};
//RPM

//Automatic mode autoGear map
static const int gearMap[14][12] PROGMEM  {
{255,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //throttle position %
//-----------------------------------------------------------------------
{   0,       2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2 },
{  10,       2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2 },
{  20,       3,    3,    3,    3,    3,    3,    2,    2,    2,    2,    2 },
{  30,       3,    3,    3,    3,    3,    3,    3,    2,    2,    2,    2 },
{  45,       4,    4,    4,    4,    4,    4,    4,    3,    3,    3,    3 },
{  50,       4,    4,    4,    4,    4,    4,    4,    3,    3,    3,    3 },
{  60,       5,    5,    5,    5,    5,    5,    5,    4,    4,    4,    4 },
{  70,       5,    5,    5,    5,    5,    5,    5,    5,    5,    4,    4 },
{  80,       5,    5,    5,    5,    5,    5,    5,    5,    5,    4,    4 },
{  90,       5,    5,    5,    5,    5,    5,    5,    5,    5,    4,    4 },
{ 100,       5,    5,    5,    5,    5,    5,    5,    5,    5,    4,    4 },
{ 110,       5,    5,    5,    5,    5,    5,    5,    5,    5,    5,    5 },
{ 120,       5,    5,    5,    5,    5,    5,    5,    5,    5,    5,    5 }};
//vehicle speed, km/h

//MPC map in normal drive (=outside shifts. This is just to make a better mileage, MPC pressure could be 100% outside shifts too.)
static const int mpcNormalMap[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{ -10,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{   0,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{  10,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{  20,      20,   25,   30,   30,   35,   53,   83,   93,   93,   95,  100 },
{  30,      15,   20,   25,   25,   30,   53,   80,   90,   90,   95,  100 },
{  40,      10,   15,   20,   20,   28,   53,   80,   85,   85,   90,  100 },
{  50,      10,   15,   20,   20,   28,   53,   80,   85,   85,   90,  100 },
{  60,      10,   15,   20,   20,   27,   53,   80,   85,   85,   90,  100 },
{  70,      10,   15,   20,   20,   27,   53,   80,   85,   85,   90,  100 },
{  80,       9,   15,   20,   20,   27,   53,   80,   85,   85,   90,  100 },
{  90,       9,   15,   20,   20,   27,   53,   80,   85,   85,   90,  100 },
{ 100,       9,   15,   20,   20,   27,   53,   80,   85,   85,   90,  100 }};
//oil temp

//Shift solenoid using time map, ms. Time to keep current flowing to shift pressure solenoid (SPC), shift solenoid,
//and to use shift-depedent maps for modulating pressure control (MPC) solenoid, instead of above map.
static const int shiftTimeMap[14][12] PROGMEM {
{999,       0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //shift pressure %
//-----------------------------------------------------------------------
{ -20,    1100, 1100, 1100, 1100, 1100, 1100, 1100, 1100,  900,  800,  800 },
{ -10,    1100, 1100, 1100, 1100, 1100, 1100, 1100,  900,  900,  800,  800 },
{   0,    1100, 1100, 1100, 1100, 1100, 1100,  900,  900,  900,  800,  800 },
{  10,    1100, 1100, 1100, 1100, 1100, 1100,  900,  900,  900,  800,  800 },
{  20,    1100, 1100, 1100, 1000, 1000, 1000,  900,  900,  900,  800,  800 },
{  30,    1100, 1100, 1100, 1000, 1000,  900,  900,  800,  700,  700,  600 },
{  40,    1000, 1000, 1000, 1000,  900,  800,  700,  700,  700,  500,  500 },
{  50,    1000, 1000, 1000,  900,  900,  800,  700,  700,  500,  500,  500 },
{  60,    1000, 1000, 1000,  900,  800,  700,  600,  500,  450,  450,  450 },
{  70,    1000, 1000,  900,  900,  800,  700,  600,  500,  450,  320,  320 },
{  80,    1000,  900,  900,  800,  800,  700,  600,  500,  320,  300,  300 },
{  90,    1000,  900,  800,  800,  800,  700,  600,  500,  320,  300,  300 },
{ 100,    1000,  900,  800,  800,  800,  700,  600,  500,  320,  300,  300 }};
//oil temp

static const int boostControlPressureMap[14][6] PROGMEM {
{999,        1,    2,    3,    4,    5   },      // gear
//-----------------------------------------------------------------------
{ -20,       0,    0,    0,    0,    0   },
{ -10,       0,    0,    0,    0,    0   },
{   0,       0,    0,    0,    0,    0   },
{  10,       0,    0,    0,    0,    0   },
{  20,       0,    0,    0,    0,    0   },
{  30,       0,    0,    0,    0,    0   },
{  40,       0,    0,    0,    0,    0   },
{  50,       0,    0,    0,    0,    0   },
{  60,       0,    0,    0,    0,    0   },
{  70,       0,    0,    0,    0,    0   },
{  80,     150,  150,  150,  250,  250   },
{  90,     150,  150,  150,  250,  250   },
{ 100,     150,  150,  150,  250,  250   }};
//oil temp

//Shift maps
//******************************************* 1 -> 2 *******************************************

//SPC map, 1 -> 2
static const int spcMap12[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{ -10,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{   0,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  10,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  20,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  30,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  40,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  50,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  60,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  70,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  80,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  90,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{ 100,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 }};
//oil temp

//MPC map, 1 -> 2
static const int mpcMap12[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{ -10,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{   0,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  10,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  20,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  30,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  40,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  50,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  60,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  70,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  80,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{  90,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 },
{ 100,      74,   74,   74,   74,   74,   74,   78,   88,  100,  100,  100 }};
//oil temp




//******************************************* 2 -> 3 *******************************************

//SPC map, 2 -> 3
static const int spcMap23[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{ -10,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{   0,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  10,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  20,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  30,      55,   55,   55,   55,   55,   72,   73,   38,  83,  83,  83 },
{  40,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  50,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  60,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  70,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  80,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  90,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83  },
{ 100,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83  }};
//oil temp

/*//MPC map, 2 -> 3
static const int mpcMap23[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{ -10,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{   0,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{  10,      23,   28,   33,   33,   38,   56,   86,   96,   96,   98,  100 },
{  20,      20,   25,   30,   30,   35,   53,   83,   93,   93,   95,  100 },
{  30,      15,   20,   25,   25,   30,   50,   80,   90,   90,   95,  100 },
{  40,      10,   15,   20,   20,   25,   50,   75,   85,   85,   90,  100 },
{  50,      10,   15,   20,   20,   25,   50,   75,   85,   85,   90,  100 },
{  60,      10,   15,   20,   20,   25,   50,   75,   85,   85,   90,  100 },
{  70,      10,   15,   20,   20,   25,   50,   55,   75,   85,   90,  100 },
{  80,       8,   13,   18,   18,   43,   50,   55,   75,   85,   90,  100 },
{  90,       8,   13,   18,   18,   43,   50,   55,   75,   85,   90,  100 },
{ 100,       8,   13,   18,   18,   43,   50,   55,   75,   85,   90,  100 }};
//oil temp*/
//MPC map, 2 -> 3 beefy
static const int mpcMap23[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{ -10,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{   0,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  10,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  20,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  30,      55,   55,   55,   55,   55,   72,   73,   38,  83,  83,  83 },
{  40,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  50,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  60,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  70,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  80,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83 },
{  90,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83  },
{ 100,      55,   55,   55,   55,   55,   72,   73,   83,  83,  83,  83  }};
//oil temp




//******************************************* 3 -> 4 *******************************************

//SPC map, 3 -> 4
static const int spcMap34[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{ -10,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{   0,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  10,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  20,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  30,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  40,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  50,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  60,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  70,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  80,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  90,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83  },
{ 100,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83  }};
//oil temp

//MPC map, 3 -> 4
static const int mpcMap34[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{ -10,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{   0,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  10,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  20,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  30,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  40,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  50,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  60,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  70,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  80,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83 },
{  90,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83  },
{ 100,      75,   75,   75,   75,   75,   75,   75,   83,  83,  83,  83  }};
//oil temp



//******************************************* 4 -> 5 *******************************************

//SPC map, 4 -> 5
static const int spcMap45[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      65,   75,   75,   75,   75,   72,   75,   83,  100,  100,  100 },
{ -10,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{   0,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  10,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  20,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  30,      75,   75,   75,   75,   75,   75,   75,   38,  100,  100,  100 },
{  40,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  50,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  60,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  70,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  80,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  90,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100  },
{ 100,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100  }};
//oil temp

//MPC map, 4 -> 5 beefy
static const int mpcMap45[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{ -10,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{   0,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  10,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  20,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  30,      75,   75,   75,   75,   75,   75,   75,   38,  100,  100,  100 },
{  40,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  50,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  60,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  70,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  80,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100 },
{  90,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100  },
{ 100,      75,   75,   75,   75,   75,   75,   75,   83,  100,  100,  100  }};
//oil temp


//******************************************* 5 -> 4 *******************************************

//SPC map, 5 -> 4
static const int spcMap54[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{ -10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{   0,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  30,      65,   65,   65,   65,   65,   72,   73,   38,  100,  100,  100 },
{  40,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  50,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  60,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  70,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  80,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  90,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  },
{ 100,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  }};
//oil temp

//MPC map, 5 -> 4
static const int mpcMap54[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{ -10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{   0,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  30,      65,   65,   65,   65,   65,   72,   73,   38,  100,  100,  100 },
{  40,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  50,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  60,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  70,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  80,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  90,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  },
{ 100,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  }};
//oil temp



//******************************************* 4 -> 3 *******************************************

//SPC map: 4 -> 3
static const int spcMap43[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{ -10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{   0,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  30,      65,   65,   65,   65,   65,   72,   73,   38,  100,  100,  100 },
{  40,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  50,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  60,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  70,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  80,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  90,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  },
{ 100,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  }};
//oil temp

//MPC map, 4 -> 3
static const int mpcMap43[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{ -10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{   0,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  10,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  20,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  30,      65,   65,   65,   65,   65,   72,   73,   38,  100,  100,  100 },
{  40,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  50,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  60,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  70,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  80,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100 },
{  90,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  },
{ 100,      65,   65,   65,   65,   65,   72,   73,   83,  100,  100,  100  }};
//oil temp



//******************************************* 3 -> 2 *******************************************

//SPC map, 3 -> 2
static const int spcMap32[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{ -10,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{   0,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  10,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  20,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  30,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  40,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  50,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  60,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  70,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  80,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  90,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{ 100,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 }};
//oil temp

//MPC map, 3 -> 2 beefy
static const int mpcMap32[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{ -10,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{   0,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  10,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  20,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  30,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  40,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  50,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  60,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  70,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  80,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{  90,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 },
{ 100,      17,   17,   17,   17,   17,   17,   17,   17,  17,  17,  19 }};
//oil temp



//******************************************* 2 -> 1 *******************************************

//SPC map, 2 -> 1
static const int spcMap21[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{ -10,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{   0,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{  10,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{  20,      74,   74,   74,   74,   74,   74,   78,   78,  90,  90,  90 },
{  30,      74,   74,   74,   74,   74,   74,   63,   63,  90,  90,  90 },
{  40,      74,   74,   74,   74,   74,   74,   61,   61,  90,  90,  90 },
{  50,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  60,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  70,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  80,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  90,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{ 100,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 }};
//oil temp


//MPC map, 2 -> 1
static const int mpcMap21[14][12] PROGMEM {
{999,        0,   10,   20,   30,   40,   50,   60,   70,   80,   90,   100 },   //load %
//-----------------------------------------------------------------------
{ -20,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{ -10,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{   0,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{  10,      74,   74,   74,   74,   74,   74,   80,   80,  90,  90,  90 },
{  20,      74,   74,   74,   74,   74,   74,   78,   78,  90,  90,  90 },
{  30,      74,   74,   74,   74,   74,   74,   63,   63,  90,  90,  90 },
{  40,      74,   74,   74,   74,   74,   74,   61,   61,  90,  90,  90 },
{  50,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  60,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  70,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  80,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{  90,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 },
{ 100,      74,   74,   74,   74,   74,   74,   60,   60,  90,  90,  90 }};
//oil temp

const uint8_t mersu_map[] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0x01, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x6f, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xdf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xbf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xbf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xbf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xbf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x3f, 0xfc, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xbf, 0xfe, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xfe, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x7f, 0xfe, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfb, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x6c, 0x1e, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1e, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x70, 0x07, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x00, 0x00, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x3f, 0xe0, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbf, 0xfe, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f, 0xfe, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x3f, 0xe2, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x00, 0x00, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x78, 0x1e, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x7b, 0x5e, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7b, 0xde, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xee, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x80, 0x00, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x40, 0x03, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};