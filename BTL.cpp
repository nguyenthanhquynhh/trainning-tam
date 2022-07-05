// danh sach lien ket vong
#include<iostream>
#include<math.h>
using namespace std;
int n;//so luong phan tu
struct Node{
 int data;
 Node *next;// chua dia chi node ke tiep ma no tro toi
 Node *prev; // tro toi node truoc no
};

struct List{
 Node *head;
 Node *tail;
};

void Init(List &l){ // k tao List rong
 l.head = l.tail = NULL;
}

Node *creatNode(int x ){ //tao thong tin cho node
 Node *p = new Node;
 if(p == NULL) exit(1);
 p->next = NULL;
 p->prev = NULL;
 p->data = x;
 return p;
}

bool isEmpty(List l ){ // k tr a xem lieu List co rong hay k.
 return (l.head == NULL);
}

// chen vao dau List:
void addHead(List &l, int x ){ 
 Node *p = creatNode(x);
 if(isEmpty(l)) l.head = l.tail = p;
 else{
  p->next = l.head; // con tro next cua p tro toi dia chi cua node head(ban dau)
  l.head->prev = p; // tro nguoc lai
  l.head = p; // cap nhat node head( luc sau )
 }
}
// ham chen vao cuoi List
void addTail(List &l, int x ){
 Node *p = creatNode(x);
 if(isEmpty(l)) addHead(l,x);
 else{
  l.tail->next = p; // tro thuan
  p->prev = l.tail; // tro nguoc
  l.tail = p; // cap nhat l.tail
 }
}
// xuat thong tin ra man hinh
void xuat(List l ){
	Node *p = l.head;
	while(p!=NULL){
  		cout<<" " << p->data;
  		p = p->next;
 	}
}
int checksnt(int n){
	if(n < 2){
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return 1;
    }else{
        return 0;
    }
}
void xuatsnt(List l ){
	Node *p = l.head;
	int dem=0;
	while(p!=NULL){
		if(checksnt(p->data)==1){
			if(dem==0) cout<<"Cac so nguyen to trong danh sach: ";
			cout<<" " << p->data;
			dem++;
		}
  		p = p->next;
 	}
 	if(dem==0) cout<<"Khong co so nguyen to nao trong danh sach\n";
}
void delHead(List &l ){ // xoa node o dau List
 if(!isEmpty(l)){
  Node *p = l.head;
  l.head = l.head->next; // cap nhat l.head
  l.head->prev = NULL;
  delete p; // xoa bo node head ban dau
 }
}

void delTail(List &l ){
 if(!isEmpty(l)){
  Node *p = l.tail;
  l.tail = l.tail->prev; // cap nhat l.tail
  l.tail->next = NULL;
  p->prev = NULL;
  delete p;
 }
}
void delAtK(List &l, int k ){
 if(k<= 1) delHead(l);
 else if(k>=n) delTail(l);
 else{
  int dem = 0;
  if(!isEmpty(l)){
   Node *p = l.head;
   Node *q = new Node;
   while(p != NULL){ // tim node thu k.
    dem++;
    q = p;
    if(dem == k ) break; // tim thay thi break
    else p= p->next; // k thi tim tiep
   }
   Node *r = l.head;
   while(r->next != q ) r = r->next; // tim node k-1
   r->next = q->next; // cho node next cua node k-1 tro toi node k+1;
   (q->next)->prev = r;
   delete q;
  }
 }
}
void Xoaso0trongdanhsach(List &l ){
	Node *p = l.head;
	int dem=1,tam=0;
	while(p!=NULL){
		if(dem==5&&p->data==0) tam++;
		dem = dem + 1;
  		p = p->next;
 	}
 	if(tam>0){
 		delAtK(l,5);
 		cout<<"Co so 0 o trong danh sach. Va da xoa so 0 di. Danh sach sau khi xoa: ";	
 		xuat(l);
 		cout<<endl;
	 }else{
	 	cout<<"Khong co so 0 o vi tri thu 5 trong danh sach\n";
	 }
}
int checksoam(List l){
	Node *p = l.head;
	while(p!=NULL){
		if(p->data<0) return 0;
  		p = p->next;
 	}
 	return 1;
}
void xoagiatriam(List &l){
	int tam=0;
	do{
		Node *p = l.head;
		int dem=1;
		while(p!=NULL){
			if(p->data<0){
				delAtK(l,dem);
				n--;
				tam++;
				break;	
			}
			dem++;
  			p = p->next;
 		}
	}while(checksoam(l)==0);
	if(tam>0) {
		cout<<"Danh sach sau khi xoa cac so am: ";
		xuat(l);	
	}
	else cout<<"Khong co so am nao trong danh sach\n";
}
void SortList(List &l)
{
 for(Node *pTmp=l.head;pTmp!=NULL;pTmp=pTmp->next)
 {
  for(Node *pTmp2=pTmp->next;pTmp2!=NULL;pTmp2=pTmp2->next)
  {
    if(pTmp->data>pTmp2->data)
     {
       int x=pTmp->data;
       pTmp->data=pTmp2->data;
       pTmp2->data=x;
     }
  }
 }
}

int main(){
 	List l;
	Init(l);
 	int k, x, lc,dem=0;
 	do{
   		cout<<"\n__________________MENU__________________\n";
   		cout<<"[1]. Tao danh sach lien ket vong cac so nguyen\n";
  	 	cout<<"[2]. Kiem tra trong danh sach co so nguyen to hay khong\n";
  	 	cout<<"[3]. Kiem tra o vi tri so 5 co phai so 0 hay khong. Neu co thi xoa phan tu nay\n";
    	cout<<"[4]. Xoa tat ca cac so am trong danh sach\n";
    	cout<<"[5]. Sap xep danh sach theo thu tu tang dan\n";
    	cout<<"[0]. Ket thuc chuong chinh\n";
    	cout<<"Nhap vao lua chon(0->5): ";
    	cin>> lc;
  		switch(lc){
   			case 0: 
   			   cout<<"Cam on ban da su dung chuong trinh\n";
			   break;
    		case 1: 
				cout<<"Nhap so ptu ban dau cua List: "; 
				cin>> n;
				for(int i = 1; i<= n; i++ ) {
					cout<<"Nhap so thu "<<i<<": ";
					cin>>x;
					addTail(l,x); 
				}
				cout<<"Cac phan tu trong danh sach: ";
				xuat(l);
				cout<<endl;
				break;
   			case 2: 
			    xuatsnt(l);
			    cout<<endl;
				break;
   			case 3: 
			    Xoaso0trongdanhsach(l);
				break;
   			case 4: 
			   xoagiatriam(l);
			   break;
   			case 5: 
   				SortList(l);
   				cout<<"Danh sach sau khi sap xep tang dan: ";
			   xuat(l); 
			   cout<<endl;
			   break;
			default:
				cout<<"Ban dap nhap sai. Vui long nhap lai(0->5)\n";
				break;
  		}
 	}while(lc != 0 );
 	return 0;
}