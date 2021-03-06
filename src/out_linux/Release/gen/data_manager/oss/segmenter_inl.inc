
namespace  {
const int kLSize = 2655;
const int kRSize = 2655;

bool IsBoundaryInternal(uint16 rid, uint16 lid) {
  // BOS * or * EOS true
  if (rid == 0 || lid == 0) { return true; }
  // 名詞,数,アラビア数字 名詞,数,(アラビア数字|漢数字) false
  if (((rid == 2037)) && ((lid == 2037) || (lid >= 2039 && lid <= 2048))) { return false; }
  // 名詞,数,漢数字 名詞,数,アラビア数字 true
  if (((rid >= 2039 && rid <= 2048)) && ((lid == 2037))) { return true; }
  // 名詞,数,漢数字 名詞,数,漢数字 false
  if (((rid >= 2039 && rid <= 2048)) && ((lid >= 2039 && lid <= 2048))) { return false; }
  // 名詞,数,(アラビア数字|漢数字) 名詞,数,区切り文字 false
  if (((rid == 2037) || (rid >= 2039 && rid <= 2048)) && ((lid == 2038))) { return false; }
  // 名詞,数,区切り文字 名詞,数,(アラビア数字|漢数字) false
  if (((rid == 2038)) && ((lid == 2037) || (lid >= 2039 && lid <= 2048))) { return false; }
  // 接頭詞,数接続 名詞,数,漢数字 false
  if (((rid >= 2629 && rid <= 2632)) && ((lid >= 2039 && lid <= 2048))) { return false; }
  // 接頭詞,数接続 名詞,接尾,助数詞 false
  if (((rid >= 2629 && rid <= 2632)) && ((lid >= 2004 && lid <= 2011))) { return false; }
  // 接頭詞,数接続 名詞,(一般|サ変接続|形容動詞語幹|副詞可能) true
  if (((rid >= 2629 && rid <= 2632)) && ((lid >= 1837 && lid <= 1845) || (lid >= 1847 && lid <= 1894) || (lid >= 1905 && lid <= 1914) || (lid >= 1927 && lid <= 1931))) { return true; }
  // 記号,(句点|読点|括弧開|括弧閉) * true
  if (((rid >= 2635 && rid <= 2638)) && (true)) { return true; }
  // * 記号,(句点|読点|括弧開|括弧閉|空白) true
  if ((true) && ((lid >= 2635 && lid <= 2638))) { return true; }
  // ^フィラー * true
  if (((rid >= 2 && rid <= 11)) && (true)) { return true; }
  // * ^フィラー true
  if ((true) && ((lid >= 2 && lid <= 11))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(あげる|上げる|つづける|続ける|そこねる|そびれる|おえる|終える|はじめる|始める|ねがえる|願える|もらえる) true
  if ((true) && ((lid == 873) || (lid >= 882 && lid <= 883) || (lid == 886) || (lid == 892) || (lid == 895) || (lid == 897) || (lid == 901) || (lid >= 910 && lid <= 911) || (lid >= 913 && lid <= 914) || (lid >= 923 && lid <= 924) || (lid == 927) || (lid == 933) || (lid == 936) || (lid == 938) || (lid == 942) || (lid >= 951 && lid <= 952) || (lid >= 954 && lid <= 955) || (lid >= 964 && lid <= 965) || (lid == 968) || (lid == 974) || (lid == 977) || (lid == 979) || (lid == 983) || (lid >= 992 && lid <= 993) || (lid >= 995 && lid <= 996) || (lid >= 1005 && lid <= 1006) || (lid == 1009) || (lid == 1015) || (lid == 1018) || (lid == 1020) || (lid == 1024) || (lid >= 1033 && lid <= 1034) || (lid >= 1036 && lid <= 1037) || (lid >= 1046 && lid <= 1047) || (lid == 1050) || (lid == 1056) || (lid == 1059) || (lid == 1061) || (lid == 1065) || (lid >= 1074 && lid <= 1075) || (lid >= 1077 && lid <= 1078) || (lid >= 1087 && lid <= 1088) || (lid == 1091) || (lid == 1097) || (lid == 1100) || (lid == 1102) || (lid == 1106) || (lid >= 1115 && lid <= 1116) || (lid >= 1118 && lid <= 1119) || (lid >= 1128 && lid <= 1129) || (lid == 1132) || (lid == 1138) || (lid == 1141) || (lid == 1143) || (lid == 1147) || (lid >= 1156 && lid <= 1157) || (lid >= 1159 && lid <= 1160) || (lid >= 1169 && lid <= 1170) || (lid == 1173) || (lid == 1179) || (lid >= 1182 && lid <= 1183) || (lid == 1187) || (lid >= 1196 && lid <= 1197) || (lid >= 1199 && lid <= 1200) || (lid >= 1209 && lid <= 1210) || (lid == 1213) || (lid == 1219) || (lid >= 1222 && lid <= 1223) || (lid == 1227) || (lid >= 1236 && lid <= 1237) || (lid == 1239))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(いただく|頂く|ぬく|抜く) true
  if ((true) && ((lid == 1254) || (lid == 1258) || (lid == 1261) || (lid >= 1265 && lid <= 1266) || (lid == 1270) || (lid == 1273) || (lid >= 1277 && lid <= 1278) || (lid == 1282) || (lid == 1285) || (lid >= 1289 && lid <= 1290) || (lid == 1294) || (lid == 1297) || (lid >= 1301 && lid <= 1302) || (lid == 1306) || (lid == 1309) || (lid >= 1313 && lid <= 1314) || (lid == 1318) || (lid == 1321) || (lid >= 1325 && lid <= 1326) || (lid == 1330) || (lid == 1333) || (lid >= 1337 && lid <= 1338) || (lid == 1342) || (lid == 1345) || (lid == 1349))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(いたす|致す|つくす|尽くす|なおす|直す) true
  if ((true) && ((lid == 1405) || (lid >= 1407 && lid <= 1408) || (lid >= 1410 && lid <= 1413) || (lid >= 1415 && lid <= 1416) || (lid >= 1418 && lid <= 1421) || (lid >= 1423 && lid <= 1424) || (lid >= 1426 && lid <= 1429) || (lid >= 1431 && lid <= 1432) || (lid >= 1434 && lid <= 1437) || (lid >= 1439 && lid <= 1440) || (lid >= 1442 && lid <= 1445) || (lid >= 1447 && lid <= 1448) || (lid >= 1450 && lid <= 1453) || (lid >= 1455 && lid <= 1456) || (lid >= 1458 && lid <= 1460))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(こむ|込む) true
  if ((true) && ((lid >= 1461 && lid <= 1476))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(おわる|終わる|いらっしゃる|らっしゃる|下さる|くださる|クダサル) true
  if ((true) && ((lid == 1496) || (lid == 1517) || (lid == 1537) || (lid == 1554) || (lid == 1574) || (lid == 1594) || (lid == 1614) || (lid == 1634) || (lid == 1654) || (lid == 1674) || (lid >= 1695 && lid <= 1697) || (lid >= 1699 && lid <= 1702) || (lid >= 1704 && lid <= 1707) || (lid >= 1709 && lid <= 1712) || (lid >= 1717 && lid <= 1718) || (lid >= 1720 && lid <= 1722) || (lid >= 1724 && lid <= 1727) || (lid >= 1729 && lid <= 1732) || (lid >= 1734 && lid <= 1737) || (lid >= 1739 && lid <= 1742) || (lid >= 1744 && lid <= 1747) || (lid == 1749) || (lid == 1751))) { return true; }
  // * ^動詞,非自立,*,*,*,*,(あう|合う|願う|もらう) true
  if ((true) && ((lid == 1754) || (lid >= 1761 && lid <= 1762) || (lid >= 1764 && lid <= 1765) || (lid >= 1771 && lid <= 1772) || (lid >= 1774 && lid <= 1775) || (lid == 1782) || (lid == 1784) || (lid >= 1786 && lid <= 1787) || (lid >= 1794 && lid <= 1795) || (lid >= 1797 && lid <= 1798) || (lid >= 1805 && lid <= 1806) || (lid >= 1808 && lid <= 1809) || (lid == 1816) || (lid == 1818) || (lid >= 1820 && lid <= 1821) || (lid >= 1828 && lid <= 1829) || (lid == 1831))) { return true; }
  // 接頭詞,動詞接続 動詞 false
  if (((rid >= 2589 && rid <= 2592)) && ((lid >= 430 && lid <= 1836))) { return false; }
  // * ^名詞,接尾可能 true
  if ((true) && ((lid >= 2033 && lid <= 2034))) { return true; }
  // ^助詞,接続助詞 ^動詞,非自立 false
  if (((rid >= 329 && rid <= 367)) && ((lid >= 853 && lid <= 1836))) { return false; }
  // ^動詞,自立 ^動詞,非自立 false
  if (((rid >= 573 && rid <= 852)) && ((lid >= 853 && lid <= 1836))) { return false; }
  // 副詞,一般,*,*,*,*,よく 動詞,自立,*,*,五段・ラ行,*,なる false
  if (((rid == 14)) && ((lid == 741) || (lid == 745) || (lid == 749) || (lid == 753) || (lid == 757) || (lid == 761) || (lid == 765) || (lid == 769) || (lid == 773) || (lid == 777) || (lid == 781))) { return false; }
  // 名詞,接尾,サ変接続 動詞,自立,*,*,サ変・スル false
  if (((rid >= 1932 && rid <= 1943)) && ((lid >= 623 && lid <= 634))) { return false; }
  // * 動詞,非自立,*,*,五段・カ行促音便,連用タ接続,く false
  if ((true) && ((lid == 1382))) { return false; }
  // ^接頭詞 ^接頭詞 true
  if (((rid >= 2589 && rid <= 2632)) && ((lid >= 2589 && lid <= 2632))) { return true; }
  // * 名詞,非自立,形容動詞語幹,*,*,*,みたい false
  if ((true) && ((lid == 2188))) { return false; }
  // * ^助詞,*,*,*,*,*,(ヲ|ニ|ナ|ネ|ヨ|ン|ヨー|ワ|デ|ノ|ヘ|ヲ|之|ナア|ネェ|ヨー|なァ)$ true
  if ((true) && ((lid >= 381 && lid <= 385))) { return true; }
  // * 名詞,非自立,副詞可能,*,*,*,(きり|ため|っきり|はず|ほど|まま) false
  if ((true) && ((lid == 2128) || (lid >= 2133 && lid <= 2134) || (lid >= 2144 && lid <= 2146))) { return false; }
  // * 名詞,非自立,副詞可能 true
  if ((true) && ((lid >= 2123 && lid <= 2182))) { return true; }
  // * 名詞,非自立,一般,*,*,*,(コト|フシ|ホ|モノ|ン) true
  if ((true) && ((lid == 2088) || (lid >= 2091 && lid <= 2094))) { return true; }
  // * 助動詞,*,*,*,特殊・デス,基本形,ッス true
  if ((true) && ((lid == 177))) { return true; }
  // * 助動詞,*,*,*,特殊・デス,基本形,デス true
  if ((true) && ((lid == 178))) { return true; }
  // * 助動詞,*,*,*,特殊・デス,基本形,ドス true
  if ((true) && ((lid == 179))) { return true; }
  // * 助動詞,*,*,*,特殊・デス,未然形,ッス true
  if ((true) && ((lid == 188))) { return true; }
  // * 助動詞,*,*,*,不変化型,基本形,じゃン true
  if ((true) && ((lid == 38))) { return true; }
  // * 名詞,固有名詞,地域,一般 true
  if ((true) && ((lid >= 1920 && lid <= 1923))) { return true; }
  // 接頭詞,名詞接続 * false
  if (((rid >= 2593 && rid <= 2627)) && (true)) { return false; }
  // 連体詞, ^名詞 true
  if (((rid >= 2639 && rid <= 2651)) && ((lid >= 1837 && lid <= 2188))) { return true; }
  // * 助動詞,*,*,*,形容詞・イ段,*,無い true
  if ((true) && ((lid == 71) || (lid == 73) || (lid == 75) || (lid == 77) || (lid == 79) || (lid == 81) || (lid == 83) || (lid == 85) || (lid == 87) || (lid == 89) || (lid == 91) || (lid == 93) || (lid == 95))) { return true; }
  // 動詞 助動詞,*,*,*,形容詞・イ段,*,無い true
  if (((rid >= 430 && rid <= 1836)) && ((lid == 71) || (lid == 73) || (lid == 75) || (lid == 77) || (lid == 79) || (lid == 81) || (lid == 83) || (lid == 85) || (lid == 87) || (lid == 89) || (lid == 91) || (lid == 93) || (lid == 95))) { return true; }
  // ^(助動詞|動詞),*,*,*,*,基本形 名詞,非自立,一般,*,*,*,(事|コト) true
  if (((rid == 32) || (rid >= 35 && rid <= 48) || (rid == 53) || (rid >= 62 && rid <= 63) || (rid >= 82 && rid <= 83) || (rid == 98) || (rid == 100) || (rid >= 103 && rid <= 104) || (rid >= 114 && rid <= 115) || (rid >= 120 && rid <= 121) || (rid == 126) || (rid == 129) || (rid == 134) || (rid == 137) || (rid >= 142 && rid <= 143) || (rid >= 151 && rid <= 154) || (rid == 165) || (rid >= 169 && rid <= 179) || (rid >= 203 && rid <= 206) || (rid == 217) || (rid >= 239 && rid <= 244) || (rid == 265) || (rid >= 460 && rid <= 465) || (rid >= 508 && rid <= 515) || (rid >= 554 && rid <= 556) || (rid >= 586 && rid <= 587) || (rid >= 605 && rid <= 606) || (rid == 617) || (rid == 629) || (rid == 638) || (rid >= 676 && rid <= 682) || (rid == 709) || (rid == 715) || (rid == 719) || (rid == 727) || (rid == 735) || (rid >= 759 && rid <= 762) || (rid == 787) || (rid == 795) || (rid >= 809 && rid <= 812) || (rid == 833) || (rid == 841) || (rid == 848) || (rid == 859) || (rid == 869) || (rid >= 1078 && rid <= 1118) || (rid == 1245) || (rid >= 1252 && rid <= 1253) || (rid >= 1290 && rid <= 1301) || (rid >= 1366 && rid <= 1370) || (rid >= 1397 && rid <= 1398) || (rid >= 1429 && rid <= 1436) || (rid >= 1467 && rid <= 1468) || (rid >= 1575 && rid <= 1594) || (rid >= 1721 && rid <= 1725) || (rid >= 1775 && rid <= 1786) || (rid == 1834)) && ((lid == 2088) || (lid == 2096))) { return true; }
  // ^名詞 助動詞,*,*,*,(文語・ル|文語・リ|文語・マジ|文語・ゴトシ|文語・ケリ|文語・キ) true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 96 && lid <= 106) || (lid >= 124 && lid <= 136))) { return true; }
  // ^助詞 名詞,非自立,副詞可能,*,*,*,以内 true
  if (((rid >= 268 && rid <= 429)) && ((lid == 2155))) { return true; }
  // ^(動詞|助動詞|形容詞) 名詞,非自立,副詞可能,*,*,*,他 true
  if (((rid >= 29 && rid <= 267) || (rid >= 430 && rid <= 1836) || (rid >= 2189 && rid <= 2583)) && ((lid == 2153))) { return true; }
  // ^名詞,サ変接続 動詞,自立,*,*,一段,*,できる false
  if (((rid >= 1837 && rid <= 1845)) && ((lid == 644) || (lid == 651) || (lid == 658) || (lid == 665) || (lid == 672) || (lid == 679) || (lid == 686) || (lid == 693) || (lid == 700))) { return false; }
  // * 名詞,非自立,助動詞語幹,*,*,*,よう false
  if ((true) && ((lid == 2185))) { return false; }
  // * 名詞,非自立,助動詞語幹,*,*,*,様 true
  if ((true) && ((lid == 2186))) { return true; }
  // ^名詞,非自立 ^助詞 false
  if (((rid >= 2050 && rid <= 2188)) && ((lid >= 268 && lid <= 429))) { return false; }
  // ^名詞 助詞,終助詞,*,*,*,*,(よ|ね|の) false
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 418 && lid <= 420) || (lid == 425))) { return false; }
  // ^名詞 ^助詞,(終助詞|特殊|接続助詞|動詞非自立的) true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 329 && lid <= 367) || (lid >= 399 && lid <= 428))) { return true; }
  // ^名詞 ^名詞,非自立,(一般|助動詞語幹|形容動詞語幹) true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 2050 && lid <= 2122) || (lid >= 2183 && lid <= 2188))) { return true; }
  // ^名詞 ^形容詞,非自立 true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 2466 && lid <= 2583))) { return true; }
  // ^名詞 ^動詞,(接尾|非自立) true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 430 && lid <= 572) || (lid >= 853 && lid <= 1836))) { return true; }
  // ^(動詞|形容詞|助動詞) 名詞,接尾,(サ変接続|人名|副詞可能|助数詞|地域|形容動詞語幹|形容動詞語幹) true
  if (((rid >= 29 && rid <= 267) || (rid >= 430 && rid <= 1836) || (rid >= 2189 && rid <= 2583)) && ((lid >= 1932 && lid <= 1943) || (lid >= 1993 && lid <= 2001) || (lid >= 2004 && lid <= 2025))) { return true; }
  // ^(動詞|形容詞|助動詞) 形容詞,非自立,*,*,形容詞・アウオ段,*,良い true
  if (((rid >= 29 && rid <= 267) || (rid >= 430 && rid <= 1836) || (rid >= 2189 && rid <= 2583)) && ((lid == 2475) || (lid == 2482) || (lid == 2489) || (lid == 2496) || (lid == 2503) || (lid == 2515) || (lid == 2523) || (lid == 2530) || (lid == 2537) || (lid == 2544) || (lid == 2551) || (lid == 2558))) { return true; }
  // ^助動詞,*,*,*,特殊・タ,基本形,た ^助詞,終助詞,*,*,*,*,かな true
  if (((rid == 142)) && ((lid == 408))) { return true; }
  // ^接頭詞,名詞接続 ^(動詞|形容詞) true
  if (((rid >= 2593 && rid <= 2627)) && ((lid >= 430 && lid <= 1836) || (lid >= 2189 && lid <= 2583))) { return true; }
  // 名詞,固有名詞,人名 名詞,接尾,人名 false
  if (((rid >= 1917 && rid <= 1919)) && ((lid == 1993))) { return false; }
  // 名詞,固有名詞,一般 名詞,接尾,人名 false
  if (((rid == 1916)) && ((lid == 1993))) { return false; }
  // 名詞,固有名詞,地域 名詞,接尾,地域 false
  if (((rid >= 1920 && rid <= 1924)) && ((lid >= 2012 && lid <= 2020))) { return false; }
  // 名詞,数 名詞,接尾,助数詞 true
  if (((rid >= 2036 && rid <= 2048)) && ((lid >= 2004 && lid <= 2011))) { return true; }
  // 名詞,接尾,特殊 名詞,接尾,助動詞語幹 false
  if (((rid >= 2026 && rid <= 2032)) && ((lid >= 2002 && lid <= 2003))) { return false; }
  // 名詞 名詞,接尾,副詞可能 true
  if (((rid >= 1837 && rid <= 2188)) && ((lid >= 1994 && lid <= 2001))) { return true; }
  // 名詞,接尾,助数詞 名詞,接尾 false
  if (((rid >= 2004 && rid <= 2011)) && ((lid >= 1932 && lid <= 2034))) { return false; }
  // ^名詞,接尾 ^名詞,接尾 true
  if (((rid >= 1932 && rid <= 2034)) && ((lid >= 1932 && lid <= 2034))) { return true; }
  // * ^名詞,接尾,(副詞可能|助動詞語幹|特殊) false
  if ((true) && ((lid >= 1994 && lid <= 2003) || (lid >= 2026 && lid <= 2032))) { return false; }
  // * ^名詞,接尾 true
  if ((true) && ((lid >= 1932 && lid <= 2034))) { return true; }
  // ^助動詞,*,*,*,特殊・ダ ^名詞,非自立 false
  if (((rid >= 162 && rid <= 168)) && ((lid >= 2050 && lid <= 2188))) { return false; }
  // ^動詞 動詞,非自立,*,*,五段・ワ行促音便,*,(ちまう|ちゃう|じまう|じゃう) false
  if (((rid >= 430 && rid <= 1836)) && ((lid >= 1756 && lid <= 1757) || (lid >= 1759 && lid <= 1760) || (lid >= 1767 && lid <= 1770) || (lid >= 1777 && lid <= 1778) || (lid >= 1780 && lid <= 1781) || (lid >= 1789 && lid <= 1790) || (lid >= 1792 && lid <= 1793) || (lid >= 1800 && lid <= 1801) || (lid >= 1803 && lid <= 1804) || (lid >= 1811 && lid <= 1812) || (lid >= 1814 && lid <= 1815) || (lid >= 1823 && lid <= 1824) || (lid >= 1826 && lid <= 1827))) { return false; }
  // ^動詞 動詞,非自立,*,*,五段・カ行促音便,*,(てく|どく) false
  if (((rid >= 430 && rid <= 1836)) && ((lid == 1352) || (lid == 1357) || (lid == 1363) || (lid == 1368) || (lid == 1373) || (lid == 1378) || (lid == 1383) || (lid == 1388))) { return false; }
  // ^動詞 動詞,非自立,*,*,五段・カ行イ音便,*,とく false
  if (((rid >= 430 && rid <= 1836)) && ((lid == 1256) || (lid == 1268) || (lid == 1280) || (lid == 1292) || (lid == 1304) || (lid == 1316) || (lid == 1328) || (lid == 1340))) { return false; }
  // ^動詞 動詞,非自立,*,*,一段,*,(てる|でる) false
  if (((rid >= 430 && rid <= 1836)) && ((lid == 888) || (lid == 890) || (lid == 929) || (lid == 931) || (lid == 970) || (lid == 972) || (lid == 1011) || (lid == 1013) || (lid == 1052) || (lid == 1054) || (lid == 1093) || (lid == 1095) || (lid == 1134) || (lid == 1136) || (lid == 1175) || (lid == 1177) || (lid == 1215) || (lid == 1217))) { return false; }
  // ^動詞 動詞,非自立,*,*,五段・ラ行,*,(とる|どる) false
  if (((rid >= 430 && rid <= 1836)) && ((lid >= 1483 && lid <= 1484) || (lid >= 1503 && lid <= 1504) || (lid >= 1524 && lid <= 1525) || (lid >= 1543 && lid <= 1544) || (lid >= 1561 && lid <= 1562) || (lid >= 1581 && lid <= 1582) || (lid >= 1601 && lid <= 1602) || (lid >= 1621 && lid <= 1622) || (lid >= 1641 && lid <= 1642) || (lid >= 1661 && lid <= 1662) || (lid >= 1681 && lid <= 1682))) { return false; }
  // ^副詞,助詞類接続,*,*,*,*,(そう|こう|どう|どぉ) ^動詞,自立,*,*,五段・ラ行,*,なる false
  if (((rid == 17) || (rid >= 21 && rid <= 23)) && ((lid == 741) || (lid == 745) || (lid == 749) || (lid == 753) || (lid == 757) || (lid == 761) || (lid == 765) || (lid == 769) || (lid == 773) || (lid == 777) || (lid == 781))) { return false; }
  // ^形容詞,自立,*,*,*,連用テ接続 ^動詞,自立,*,*,五段・ラ行,*,なる false
  if (((rid >= 2447 && rid <= 2451) || (rid == 2465)) && ((lid == 741) || (lid == 745) || (lid == 749) || (lid == 753) || (lid == 757) || (lid == 761) || (lid == 765) || (lid == 769) || (lid == 773) || (lid == 777) || (lid == 781))) { return false; }
  // ^名詞,副詞可能 ^動詞,自立,*,*,五段・ラ行,*,なる false
  if (((rid >= 1905 && rid <= 1914)) && ((lid == 741) || (lid == 745) || (lid == 749) || (lid == 753) || (lid == 757) || (lid == 761) || (lid == 765) || (lid == 769) || (lid == 773) || (lid == 777) || (lid == 781))) { return false; }
  // ^助詞,*,*,*,*,*,(は|に|で|も|が|の) ^動詞,自立,*,*,五段・ラ行,*,ある true
  if (((rid >= 283 && rid <= 284) || (rid == 299) || (rid == 308) || (rid >= 327 && rid <= 328) || (rid >= 332 && rid <= 333) || (rid == 349) || (rid >= 357 && rid <= 360) || (rid == 362) || (rid == 367) || (rid >= 369 && rid <= 370) || (rid >= 372 && rid <= 374) || (rid == 376) || (rid >= 397 && rid <= 398) || (rid >= 401 && rid <= 402) || (rid == 416) || (rid >= 419 && rid <= 420) || (rid == 422) || (rid == 429)) && ((lid == 739) || (lid == 743) || (lid == 747) || (lid == 751) || (lid == 755) || (lid == 759) || (lid == 763) || (lid == 767) || (lid == 771) || (lid == 775) || (lid == 779))) { return true; }
  // ^助詞,*,*,*,*,*,(は|に|で|も|が|の|と) ^動詞,自立,*,*,サ変・スル,* false
  if (((rid >= 271 && rid <= 272) || (rid >= 283 && rid <= 284) || (rid >= 299 && rid <= 300) || (rid == 308) || (rid >= 326 && rid <= 328) || (rid >= 332 && rid <= 333) || (rid >= 349 && rid <= 351) || (rid >= 357 && rid <= 360) || (rid == 362) || (rid == 367) || (rid >= 369 && rid <= 374) || (rid == 376) || (rid == 387) || (rid == 389) || (rid >= 395 && rid <= 398) || (rid >= 401 && rid <= 402) || (rid == 416) || (rid >= 419 && rid <= 420) || (rid == 422) || (rid == 429)) && ((lid >= 623 && lid <= 634))) { return false; }
  // ^名詞,(一般|サ変接続|形容動詞語幹|副詞可能) ^動詞,自立,*,*,サ変・スル,* false
  if (((rid >= 1837 && rid <= 1845) || (rid >= 1847 && rid <= 1894) || (rid >= 1905 && rid <= 1914) || (rid >= 1927 && rid <= 1931)) && ((lid >= 623 && lid <= 634))) { return false; }
  // ^(形容詞|動詞|副詞) ^動詞,自立,*,*,サ変・スル,* false
  if (((rid >= 12 && rid <= 28) || (rid >= 430 && rid <= 1836) || (rid >= 2189 && rid <= 2583)) && ((lid >= 623 && lid <= 634))) { return false; }
  // * ^動詞,自立,*,*,サ変・スル,* true
  if ((true) && ((lid >= 623 && lid <= 634))) { return true; }
  // ^助詞,*,*,*,*,*,(は|に|で|も|が|の) 形容詞,自立,*,*,形容詞・アウオ段,*,ない false
  if (((rid >= 283 && rid <= 284) || (rid == 299) || (rid == 308) || (rid >= 327 && rid <= 328) || (rid >= 332 && rid <= 333) || (rid == 349) || (rid >= 357 && rid <= 360) || (rid == 362) || (rid == 367) || (rid >= 369 && rid <= 370) || (rid >= 372 && rid <= 374) || (rid == 376) || (rid >= 397 && rid <= 398) || (rid >= 401 && rid <= 402) || (rid == 416) || (rid >= 419 && rid <= 420) || (rid == 422) || (rid == 429)) && ((lid == 2387) || (lid == 2392) || (lid == 2397) || (lid == 2402) || (lid == 2407) || (lid == 2414) || (lid == 2419) || (lid == 2423) || (lid == 2428) || (lid == 2433) || (lid == 2438) || (lid == 2443) || (lid == 2448))) { return false; }
  // * 名詞,非自立,形容動詞語幹,*,*,*,ふう true
  if ((true) && ((lid == 2187))) { return true; }
  // ^副詞,一般 形容詞,(接尾|非自立) true
  if (((rid >= 12 && rid <= 15)) && ((lid >= 2189 && lid <= 2383) || (lid >= 2466 && lid <= 2583))) { return true; }
  // ^助詞 形容詞,(接尾|非自立) true
  if (((rid >= 268 && rid <= 429)) && ((lid >= 2189 && lid <= 2383) || (lid >= 2466 && lid <= 2583))) { return true; }
  // 助動詞,*,*,*,特殊・ダ 名詞 true
  if (((rid >= 162 && rid <= 168)) && ((lid >= 1837 && lid <= 2188))) { return true; }
  // * ^(その他|フィラー|感動詞) true
  if ((true) && ((lid >= 1 && lid <= 11) || (lid >= 2584 && lid <= 2585))) { return true; }
  // * ^記号,(括弧開|括弧閉|アルファベット|一般) true
  if ((true) && ((lid >= 2633 && lid <= 2634) || (lid >= 2636 && lid <= 2637))) { return true; }
  // * ^記号,(句点|読点) true
  if ((true) && ((lid == 2635) || (lid == 2638))) { return true; }
  // * ^形容詞,自立 true
  if ((true) && ((lid >= 2384 && lid <= 2465))) { return true; }
  // * ^形容詞,(接尾|非自立) false
  if ((true) && ((lid >= 2189 && lid <= 2383) || (lid >= 2466 && lid <= 2583))) { return false; }
  // * ^(助詞|助動詞) false
  if ((true) && ((lid >= 29 && lid <= 429))) { return false; }
  // * ^動詞,自立 true
  if ((true) && ((lid >= 573 && lid <= 852))) { return true; }
  // * ^動詞,接尾 false
  if ((true) && ((lid >= 430 && lid <= 572))) { return false; }
  // * ^名詞,(接続詞的|接尾|動詞非自立的|特殊|非自立) false
  if ((true) && ((lid == 1915) || (lid >= 1932 && lid <= 2035) || (lid >= 2049 && lid <= 2188))) { return false; }
  // * ^名詞 true
  if ((true) && ((lid >= 1837 && lid <= 2188))) { return true; }
  // * ^助詞,接続助詞,*,*,*,*,て false
  if ((true) && ((lid == 348))) { return false; }
  // * 動詞,非自立,*,*,*,*,(いける|いる|える|かける|かねる|きれる|すぎる|たげる|つづける|づける|づける|できる|どける|のける|みせる|みる|もらえる|る|く|尽くす) false
  if ((true) && ((lid >= 853 && lid <= 862) || (lid >= 874 && lid <= 876) || (lid >= 878 && lid <= 881) || (lid == 884) || (lid >= 886 && lid <= 887) || (lid == 889) || (lid == 891) || (lid >= 893 && lid <= 896) || (lid >= 915 && lid <= 917) || (lid >= 919 && lid <= 922) || (lid == 925) || (lid >= 927 && lid <= 928) || (lid == 930) || (lid == 932) || (lid >= 934 && lid <= 937) || (lid >= 956 && lid <= 958) || (lid >= 960 && lid <= 963) || (lid == 966) || (lid >= 968 && lid <= 969) || (lid == 971) || (lid == 973) || (lid >= 975 && lid <= 978) || (lid >= 997 && lid <= 999) || (lid >= 1001 && lid <= 1004) || (lid == 1007) || (lid >= 1009 && lid <= 1010) || (lid == 1012) || (lid == 1014) || (lid >= 1016 && lid <= 1019) || (lid >= 1038 && lid <= 1040) || (lid >= 1042 && lid <= 1045) || (lid == 1048) || (lid >= 1050 && lid <= 1051) || (lid == 1053) || (lid == 1055) || (lid >= 1057 && lid <= 1060) || (lid >= 1079 && lid <= 1081) || (lid >= 1083 && lid <= 1086) || (lid == 1089) || (lid >= 1091 && lid <= 1092) || (lid == 1094) || (lid == 1096) || (lid >= 1098 && lid <= 1101) || (lid >= 1120 && lid <= 1122) || (lid >= 1124 && lid <= 1127) || (lid == 1130) || (lid >= 1132 && lid <= 1133) || (lid == 1135) || (lid == 1137) || (lid >= 1139 && lid <= 1142) || (lid >= 1161 && lid <= 1163) || (lid >= 1165 && lid <= 1168) || (lid == 1171) || (lid >= 1173 && lid <= 1174) || (lid == 1176) || (lid == 1178) || (lid >= 1180 && lid <= 1182) || (lid >= 1201 && lid <= 1203) || (lid >= 1205 && lid <= 1208) || (lid == 1211) || (lid >= 1213 && lid <= 1214) || (lid == 1216) || (lid == 1218) || (lid >= 1220 && lid <= 1222) || (lid >= 1240 && lid <= 1249) || (lid == 1351) || (lid == 1356) || (lid == 1362) || (lid == 1367) || (lid == 1372) || (lid == 1377) || (lid == 1382) || (lid == 1387) || (lid == 1410) || (lid == 1418) || (lid == 1426) || (lid == 1434) || (lid == 1442) || (lid == 1450) || (lid == 1458) || (lid == 1697) || (lid == 1702) || (lid == 1707) || (lid == 1712) || (lid == 1722) || (lid == 1727) || (lid == 1732) || (lid == 1737) || (lid == 1742) || (lid == 1747))) { return false; }
  // * 助詞,接続助詞,*,*,*,*,で false
  if ((true) && ((lid == 349))) { return false; }
  // * * true
  if ((true) && (true)) { return true; }
  return true;  // default
}
}   // namespace

