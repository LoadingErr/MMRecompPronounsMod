#include "eztr_api.h"
#include "modding.h"
#include "recompconfig.h"

typedef enum {
    GENDER_TYPE_FEMALE,
    GENDER_TYPE_NB,
} GenderMode;

#define CFG_GENDER_MODE ((GenderMode)recomp_get_config_u32("gender_type"))

EZTR_ON_INIT void replace_msgs() {
    if (CFG_GENDER_MODE == GENDER_TYPE_NB) {
        EZTR_Basic_ReplaceText(
            0x0966,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E97W-Well, we haven't any time to|11lose...|11|13|12Quickly, Mx. |16, could you|11please find something to |01carry|00 me|11in so you can take me to the|11Deku Palace?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0459,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy! You don't have that much!|11You shouldn't lie to people!|11And you can take that to the|11bank, buddy!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0969,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E97Hwh-Hwhy are you hwaiting?|11Mx. |01|16|00!|11|13|12Huh-Hurry! Ho-Hopen this |01bottle|11|00and release me right hwh-hwhere|11my father is standing.|1C|00|1E|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x096D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8CWhy yes, thanks to|11Mx. |16 here.|11I am very, truly grateful.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x096F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8CIt seems our butler has taken|11somewhat of a liking to you,|11Mx. |16.|11|12I believe you'll find him waiting in|11the shrine that will be to your|11|01right|00 when you leave the palace.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0971,
            EZTR_STANDARD_TEXT_BOX_I,
            16,
            EZTR_ICON_DEKU_PRINCESS,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei7Ungh! Mx. |01|16|00!|11There's nuh-no time to lose!|11Huh-Hurry! Take me to the palace!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x28AA,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Mx. |16, is it?|11One moment, please.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x28AB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Mx. |16,|11I have you down for an afternoon|11arrival.|11|12Your room is our \"Knife Chamber\"|11on the |01second floor|00. Here is your|11|01key|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2952,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hello, Mx. Scrub.|11How about this rain?|11|13|12Do you scrubs feel sad on rainy|11days, too?|11|13|12....|11But Deku Scrubs are supposed to|11like rain. At least one of us has|11reason to be happy...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0517,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The southern swamp at |01Woodfall|11|00lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0519,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The southern swamp at |01Woodfall|11|00lies in this direction.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0521,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The mountains of |01Snowhead|00 lie|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0523,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The mountains of |01Snowhead|00 lie|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x052B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12At |01Great Bay|00, you can see clear|11to the |01ocean|00. It lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x052D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12From |01Great Bay|00, you can see clear|11to the|01 ocean|00. It lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0535,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The canyon at |01Stone Tower|00 lies|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0537,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to treat you like a child.|11|13|12The canyon at |01Stone Tower|00 lies|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0548,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies. It was wrong of|11me to stop you. The mountains of|11|01Snowhead |00lie this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0614,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D1Excuse me!|11|13|13|12I keep hearing about a stone|11called a |01Moon's Tear|00, and it's|11supposed to be the shiniest stone|11in the world!|10Do you have one?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0616,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D2Please, if you have a |01Moon's Tear|00,|11I must get it from you...And I'm|11not asking to get it for free!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0619,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E8|81Oh, you've really helped me out!|11Now I have the perfect souvenir|11for my wife!|11|12She hasn't seen a jewel or|11strange, shining stone like this in|11quite a long time...Hee-hee!|11|12The |01Title Deed|00 for this spot will|11be in big demand by Deku Scrubs|11outside of town.|11|12You should be able to sell it to a|11Deku Scrub for a good price!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0967,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8BIt's Mx. |16, correct?|11You have strange powers,|11indeed...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15E9,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D2Do you know what |02magic beans|11|00are?|11I'll sell you one for |0610 Rupees|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15FE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E8|80|17Thanks for stopping by!|18|11I'm doing business with a focus on|11a Goron clientele. And that, friend,|11makes you a customer.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D00,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyWhat's this?|11Green clothes...White fairy...|11Could you, by chance, be a|11forest fairy?|10Oh my!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D01,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EizMy name is |06Tingle|00!|11I think I am the same as you, friend.|11A forest fairy!|11|12Alas, though I am already age 35,|11no fairy has come to me yet...|11|13|12My father tells me to grow up|11and act my age, but why?|11|13|12I tell you...Tingle is the very|11reincarnation of a fairy!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D05,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyHuh?...A white fairy?|11|13|13|12The way you look?|11Ohh...Magic, isn't it?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0A,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei{But... you don't have enough|11|06Rupees|00!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyExcuse me?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EizHello, Mx. Fairy!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2735,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei\\This training center is for|11studying the lowly sword...It is no|11place for one of your stature.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2931,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Why was the...? Why was the...?|11Why was the dog the leader?!?|11Was it 'cause something was|11wrong with me???|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AF9,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "The bar opens at night.|11|13|13|12And it's members-only. We refuse|11people who don't have |01proof of|11membership|00.|11|12Well, now I'm getting things ready,|11so as long as you don't get in the|11way of my cleaning, you can stay.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B09,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Excuse me...It's the rules. Please|11wear your |01Romani's Mask|00 inside the bar.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B0C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You don't have enough |06Rupees|00.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B62,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Mmm, kid, if you don't have any|11|06Rupees|00, you can't buy your|11dreams.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B63,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We are now exchanging|11winning tickets.|11|13|12If you'd like to buy a ticket, we'll|11start selling them tomorrow|11|01morning |00at|01 6 o'clock|00.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3337,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei.Hello, Mx. Foreigner.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3341,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, Grasshopper, I'm recruiting|11for an assistant right now!|11|13|12You have a bow, won't you try?|11 |11|02|C2Yes|11No|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x335F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei.Good evening, Mx. Foreigner!|11|13|13|12Romani is looking after things.|11My sister went to town.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3389,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Kid, get your bow ready...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x33BB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Are you ready, kid?|11I'm going to try to get us through|11here as fast as I can!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x345C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiRHey, there.|11Heh, heh...What brings you here?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x346F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "This kid's funny!|11Why don't you give us |0610 Rupees|11|00for the chance to race against|11us?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3479,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "This kid's no fun!|11That's why you don't succeed!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x347B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Big bro, I wonder if we can give|11that to this kid?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x347C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give them something. Well,|11they're a kid, so what could they do|11with it? It should be fine...|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3484,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Now that's not your horse, is it|11now, bud?|11|13|12Well, that thing's just a colt...|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x348A,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, child, do you have some|11business at the Gorman Brothers'|11Ranch on such a terrible day?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x349E,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Big bro, I wonder if we can give|11that to this kid?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x349F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give them something.|11Besides, we don't need it anymore,|11so what's the big deal?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x34A1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give them something. And|11that something is...milk!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x34A7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, you, shouldn't you take refuge|11somewhere?|11|13|12I mean, there's that rumor and all.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046A,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, yes...|01|16|00.|11If I remember, you're the kid|11who deposited |06|CE|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045A,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "All right, kiddo, now I've got a|11total of |06|CE|00 from you!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x044C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey there, kiddo!|11Won't you deposit some |06Rupees|00?|11|13|12Nowadays, even if people have|11money, they don't deposit any.|11|17Nothing!|18  |17Nothing!!!|18|11|12So, for a limited time, I'll give you|11a special gift based on how much|11you deposit.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0455,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Whaaat?!?|11You're really gonna give me that|11much? You're one rich kid!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0456,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think about it, kid!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0458,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Hmm...You play mean jokes,|11kiddo! You haven't even got|11a single |06Rupee|00!|18|11|12Come back and deposit some after|11you save up a bunch!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already|11saved up |01200 Rupees|00!?!|18|11|13|12Well, kiddo, here's your special|11gift. Take it!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already saved|11up |011000 Rupees|00!?!|18|11|13|12Well, kiddo, here's your special|11gift. Take it!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already saved|11up |015000 Rupees|00?!|18|11|13|12Well, kiddo, I can't take any|11more deposits. Sorry, but this is|11all I can give you.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045E,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "...Hang on there, kiddo.|11I can't take any more deposits.|11Sorry...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Excuuuse me! But I can't take|11anymore deposits!|18|11|13|12Sheesh, kiddo! |11You're young, but you sure are|11serious about saving!|11I'm impressed!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0461,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "So, kid, what's your name?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0467,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's this? You need somethin'|11on a day like this?|11|13|12You haven't evacuated yet? You're|11amazing, kiddo!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046C,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, yes...|01|16|00, right?|11If I remember, you're the kid|11who deposited |06|CE|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046D,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Look, kiddo, if it's 'cause of|11the bad rumors going around,|11forget it! They're just rumors!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0475,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's this?|11Look, kiddo, you can't hold|11this many Rupees! You got that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0478,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Look, kiddo, all the |06Rupees|11|00you deposited are gone, so you|11can't use that |01stamp|00 anymore.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x047C,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think it over, kiddo!|11|13|12So what are you gonna do?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x047D,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think it over, kiddo!|11|13|12So what are you gonna do?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0710,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|03You did it!|11So what's your name, bud?|11|13|12|1F|00|0A|01|16|00, huh?|11|13|13|12All right! That Skull Kid broke our|11rules and he's been doing all|11kinds of bad things lately.|11|12Starting today, he's out! I'm|11making |01|16|00 a |01Bomber|00! You|11guys don't mind, right?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0719,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|02What do you want? |11I'm busy practicing with my|11blowgun! Don't mess with me!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x072F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, you! You haven't passed my|11test, so how do you know my|11|01secret code|00?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0730,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, you!|11How do you know our |01secret|11code|00?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0732,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Listen, pal!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0734,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's your name, bud?|11|13|13|12|1F|00|0A|16, huh?|11All right...That Skull Kid broke our|11rules and is doing all kinds of|11stuff...|10I'm making |01|16 |00a new|11member of the |01Bombers|00 instead!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0753,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|03Are you the one who just popped|11that up there?|11Whoa!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0754,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, just for you, bud, I can make|11you a member of our gang, the|11|01Bombers|00!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0758,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|00What's the deal, huh?|11You dress like you think you're all|11cool, but you're nothing special!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x08D1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Huh? That scrub...|11Where did they go???|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x08D7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Huh? That scrub...|11Where did they go?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x12D0,
            EZTR_STANDARD_TEXT_BOX_II,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Welcome.|11Did you come to buy something,|11kid?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F40,
            EZTR_STANDARD_TEXT_BOX_I,
            1,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hee, hee.|11You two fairies did great!|11|13|12I wonder if they have anything good|11on them...|11|13|12Huh?|11This person...|11|13|12...Well, that shouldn't be a|11problem.|1D|00|14|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2340,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Oh, are you a member of Latte,|11kiddo? That's great!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FD,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKAll right, kid!|11The rules are simple...|11|13|12Hit as many |01red ones|00 as you can|11within the time limit.|11|13|12If you hit a |03blue one|00, you lose|11time, so watch out!|11|13|12You can use as many arrows as|11you'd like. Press |B1 to shoot|11them.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKAll right, kid!|11Aim for the |01red ones|00.|11Don't mess up and hit one of|11them |03blue ones |00by mistake!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DA,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy...You don't even have enough|11Rupees, yo!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DB,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What? Heyyy, dawg! You can't hold|11any more!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DD,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Man...My boss will yell at me if I|11sell this to you when you don't|11even have a bow. Don't do this|11to me, yo!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy! I stole that Rupee from a|11crow! Don't go stealing it, yo!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1211,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That melody's bogus, yo!|11|13|13|12What's wrong? You're not jammin'|11like you usually do!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1216,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That's uncool, yo...|11What are you tryin' to do, walkin'|11into people's rooms like that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1538,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Young knight who has|11awakened and deftly defeated|11me...|11|12I shall rely on your power to|11fulfill my request.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x158F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Eic|17Oh!|11Isn't this a fairy?|18|11|13|12Is this yours, |17young one?|18|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1594,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Say, |17young one!|18|11Would you permit me to do|11research on this fairy?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15A5,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Eic|17Oh! That mask is certainly a|11Gibdo!|18|11|13|12|17Young one!|18|11Where did you get that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15A7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Say, young one!|18|11Would you permit me to do|11research on that mask?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x220D,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Masks...You have...a lot.|11You, too...Will you be...|11a mask salesperson?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0FA1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiIHmm? What is it, child?|11Did you also come to watch the|11Zora eggs hatch?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x145D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "I found him, |02green hat kid|00...|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x14D8,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You are a child of much vigor.|11|13|13|12Defeat the ladies within the time|11limit and rest their souls in peace.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F49,
            EZTR_STANDARD_TEXT_BOX_I,
            1,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|05|1E)%You!|11|13|13|12If I wasn't dealing with you,|11I wouldn't have gotten separated|11from my brother!|11|12Well, don't just sit there, Deku|11kid! Do something!!!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F52,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "In the land of Hyrule, there|11echoes a legend. A legend held|11dearly by the Royal Family that|11tells of a child...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F53,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "A child who,|11after battling evil and saving|11Hyrule, crept away from the land|11that had made them a legend...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F54,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Done with the battles they once|11waged across time, they embarked|11on a journey. A secret and|11personal journey...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F56,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "A friend with whom they parted|11ways when they finally fulfilled their|11heroic destiny and took their place|11among legends...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x292F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiYWhy could a...? Why could a...?|11Why could a man join?!?|11That's 'cause a man is an animal,|11too, my friend!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x29FC,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiSHey, kid! Shouldn't you be with|11your parents? Go on! Get!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AE3,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Where's your momma, kid? Huh?|11You came here by yourself? Well,|11aren't you all grown-up?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03E8,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKIf you think you can do it, why|11don'tcha give it a try, kid?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03EA,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKIf you still have time, why|11don'tcha try it, kid?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiLOy! Oy! You don't have enough|11Rupees, kid!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x236F,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You can't aim for the targets|11when you're wearin' a mask, kid.|11Take it off.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2371,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Eeesh! You can't aim for the|11targets wearin' somethin' like that|11monstrosity on your head, kid.|11Take it off.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AE4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Once you get older, kiddo, come|11see The Indigo-Go's perform live at|11Zora Hall.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10E6,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19They say they won't do it, little|11brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10E7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AThey're no fun. They're just a|11stick in the mud.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EC,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19Koo, koo, koo.|11They say they won't do it, little|11brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19They did it, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AYeah, they did it, big brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10F3,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19They're back, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10F4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AYeah, they're back, big brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10FF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19I guess they're just a stick|11in the mud, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1104,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19If we give THAT to them, I wonder|11if they'll leave us alone,|11little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1102,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19They're a formidable opponent,|11little brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2841,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I see, they don't|11have a bow, Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2842,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh...Then they can't play, can|11they, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2843,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqWhat should we do, Honey?|11Surely this one doesn't have a|11bow, so they can't play here...|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2844,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh...Too bad. But, Darling, even if|11they don't have a bow, they could|11play if they had some sort of|11way of shooting at things...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2846,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei*But it looks like they can shoot|11|01bubbles|00, so let's let them play,|11Darling.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x284B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I can see, they|11don't seem to have a bow,|11Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x284C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then they can't play today,|11can they, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2853,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I can see, they|11don't seem to have a |01Bomb Bag|00,|11Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2854,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then they can't play today,|11can they, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x286F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqWhat shall we do, Honey?|11From what I can see, they don't|11seem to be able to carry |01bombs|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2870,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then they can't play, can|11they, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2872,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqHoney, they say they aren't|11playing...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2873,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqIt looks like they don't have|11enough |06Rupees|00. What shall we do,|11Honey?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2876,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,But if you fall from this platform,|11you're out. Aren't they, Darling?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2878,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,But if you fall from this platform,|11you're out. Aren't they, Darling?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x287E,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EipDid you see that? Honey, they got|11a perfect score...|11|13|12We have to share our happiness|11with them, Honey.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x287F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That's annoying, so let's show off|11even more for them, Darling.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2880,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,H-H-Honey!!!|11They...They got a perfect score three|11days in a row.|11|12This is all we have left to give|11them, Honey.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2848,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei+Target shooting runs until|01 tonight|00,|11so why don't we let them|11play, Darling?|19|BF",
            NULL
        );
    } else if (CFG_GENDER_MODE == GENDER_TYPE_FEMALE) {
        EZTR_Basic_ReplaceText(
            0x3337,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei.Hello, Ms. Foreigner.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3341,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, Grasshopper, I'm recruiting|11for an assistant right now!|11|13|12You're a girl, won't you try?|11 |11|02|C2Yes|11No|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x335F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei.Good evening, Ms. Foreigner!|11|13|13|12Romani is looking after things.|11My sister went to town.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3389,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Girl, get your bow ready...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x33BB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Are you ready, girl?|11I'm going to try to get us through|11here as fast as I can!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x345C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiRHey, darlin'.|11Heh, heh...What brings you here?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x346F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "This girl's funny!|11Why don't you give us |0610 Rupees|11|00for the chance to race against|11us?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3479,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "This girl's no fun!|11That's why you don't succeed!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x347B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Big bro, I wonder if we can give|11that to this girl?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x347C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give her something. Well,|11she's a kid, so what could she do|11with it? It should be fine...|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x3484,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Now that's not your horse, is it|11now, ma'am?|11|13|12Well, that thing's just a colt...|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x348A,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, ma'am, do you have some|11business at the Gorman Brothers'|11Ranch on such a terrible day?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x349E,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Big bro, I wonder if we can give|11that to this girl?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x349F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give her something.|11Besides, we don't need it anymore,|11so what's the big deal?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x34A1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "We gotta give her something. And|11that something is...milk!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x34A7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, ma'am, shouldn't you take refuge|11somewhere?|11|13|12I mean, there's that rumor and all.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046A,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, yes...|01|16|00.|11If I remember, you're the little lady|11who deposited |06|CE|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045A,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "All right, little lady, now I've got a|11total of |06|CE|00 from you!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x044C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey there, little lady!|11Won't you deposit some |06Rupees|00?|11|13|12Nowadays, even if people have|11money, they don't deposit any.|11|17Nothing!|18  |17Nothing!!!|18|11|12So, for a limited time, I'll give you|11a special gift based on how much|11you deposit.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0455,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Whaaat?!?|11You're really gonna give me that|11much? You're one rich little lady!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0456,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think about it, little lady!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0458,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Hmm...You play mean jokes,|11little lady! You haven't even got|11a single |06Rupee|00!|18|11|12Come back and deposit some after|11you save up a bunch!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already|11saved up |01200 Rupees|00!?!|18|11|13|12Well, little lady, here's your special|11gift. Take it!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already saved|11up |011000 Rupees|00!?!|18|11|13|12Well, little lady, here's your special|11gift. Take it!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17What's this? You've already saved|11up |015000 Rupees|00?!|18|11|13|12Well, little lady, I can't take any|11more deposits. Sorry, but this is|11all I can give you.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045E,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "...Hang on there, little lady.|11I can't take any more deposits.|11Sorry...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x045F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Excuuuse me! But I can't take|11anymore deposits!|18|11|13|12Sheesh, little lady! |11You're young, but you sure are|11serious about saving!|11I'm impressed!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0461,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "So, little lady, what's your name?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0467,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's this? You need somethin'|11on a day like this?|11|13|12You haven't evacuated yet? You're|11amazing, little lady!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046C,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ah, yes...|01|16|00, right?|11If I remember, you're the little lady|11who deposited |06|CE|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x046D,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Look, little lady, if it's 'cause of|11the bad rumors going around,|11forget it! They're just rumors!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0475,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's this?|11Look, little lady, you can't hold|11this many Rupees! You got that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0478,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Look, little lady, all the |06Rupees|11|00you deposited are gone, so you|11can't use that |01stamp|00 anymore.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x047C,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think it over, little lady!|11|13|12So what are you gonna do?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x047D,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Is that so?|11Think it over,little lady!|11|13|12So what are you gonna do?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0710,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|03You did it!|11So what's your name, girl?|11|13|12|1F|00|0A|01|16|00, huh?|11|13|13|12All right! That Skull Kid broke our|11rules and he's been doing all|11kinds of bad things lately.|11|12Starting today, he's out! I'm|11making |01|16|00 a |01Bomber|00! You|11guys don't mind, right?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0719,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|02What do you want, girl? |11I'm busy practicing with my|11blowgun! Don't mess with me!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x072F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, girl! You haven't passed my|11test, so how do you know my|11|01secret code|00?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0730,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, girl!|11How do you know our |01secret|11code|00?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0732,
            EZTR_STANDARD_TEXT_BOX_II,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Listen, girl!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0734,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What's your name, girl?|11|13|13|12|1F|00|0A|16, huh?|11All right...That Skull Kid broke our|11rules and is doing all kinds of|11stuff...|10I'm making |01|16 |00a new|11member of the |01Bombers|00 instead!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0753,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|03Are you the girl who just popped|11that up there?|11Whoa!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0754,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hey, just for you, I can make|11you a member of our gang, the|11|01Bombers|00!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0758,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei|00What's the deal, girl?|11You dress like you think you're all|11cool, but you're nothing special!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x08D1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Huh? That girl...|11Where did she go???|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x08D7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Huh? That girl...|11Where did she go?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x12D0,
            EZTR_STANDARD_TEXT_BOX_II,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Welcome.|11Did you come to buy something,|11little lady?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F40,
            EZTR_STANDARD_TEXT_BOX_I,
            1,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hee, hee.|11You two fairies did great!|11|13|12I wonder if she has anything good|11on her...|11|13|12Huh?|11This girl...|11|13|12...Well, that shouldn't be a|11problem.|1D|00|14|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2340,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Oh, are you a member of Latte,|11little lady? That's great!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FD,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKAll right, girlie!|11The rules are simple...|11|13|12Hit as many |01red ones|00 as you can|11within the time limit.|11|13|12If you hit a |03blue one|00, you lose|11time, so watch out!|11|13|12You can use as many arrows as|11you'd like. Press |B1 to shoot|11them.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKAll right, girlie!|11Aim for the |01red ones|00.|11Don't mess up and hit one of|11them |03blue ones |00by mistake!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DA,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy...You don't even have enough|11Rupees, girl!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DB,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "What? Heyyy, girl! You can't hold|11any more!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DD,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Man...My boss will yell at me if I|11sell this to you when you don't|11even have a bow. Don't do this|11to me, girl!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x06DE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy! I stole that Rupee from a|11crow! Don't go stealing it, girl!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1211,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That melody's bogus, sister!|11|13|13|12What's wrong? You're not jammin'|11like you usually do!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1216,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That's uncool, yo...|11What are you tryin' to do, walkin'|11into people's rooms like that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1538,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Young swordswoman who has|11awakened and deftly|11defeated me...|11|12I shall rely on your power to|11fulfill my request.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x158F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Eic|17Oh!|11Isn't this a fairy?|18|11|13|12Is this yours, |17young lady?|18|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1594,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Say, |17young woman!|18|11Would you permit me to do|11research on this fairy?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15A5,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Eic|17Oh! That mask is certainly a|11Gibdo!|18|11|13|12|17Young woman!|18|11Where did you get that?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15A7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|17Say, young lady!|18|11Would you permit me to do|11research on that mask?|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x220D,
            EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Masks...You have...a lot.|11You, too...Will you be...|11a mask saleswoman?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0FA1,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiIHmm? What is it, dear?|11Did you also come to watch the|11Zora eggs hatch?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x145D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "I found him, |02green hat girl|00...|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x14D8,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You are a girl of much vigor.|11|13|13|12Defeat the ladies within the time|11limit and rest their souls in peace.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F49,
            EZTR_STANDARD_TEXT_BOX_I,
            1,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|05|1E)%You!|11|13|13|12If I wasn't dealing with you,|11I wouldn't have gotten separated|11from my brother!|11|12Well, don't just sit there, Deku|11girl! Do something!!!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F52,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "In the land of Hyrule, there|11echoes a legend. A legend held|11dearly by the Royal Family that|11tells of a girl...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F53,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "A girl who,|11after battling evil and saving|11Hyrule, crept away from the land|11that had made her a legend...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F54,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Done with the battles she once|11waged across time, she embarked|11on a journey. A secret and|11personal journey...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1F56,
            EZTR_INVISIBLE_TEXT_BOX,
            35,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "A friend with whom she parted|11ways when she finally fulfilled her|11heroic destiny and took her place|11among legends...|1C|00Z|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x292F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiYWhy could a...? Why could a...?|11Why could a man join?!?|11That's 'cause a man is an animal,|11too, my girl!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x29FC,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiSHey, girl! Shouldn't you be with|11your parents? Go on! Get!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AE3,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Where's your momma, girlie? Huh?|11You came here by yourself? Well,|11aren't you a big girl|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03E8,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKIf you think you can do it, why|11don'tcha give it a try, girlie?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03EA,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiKIf you still have time, why|11don'tcha try it, girlie?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x03FB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiLOy! Oy! You don't have enough|11Rupees, girl!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x236F,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You can't aim for the targets|11when you're wearin' a mask, girlie.|11Take it off.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2371,
            EZTR_STANDARD_TEXT_BOX_I,
            48,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Eeesh! You can't aim for the|11targets wearin' somethin' like that|11monstrosity on your head, girlie.|11Take it off.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AE4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Once you get older, girl, come|11see The Indigo-Go's perform live at|11Zora Hall.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10E6,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19She says she won't do it, little|11brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10E7,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AShe's no fun. She's just a stick|11in the mud.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EC,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19Koo, koo, koo.|11She says she won't do it, little|11brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19She did it, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10EF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AYeah, she did it, big brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10F3,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19She's back, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10F4,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|1AYeah, she's back, big brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x10FF,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19I guess she's just a stick in|11the mud, little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1104,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19If we give THAT to her, I wonder|11if she'll leave us alone,|11little brother.|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1102,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E)|19She's a formidable opponent, little|11brother!|15|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2841,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I see, she doesn't|11have a bow, Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2842,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh...Then she can't play, can she,|11Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2843,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqWhat should we do, Honey?|11Surely this one doesn't have a|11bow, so she can't play here...|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2844,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh...Too bad. But, Darling, even if|11she doesn't have a bow, she could|11play if she had some sort of way|11of shooting at things...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2846,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei*But it looks like she can shoot|11|01bubbles|00, so let's let her play,|11Darling.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x284B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I can see, she|11doesn't seem to have a bow,|11Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x284C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then she can't play today,|11can she, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2853,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqBut from what I can see, she|11doesn't seem to have a |01Bomb Bag|00,|11Honey.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2854,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then she can't play today,|11can she, Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x286F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqWhat shall we do, Honey?|11From what I can see, she doesn't|11seem to be able to carry |01bombs|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2870,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,Oh my...Then she can't play, can she,|11Darling?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2872,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqHoney, she says she isn't playing...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2873,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiqIt looks like she doesn't have|11enough |06Rupees|00. What shall we do,|11Honey?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2876,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,But if you fall from this platform,|11you're out. Isn't she, Darling?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2878,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,But if you fall from this platform,|11you're out. Isn't she, Darling?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x287E,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EipDid you see that? Honey, she got|11a perfect score...|11|13|12We have to share our happiness|11with her, Honey.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x287F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "That's annoying, so let's show off|11even more for her, Darling.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2880,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei,H-H-Honey!!!|11She...She got a perfect score three|11days in a row.|11|12This is all we have left to give|11her, Honey.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2848,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei+Target shooting runs until|01 tonight|00,|11so why don't we let her play,|11Darling?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0517,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The southern swamp at |01Woodfall|11|00lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0519,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The southern swamp at |01Woodfall|11|00lies in this direction.|11Be careful.|E0|BF",
            NULL
        );        EZTR_Basic_ReplaceText(
            0x0521,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The mountains of |01Snowhead|00 lie|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0523,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The mountains of |01Snowhead|00 lie|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x052B,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12At |01Great Bay|00, you can see clear|11to the |01ocean|00. It lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x052D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12From |01Great Bay|00, you can see clear|11to the|01 ocean|00. It lies this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0535,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The canyon at |01Stone Tower|00 lies|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0537,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to treat you like a child.|11|13|12The canyon at |01Stone Tower|00 lies|11this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0548,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "My apologies, ma'am. It was wrong of|11me to stop you. The mountains of|11|01Snowhead |00lie this way.|11Be careful.|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0614,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D1Ma'am! Ma'am!|11|13|13|12I keep hearing about a stone|11called a |01Moon's Tear|00, and it's|11supposed to be the shiniest stone|11in the world!|10Do you have one?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0616,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D2Ma'am, if you have a |01Moon's Tear|00,|11I must get it from you...And I'm|11not asking to get it for free!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0619,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E8|81Ma'am, you've really helped me out!|11Now I have the perfect souvenir|11for my wife!|11|12She hasn't seen a jewel or|11strange, shining stone like this in|11quite a long time...Hee-hee!|11|12The |01Title Deed|00 for this spot will|11be in big demand by Deku Scrubs|11outside of town.|11|12You should be able to sell it to a|11Deku Scrub for a good price!|E0|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0967,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8BIt's Ms. |16, correct?|11You, ma'am, have strange powers,|11indeed...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15E9,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E:|D2Do you know what |02magic beans|11|00are, ma'am?|11I'll sell you one for |0610 Rupees|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x15FE,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E8|80|17Thanks for stopping by!|18|11I'm doing business with a focus on|11a Goron clientele. And that, madam,|11makes you a customer.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D00,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyWhat's this?|11Green clothes...White fairy...|11Ma'am, could you, by chance, be a|11forest fairy?|10Oh my!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D01,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EizMy name is |06Tingle|00!|11I think I am the same as you, ma'am.|11A forest fairy!|11|12Alas, though I am already age 35,|11no fairy has come to me yet...|11|13|12My father tells me to grow up|11and act my age, but why?|11|13|12I tell you...Tingle is the very|11reincarnation of a fairy!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D05,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyHuh?...A white fairy?|11|13|13|12The way you look?|11Ohh...Magic, isn't it, ma'am?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0A,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei{Ma'am... you don't have enough|11|06Rupees|00!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EiyUh, ma'am?|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x1D0D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1EizHello, Ms. Fairy!|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2735,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei\\This training center is for|11studying the lowly sword...It is no|11place for one of your stature, madam.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2931,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Why was the...? Why was the...?|11Why was the dog the leader?!?|11Was it 'cause something was|11wrong with me, madam???|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2AF9,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ma'am, the bar opens at night.|11|13|13|12And it's members-only. We refuse|11people who don't have |01proof of|11membership|00.|11|12Well, now I'm getting things ready,|11so as long as you don't get in the|11way of my cleaning, you can stay.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B09,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ma'am...It's the rules. Please|11wear your |01Romani's Mask|00 inside the bar.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B0C,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "You don't have enough |06Rupees|00, ma'am.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B62,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Mmm, ma'am, if you don't have any|11|06Rupees|00, you can't buy your|11dreams.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2B63,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ma'am, we are now exchanging|11winning tickets.|11|13|12If you'd like to buy a ticket, we'll|11start selling them tomorrow|11|01morning |00at|01 6 o'clock|00.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0966,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E97W-Well, we haven't any time to|11lose...|11|13|12Quickly, Ms. |16, could you|11please find something to |01carry|00 me|11in so you can take me to the|11Deku Palace?|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0969,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E97Hwh-Hwhy are you hwaiting?|11Ms. |01|16|00!|11|13|12Huh-Hurry! Ho-Hopen this |01bottle|11|00and release me right hwh-hwhere|11my father is standing.|1C|00|1E|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x096D,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8CWhy yes, thanks to|11Ms. |16 here.|11I am very, truly grateful.|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x096F,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1E9|8CIt seems our butler has taken|11somewhat of a liking to you,|11Ms. |16.|11|12I believe you'll find him waiting in|11the shrine that will be to your|11|01right|00 when you leave the palace.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0971,
            EZTR_STANDARD_TEXT_BOX_I,
            16,
            EZTR_ICON_DEKU_PRINCESS,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "|1Ei7Ungh! Ms. |01|16|00!|11There's nuh-no time to lose!|11Huh-Hurry! Take me to the palace!|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x28AA,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ms. |16, is it?|11One moment, please.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x28AB,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Ms. |16,|11I have you down for an afternoon|11arrival.|11|12Your room is our \"Knife Chamber\"|11on the |01second floor|00. Here is your|11|01key|00.|19|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x2952,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Hello, Ms. Scrub.|11How about this rain?|11|13|12Do you scrubs feel sad on rainy|11days, too?|11|13|12....|11But Deku Scrubs are supposed to|11like rain. At least one of us has|11reason to be happy...|BF",
            NULL
        );

        EZTR_Basic_ReplaceText(
            0x0459,
            EZTR_STANDARD_TEXT_BOX_I,
            0,
            EZTR_ICON_NO_ICON,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            EZTR_NO_VALUE,
            true,
            "Heyyy! You don't have that much!|11You shouldn't lie to people!|11And you can take that to the|11bank, missy!|19|BF",
            NULL
        );
    }
}