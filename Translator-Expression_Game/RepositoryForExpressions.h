#ifndef RepositoryForExpressions
#define RepositoryForExpressions
#include <map>
#include <string>

std::map<std::string, std::string> myMap = {
		// grammar
		{ "Bqh chakal poveche ot edin chas, kogato vlakyt pristigna"  ,  "I had been waiting for more than an hour when the train arrived" } ,
		{ "Ne bqh chakal poveche ot edin chas, kogato vlakyt pristigna"  ,  "I had not been waiting for more than an hour when the train arrived" } ,
		{ "Chaka li mnogo predi da doide vlakyt?"  ,  "Had you been waiting for long before the train arrived?" } ,
		{ "Ivan i Petyr igraha futbol dva chasa predi da se umorqt"  ,  "Ivan and Petar had been playing football for two hours before they got tired" } ,

		{ "Katerina se provali na teoritichniq izpit za shofiorska knijka, zashtoto ne beshe uchila mnogo za nego"  ,
		"Katerina failed the theoretical driving exam because she had not been studying much for it" } ,

		{ "Bobi postoqnno zakysnqvashe za rabota zashtoto hodeshe mnogo na partita"  ,  "Bobi was constantly late for work because he had been partying a lot" } ,
		{ "Az samo si mechtaeh da otida v london predi da se poqvish"  ,  "I had only been dreaming to go to London before you came up" } ,
		{ "bih iskal da go vidq"  ,  "i'd like to see it" } ,
		{ "John i Rosi snoshti otidoha na teatyr"  ,  "John and Rossy went to the theater last night" } ,
		{ "Vremeto beshe ujasno"  ,  "The weather was horrible" } ,
		{ "Lili vinagi mi se obajdashe v petycite"  ,  "Lily always rang me on Fridays" } ,
		{ "Koga si roden?"  ,  "When were you born?" } ,
		{ "Ne valq"  ,  "It didn’t rain" } ,
		{ "Ne nosehme podhodqshti drehi"  ,  "We didn’t wear appropriate clothes" } ,
		{ "Predade li i kliuchovete?"  ,  "Did you give her the keys?" } ,
		// grammar
		{ "izpylnenie"  ,  "implementation" },
		{ "osven towa","besides"   },
		{ "Zaslujava da se otbeleji","It's worth noting"  },
		{ "kub kuhini"  ,  "bunch of cubbyholes"  },
		{ "izvlichane"  ,  "retrieve"  },
		{ "sledovatelno"  ,  "therefore"  },
		{ "prenebrejimo"  ,  "negligible"  },
		{ "vse po-dosadno"  ,  "increasingly tedious" },
		{ "nqma li da e hubavo"  ,  "wouldn't it be nice" },
		{ "ot vreme na vreme"  ,  "occasionally" },
		{ "kydeto ni trqbvat"  ,  "wherever we need them" },
		{ "shte trqbva"  ,  "you would have to" },
		{ "za da ni osvobodi ot tova breme"  ,  "to relieve us of this burden" },
		{ "podrejdane"  ,  "arranging" },
		{ "dali"  ,  "whether" },
		{ "sravneniq"  ,  "comparisons" },
	    { "izvikan"  ,  "invoked" },
		{ "razpada"  ,  "decay" },
		{ "sledovatelno"  , "therefore"},
		{ "ako iskash"  ,  "if you would" },
		{ "ne sym besen/lud"  ,  "i'm not mad" },
		{ "okazva se"  ,  "it turns out" },
		{ "taka che vypreki"  ,  "so even though" },
		{ "sposobnost"  ,  "capability" },
		{ "predpolaga"  ,  "assumes" },
		{ "umishleno"  ,  "intentional" },
		{ "osobeno"  ,  "particularly" },
		{ "vinagi kogato se zanimavate"  ,  "whenever you are dealing" },
		{ "ti/vie trqbva"  ,  "you should" },
		{ "propusnat"  ,  "omitted" },
		{ "kolkoto i stranno"  ,  "strangely enough" },
		{ "sblysak"  ,  "encounter" },
		{ "tyrseneto"  ,  "demand" },
		{ "chrez tozi instrumen"  ,  "through this tool" },
		{ "prispadane"  ,  "deduction" },
		{ "nelovko"  ,  "awkward" } ,
		{ "osnovno preduprejdenie"  ,  "major caveat" },
		{ "sybitiq"  ,  "occurrences" },
		{ "psevdonim"  ,  "alias" },
		{ "makar che"  ,  "although" },
		{ "vypreki che"  ,  "even though" },
		{ "prepovqdvane"  ,  "preaching" },
		{ "da zavyrja"  ,  "to tie" },
		{ "kato ima predvid"  ,  "whereas" },
		{ "ubejdavam te"  ,  "convince you" },
		{ "blagodarnost"  ,  "gratitude" },
		{ "udobstvo"  ,  "convenience" },
		{ "stranno"  ,  "weird" },
		{ "izhvyrleni"  ,  "discarded" },
		{ "atentat"  ,  "assassinate" },
		{ "pregrydka"  ,  "embrase" },
		{ "stegni se"  ,  "brace yourself" },
		{ "namereniq"  ,  "intentions" },
		{ "znachitelno"  ,  "vastly" },
		{ "razlichavam"  ,  "distinguish" },
		{ "predpolagam"  ,  "assume" },
		{ "predlojeniq"  ,  "assumptions" },
		{ "zanchitelen"  ,  "significant" },
		{ "i kakvo ot tova"  ,  "so what" },
		{ "subekti"  ,  "entities" },
		{ "gostopriemstvo"  ,  "hospitality" },
		{ "nadcenqva"  ,  "overestimate" },
		{ "podcenqva"  ,  "underestimate" },
		{ "jalyk"  ,  "pathetic" },
		{ "veselo"  ,  "hilarious" },
		{ "jaden"  ,  "thirsty" },
		{ "obobshtenie"  ,  "recap" },
		{ "sravnitelno"  ,  "comparatively" },
		{ "kakto i da e "  ,  "whatever" },
		{ "zakluchenie"  ,  "conclusion" },
		{ "izkushavashto"  ,  "tempting" },
		{ "dostatuchno"  ,  "sufficient" },
		{ "otvlichane"  ,  "kidnap" },
		{ "posledstviq"  ,  "consequences" },
		{ "predpochitam tova"  ,  "I'd rather that" },
		{ "sporazumenie"  ,  "agreement" },
		{ "bybriv"  ,  "chaty" },
		{ "razdraznitelen"  ,  "irritable" },
		{ "suvpadenie"  ,  "coincidence" },
		{ "zashto da iskam"  ,  "why would I want" },
		{ "chudo"  ,  "miracle" },
		{ "belejit"  ,  "notable" },
		{ "za shtastie"  ,  "fortunately" },
		{ "izdryjlivost"  ,  "endurance" },
		{ "prizvanie"  ,  "vocation" },
		{ "kovaren chovek"  ,  "conniving man" },
		{ "povod"  ,  "occasion" },
		{ "krainici"  ,  "limbs" },
		{ "maniq"  ,  "obsession" },
		{ "otvratitelno"  ,  "disgusting" },
		{ "pochinal"  ,  "deceased" },
		{ "involve"  ,  "vkluchvat" },
		{ "uslovna prisyda"  ,  "suspended sentence" },
		{ "imal predvid"  ,  "meant" },
};

#endif // !RepositoryForExpressions
