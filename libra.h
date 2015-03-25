using namespace std; 
string plaka(int rakam)
{
rakam-=1;
string a[81]={"Adana" ,"Adıyaman" ,"Afyon", "Agrı", "Amasya" , "Ankara" ,"Antalya" , "Artvin","Aydın" , "Balıkesir", "Bilecik", "Bingol" ,"Bitlis", "Bolu","Burdur","Bursa","Canakkale","Cankırı","Corum","Denizli","Diyarbakır","Edirne","Elazıg","Erzincan","Erzurum","Eskisehir","Gaziantep","Giresun","Gumushane",
"Hakkari","Hatay","Isparta","Mersin",
"İstanbul","İzmir","Kars","Kastamonu","Kayseri","Kırklareli","Kırsehir","Kocaeli","Konya","Kutahya","Malatya","Manisa","Kahramanmaras",
"Mardin","Mugla","Mus","Nevsehir","Nigde","Ordu","Rize","Sakarya","Samsun","Siirt","Sinop","Sivas","Tekirdag","Tokat","Trabzon",
"Tunceli","Sanlıurfa","Usak","Van","Yozgat","Zonguldak","Aksaray","Bayburt","Karaman","Kirikkale","Batman","Sirnak",
"Bartin","Ardahan","Igdir","Yalova","Karabuk","Kilis","Osmaniye","Duzce"};
string c;
c=a[rakam];
return c;
}
