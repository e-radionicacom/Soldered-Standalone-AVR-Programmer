#include "Adafruit_AVRProg.h"

const image_t PROGMEM image_32u4_boot = {
    // Sketch name, only used for serial printing
    {"feather32u4boot.hex"},
    // Chip name, only used for serial printing
    {"atmega32u4"},
    // Signature bytes for ATMEGA32U4
    0x9587,
    // Programming fuses, written before writing to flash. Fuses set to
    // zero are untouched.
    {0x3F, 0xFF, 0xD0, 0x0B}, // pre program fuses (prot/lock, low, high, ext)
    // Normal fuses, written after writing to flash (but before
    // verifying). Fuses set to zero are untouched.
    {0x2F, 0xFF, 0xD0, 0x0B}, // post program fuses
    // Fuse verify mask. Any bits set to zero in these values are
    // ignored while verifying the fuses after writing them. All (and
    // only) bits that are unused for this atmega chip should be zero
    // here.
    {0x3F, 0xFF, 0xFF, 0x0F}, // {lock, low, high, extended}
    32768,
    // size in bytes of flash page
    128,
    // The actual image to flash. This can be copy-pasted as-is from a
    // .hex file. If you do, replace all lines below starting with a
    // colon, but make sure to keep the start and end markers {R"( and
    // )"} in place.
    {R"(
:2070000055C000006EC000006CC000006AC0000068C0000066C0000064C0000062C0000043
:2070200060C000005EC00000DAC400005AC0000058C0000056C0000054C0000052C0000006
:2070400050C0000076C000004CC000004AC0000048C0000046C0000044C0000042C00000C0
:2070600040C000003EC000003CC000003AC0000038C0000036C0000034C0000032C0000048
:2070800030C000002EC000002CC000002AC0000028C0000026C0000024C0000022C00000A8
:2070A00020C000001EC000001CC0000011241FBECFEFDAE0DEBFCDBF11E0A0E0B1E0EEEFA4
:2070C000FEE702C005900D92AA3CB107D9F711E0AAECB1E001C01D92A03EB107E1F781D31D
:2070E0000CC78ECFF89410926F0010928100109285001092840081E085BF15BE47980C945C
:20710000000008952091D4013091D5012F5F3F4F3093D5012093D401932F37FF03C08EEF40
:20712000831B982F990F921710F447980895479A08951F920F920FB60F9211242F938F93CA
:207140009F93EF93FF9310928500109284008091CA019091CB01009729F001979093CB019C
:207160008093CA018091CC019091CD01009729F001979093CD018093CC01E0E0F0E08591A5
:2071800094918F5F9F4F49F08091CE019091CF0101969093CF018093CE01FF91EF919F9138
:2071A0008F912F910F900FBE0F901F90189584E08093E9000DC08091E8008B778093E80065
:2071C00003C08EB3882351F08091E80082FFF9CF8091E80085FFEFCF8091F1000895982FDC
:2071E00083E08093E9008091E80085FD0DC08091E8008E778093E80003C08EB3882361F0EF
:207200008091E80080FFF9CF9093F10084E690E09093CB018093CA0108954F925F926F9203
:207220007F928F929F92AF92BF92CF92DF92EF92FF920F931F93CF93DF9384E08093E900ED
:207240008091E80082FF56C284E690E09093CD018093CC01ACDF182F853481F48CE195E20D
:207260009093CF018093CE0107B600FCFDCFF999FECF81E180935700E89503C0843519F483
:2072800096DF8DE00DC28C34E1F38035D1F3843721F484E4A4DF80E003C2813611F489E526
:2072A000FFC18134B1F483DF182F81DF90E0880F991FAA2797FDA095BA2F312F330F20E0C7
:2072C000442737FD4095542F822B932BA42BB52BB8C1803711F483E5E3C1833549F4C0E0C7
:2072E000D1E089917CDF21E0C730D207D1F7D9C1863521F481E373DF80E3D2C1833731F4DA
:2073000087E86DDF85E96BDF8EE1CAC18536B9F4E0E0F0E093E085E090935700E89507B67C
:2073200000FCFDCF80935700E89507B600FCFDCFE058FF4FA0E7E030FA0771F7A2CF823769
:2073400039F4E1E0F0E089E0809357008491A8C1863439F4E0E0F0E089E0809357008491BF
:207360009FC18E3439F4E3E0F0E089E080935700849196C1813539F4E2E0F0E089E08093FB
:20738000570084918DC1823631F489E528DF80E026DF80E885C1823419F0873609F0E5C0B4
:2073A0001092CF011092CE0102DF082F00DFF82EFEDE682E8554823008F071C1902F80E087
:2073C000CF2DD0E0C82BD92B10926F00173609F04BC081E180935700E895DD24CC24C39417
:2073E0003FC0E090D001F090D1010091D2011091D301B6E46B16D9F4ED2DF0E0EE29FF2911
:20740000E4918E2FECDEDD2081F082E090E0A0E0B0E0E80EF91E0A1F1B1FE092D001F092EB
:20742000D1010093D2011093D301DC2418C0D801C701B695A7959795879549D5D0DE82E027
:2074400090E0A0E0B0E0E80EF91E0A1F1B1FE092D001F092D1010093D2011093D301219710
:20746000209709F0BECF7DC08090D0019090D101A090D201B090D30196E4691609F05DC099
:2074800083E0F40180935700E89507B600FCFDCF54C0F6E46F1661F5772031F1E090D00165
:2074A000F090D1010091D2011091D30180DED82ECC24852D90E08C299D29F7010C014092D9
:2074C0005700E895112482E090E0A0E0B0E0E80EF91E0A1F1B1FE092D001F092D101009327
:2074E000D2011093D30102C062DE582E742423C0E090D001F090D1010091D2011091D301D3
:2075000016950795F794E79452DE682FC701E7D48091D0019091D101A091D201B091D301E6
:207520000296A11DB11D8093D0019093D101A093D201B093D301219704C055247724442439
:207540004394209709F0A5CF96E4691641F485E0F40180935700E89507B600FCFDCF8DE0CF
:207560003EDE82E080936F009CC0833471F40091D0011091D1011BDE90E021E0F8010C014E
:2075800020935700E89511247CCE833619F5E090D001F090D1010091D2011091D30107DECD
:2075A000F701E16090E021E00C0120935700E895112482E090E0A0E0B0E0E80EF91E0A1F40
:2075C0001B1FE092D001F092D1010093D2011093D30157CE8D3661F4E091D001F091D1012B
:2075E00085E080935700E89507B600FCFDCF49CE823551F4E091D001F091D10105911491D7
:20760000812FEDDD802F4CC0843421F5E090D001F090D1010091D2011091D30116950795B4
:20762000F794E794C4DD682FC70159D48091D0019091D101A091D201B091D3010296A11DD3
:20764000B11D8093D0019093D101A093D201B093D30117CE843609F5E090D001F090D10136
:207660000091D2011091D301D801C701B695A795979587952CD4B3DD82E090E0A0E0B0E04F
:20768000E80EF91E0A1F1B1FE092D001F092D1010093D2011093D30104C08B3111F08FE313
:2076A0009EDD83E08093E9009091E8008091E8008E778093E80095FF04C010C08EB38823DA
:2076C000C9F08091E80080FFF9CF8091E8008E778093E80003C08EB3882361F08091E800BF
:2076E00080FFF9CF84E08093E9008091E8008B778093E800DF91CF911F910F91FF90EF90BF
:20770000DF90CF90BF90AF909F908F907F906F905F904F9008959091D801892F8F778132DB
:2077200049F58091D9018032A1F0813219F5913A09F58091E800877F8093E8008DE091E07B
:2077400067E070E0FBD18091E8008B778093E8000895913279F48091E800877F8093E80009
:207760008DE091E067E070E04DD28091E8008E778093E800089582E061EC42E0A7D083E034
:2077800061E842E1A3D084E060E842E19FC084B7877F84BF88E10FB6F89480936000109289
:2077A00060000FBE20E880E090E00FB6F89420936100809361000FBE81E085BF92E095BFB3
:2077C0003F9AE1E6F0E0208310824798109289008DE78093880090936F0083E08093810062
:2077E000E6C04091000850910108109201081092000824B714BE88E10FB6F89480936000F1
:20780000109260000FBEE0E0F0E0859194918F5F9F4F71F020FD0BC021FD0AC0283041F434
:207820008091090190910A014817590709F05ADCAEDF78941092CF011092CE010CC0EDDC02
:2078400034D38091CE019091CF018151974210F01092140157DC80911401882381F7809161
:20786000E00081608093E0003DDC80E090E00895FA01923049F0933061F09130F9F485E1B0
:2078800091E022E130E01EC087E291E02EE330E019C0882329F485E691E024E030E012C028
:2078A000813029F489E691E022E230E00BC0823029F487E991E028E130E004C080E090E0DE
:2078C00020E030E091838083C90108958093E9008091EB0081608093EB001092ED006093C1
:2078E000EC004093ED008091EE00881F8827881F08958091D80188238CF403C08EB388237F
:20790000B1F08091E80082FFF9CF8091E8008B778093E80008958EB3882349F08091E800D3
:2079200080FFF9CF8091E8008E778093E8000895EF92FF920F931F9345D04CD008ED10E0EE
:20794000F80180818F77808380818068808380818F7D808319BC1EBA1092D60180EEE82E7E
:20796000F12CF70180818B7F8083F80180818160808380E060E042E0A9DFE1EEF0E080811C
:207980008E7F8083E2EEF0E0808181608083808188608083F70180818E7F8083F801808163
:2079A000806180831F910F91FF90EF900895E7EDF0E08081816080838AE482BF81E080933C
:2079C000D701B6CFE8EDF0E080818E7F80831092E20008951092DA001092E10008951F9226
:2079E0000F920FB60F9211242F933F934F935F936F937F938F939F93AF93BF93EF93FF93D3
:207A00008091DA0080FF1AC08091D80080FF16C08091DA008E7F8093DA008091D90080FF96
:207A20000AC019BC82E089BD09B400FEFDCF81E08EBB3AD203C019BC1EBA36D28091E10058
:207A400080FF17C08091E20080FF13C08091E2008E7F8093E2008091E20080618093E200CD
:207A60008091D80080628093D80019BC85E08EBB1BD28091E10084FF2BC08091E20084FF0A
:207A800027C019BC82E089BD09B400FEFDCF8091D8008F7D8093D8008091E1008F7E809309
:207AA000E1008091E2008F7E8093E2008091E20081608093E2008091D601882331F480915E
:207AC000E30087FD02C081E001C084E08EBBECD18091E10083FF21C08091E20083FF1DC04A
:207AE0008091E100877F8093E10082E08EBB1092D6018091E1008E7F8093E1008091E20090
:207B00008E7F8093E2008091E20080618093E20080E060E042E0DADEC7D1FF91EF91BF9128
:207B2000AF919F918F917F916F915F914F913F912F910F900FBE0F901F9018959C01409170
:207B4000DE015091DF014617570718F4F90190E044C06115710511F0AB01F8CF8091E800F7
:207B60008E778093E80040E050E0F0CF8EB3882309F444C0853009F443C08091E80083FFD9
:207B800002C081E008958091E80082FD31C08091E80080FF22C08091F3009091F200782FA4
:207BA00060E0292F30E0262B372B07C081918093F100415050402F5F3F4F4115510519F09B
:207BC0002830310598F390E02830310509F491E08091E8008E778093E8004115510531F654
:207BE000992321F605C08EB3882341F0853041F08091E80082FFF7CF80E0089582E00895AE
:207C000083E008959C016115710529F48091E8008B778093E800F90126C08EB3882391F17A
:207C2000853091F18091E80083FF02C081E008958091E80082FFF1CF06C08091F1008193BC
:207C40006150704059F02091F3008091F200322F20E090E0822B932B892B79F78091E8007A
:207C60008B778093E80061157105B9F605C08EB3882341F0853041F08091E80080FFF7CF66
:207C800080E0089582E0089583E008950F931F93DF93CF9300D0CDB7DEB7E8EDF1E0809120
:207CA000F100819381E0E03EF807C9F734DD8091E80083FFE4C08091D8019091D9019530A7
:207CC00009F46DC0963040F4913081F1913070F0933009F0D4C02AC0983009F4A3C0993001
:207CE00009F4B2C0963009F0CAC07CC0803809F4C6C0823809F0C3C08091DC018770809327
:207D0000E9008091EB001092E9002091E800277F2093E80090E025E0969587952A95E1F7C6
:207D200081708093F1001092F10087C0882319F0823009F0A4C08F71823009F0A0C0809195
:207D4000DA01882331F52091DC01277009F497C02093E9008091EB0080FF1BC0933021F434
:207D60008091EB00806213C08091EB0080618093EB0081E090E002C0880F991F2A95E2F7FD
:207D80008093EA001092EA008091EB0088608093EB001092E9008091E800877F51C0882332
:207DA00009F06DC01091DA011F770FB7F8948091E800877F8093E8009CDD8091E80080FF4E
:207DC000FCCF8091E3008078812B8093E30080688093E300112311F482E001C083E08EBB64
:207DE0000FBF4DC08058823008F049C08091DA019091DB016091DC01AE014F5F5F4F38DD46
:207E0000BC01009709F43BC08091E800877F8093E80089819A8192DE8091E8008B77809379
:207E2000E8002DC0803859F58091E800877F8093E8008091D6018093F1008091E8008E7783
:207E40008093E80056DD1BC08823C9F49091DA019230A8F48091E800877F8093E80090933A
:207E6000D60147DD8091D601882331F48091E30087FD02C081E001C084E08EBB7CDC8091DD
:207E8000E80083FF0AC08091EB0080628093EB008091E800877F8093E8000F900F90CF913A
:207EA000DF911F910F91089508951F938EB3882361F01091E9001092E9008091E80083FF49
:207EC00001C0E4DE17701093E9001F910895F999FECF92BD81BDF89A992780B50895262F5A
:207EE000F999FECF1FBA92BD81BD20BD0FB6F894FA9AF99A0FBE01960895F894FFCF434189
:207F0000544552494E410077770008000000000000080112011001020000089A230C0001A7
:207F2000000201000109023E000201008032090400000102020100052400100104240204C4
:207F40000524060001070582030800FF09040100020A00000007050402100001070583028B
:207F600010000104030904220341006400610066007200750069007400200046006500615B
:207F8000007400680065007200200033003200750034000000180341006400610066007207
:207FA00000750069007400200049006E006400750073007400720069006500730020004CB9
:087FC000004C0043000000002A
:00000001FF
    )"}};

/*
 * Table of defined images
 */
const image_t *images[] = {
    &image_32u4_boot,
};

uint8_t NUMIMAGES = sizeof(images) / sizeof(images[0]);
