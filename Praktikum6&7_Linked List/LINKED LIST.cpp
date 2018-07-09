#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<conio.h>
using namespace std;
struct node{
    int info;
    struct node *next;
}*start;

class list_tunggal{
    public:
        node* membuat_node(int);
        void node_depan();
        void node_pilih();
        void node_belakang(); 
        void hapus_node();
        void urutkan_ll();
        void cari_ll();
        void tambah_node();
        void tampilkan_ll();
        daftar_tunggal() {
            start = NULL;
        }
};

main(){
    int choice, nodes, element, position, i;
    list_tunggal sl;
    start = NULL;
    while (1){
		cout<<"====================== Liked List======================"<<endl;
		cout<<"Menu :                                               "<<endl;	
		cout<<"                                                      "<<endl;
		cout<<" 1 - Input node di depan                        "<<endl;
        cout<<" 2 - Input node di belakang                     "<<endl;              
        cout<<" 3 - Input node di posisi tertentu            "<<endl;
        cout<<" 4 - Delete node tertentu                           "<<endl;
        cout<<" 5 - Cari node                               "<<endl;
        cout<<" 6 - Tampil node                         "<<endl;
        cout<<" 7 - Keluar                                        "<<endl<<endl;
        cout<<" - Pilih =  "; cin>>choice;
        switch(choice){
        	case 1:
	            cout<<"input node di depan : "<<endl;
	            sl.node_depan();
	            cout<<endl;
	            getch();
	            system("cls");
	            break;
	        case 2:
	            cout<<"input node di belakang : "<<endl;
	            sl.node_belakang();
	            cout<<endl;
	            getch();
	            system("cls");
	            break;
	        case 3:
	            cout<<"Input node di posisi tertentu : "<<endl;
	            sl.node_pilih();
	            cout<<endl;
	            getch();
	            system("cls");
	            break;
	        case 4:
	            cout<<"Delete node : "<<endl;
	            sl.hapus_node();
	            getch();
	            system("cls");
	            break;
	        case 5:
	            cout<<"Cari Node : "<<endl;
	            sl.cari_ll();
	            cout<<endl;
	            getch();
	            system("cls");
	            break;
	        case 6:
	            cout<<"Tampil Node : "<<endl;
	            sl.tampilkan_ll();
	            cout<<endl;
	            getch();
	            system("cls");
	            break;
	        case 7:
	            cout<<"keluar"<<endl;
	            exit(1);
	            break;  
	        default:
	            cout<<"pilihan salah"<<endl;
        }
    }
}
 
node *list_tunggal::membuat_node (int value){
    struct node *temp, *s;
    temp = new(struct node); 
    if (temp == NULL){
        cout<<"Memory tidak dialokasikan "<<endl;
        return 0;
    }
    else{
        temp->info = value;
        temp->next = NULL;     
        return temp;
    }
}

void list_tunggal::node_depan(){
    int value;
    cout<<"Masukkan nilai: ";
    cin>>value;
    struct node *temp, *p;
    temp = membuat_node(value);
    if (start == NULL){
        start = temp;
        start->next = NULL;          
    } 
    else{
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Input data di depan"<<endl;
}
void list_tunggal::node_belakang(){
    int value;
    cout<<"Masukkan nilai: ";
    cin>>value;
    struct node *temp, *s;
    temp = membuat_node(value);
    s = start;
    while (s->next != NULL){         
        s = s->next;        
    }
    temp->next = NULL;
    s->next = temp;
    cout<<"Input data di belakang"<<endl;  
}
void list_tunggal::node_pilih(){
    int value, pos, counter = 0; 
    cout<<"Masukkan nilai: ";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = membuat_node(value);
    cout<<"Masukkan posisi dimana node ingin dimasukkan: ";
    cin>>pos;
    int i;
    s = start;
    while (s != NULL){
        s = s->next;
        counter++;
    }
    if (pos == 1){
        if (start == NULL){
            start = temp;
            start->next = NULL;
        }
        else{
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1  && pos <= counter){
        s = start;
        for (i = 1; i < pos; i++){
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else{
        cout<<"Posisi di luar batas"<<endl;
    }
}
void list_tunggal::hapus_node(){
    int pos, i, counter = 0;
    if (start == NULL){
        cout<<"Daftar kosong"<<endl;
        return;
    }
    cout<<"Masukkan posisi nilai yang akan dihapus: ";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1){
        start = s->next;
    }
    else{
        while (s != NULL){
            s = s->next;
            counter++;  
        }
        if (pos > 0 && pos <= counter){
            s = start;
            for (i = 1;i < pos;i++){
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else{
            cout<<"Posisi di luar batas"<<endl;
        }
        free(s);
        cout<<"Elemen dihapus"<<endl;
    }
}
void list_tunggal::tambah_node(){
    int value, pos, i;
    if (start == NULL){
        cout<<"Daftar kosong"<<endl;
        return;
    }
    cout<<"Masukkan nilai untuk tambah_noded: ";
    cin>>pos;
    cout<<"Masukkan nilai ";
    cin>>value;
    struct node *s, *ptr;
    s = start;
    if (pos == 1){
        start->info = value; 
    }
    else{
        for (i = 0;i < pos - 1;i++){
            if (s == NULL){
                cout<<"Kurang dari "<<pos<<" elemen";
                return;
            }
            s = s->next;
        }
        s->info = value;  
    }
    cout<<"Node tambah_noded"<<endl;
} 
void list_tunggal::cari_ll(){
    int value, pos = 0;
    bool flag = false;
    if (start == NULL){
        cout<<"Data Kosong"<<endl;
        return;
    }
    cout<<"Cari nilai : ";cin>>value;
    struct node *s;
    s = start;
    while (s != NULL){
        pos++;
        if (s->info == value){
            flag = true;
            cout<<"data"<<value<<" ditemukan "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"data"<<value<<" tidak ditemukan"<<endl;  
}
void list_tunggal::tampilkan_ll(){
    struct node *temp;
    if (start == NULL){
        cout<<"Data kosong"<<endl;
        return;
    }
    temp = start;
    cout<<"urutan elemen: "<<endl;
    while (temp != NULL){
        cout<<temp->info<<", ";
        temp = temp->next;
    }
    cout<<" "<<endl;
}	
