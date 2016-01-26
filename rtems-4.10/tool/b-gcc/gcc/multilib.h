static const char *const multilib_raw[] = {
". !msoft-float !mcpu=v8;",
"soft msoft-float !mcpu=v8;",
"v8 !msoft-float mcpu=v8;",
"soft/v8 msoft-float mcpu=v8;",
NULL
};

static const char *const multilib_matches_raw[] = {
"mno-fpu msoft-float;",
"mv8 mcpu=v8;",
"msoft-float msoft-float;",
"mcpu=v8 mcpu=v8;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "msoft-float mcpu=v8";
