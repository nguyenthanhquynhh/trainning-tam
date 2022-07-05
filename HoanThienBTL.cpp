#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int n = 1;//so luong phan tu
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
void Xoasothu5nguyentotrongdanhsach(List &l ){
	Node *p = l.head;
	int dem=1,tam=0;
	while(p!=NULL){
		if(dem==5&&checksnt(p->data)==1) tam++;
		dem = dem + 1;
  		p = p->next;
 	}
 	if(tam>0){
 		delAtK(l,5);
 		cout<<"Phan tu thu 5 la so nguyen to. Va da xoa so nguyen to vi tri 5 di. Danh sach sau khi xoa: ";	
 		xuat(l);
 		cout<<endl;
	 }else{
	 	cout<<"Khong co so o vi tri so 5 la so nguyen to\n";
	 }
}
void TinhTichCacSo(List l ){
	Node *p = l.head;
	int dem=0,tich=1;
	while(p!=NULL){
		if(p->data%2==0&&p->data>0&&p->data%5==0){
			tich = tich * p->data;
			dem++;
		}
  		p = p->next;
 	}
 	if(dem==0) cout<<"Khong co so nao thoa ma la so chan, duong, chia het cho 5\n";
 	else cout<<"Tich cac so chan, duong, chia het cho 5 la: "<<tich<<endl;
}
void SapXepTangDan(List &l)
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
int checksotrung(List l){
	for(Node *pTmp=l.head;pTmp!=NULL;pTmp=pTmp->next){
  		for(Node *pTmp2=pTmp->next;pTmp2!=NULL;pTmp2=pTmp2->next){
    		if(pTmp->data==pTmp2->data){
       			return 0;
     		}
  		}
 	}
 	return 1;
}
int layphantutrung(List l)
{
	for(Node *pTmp=l.head;pTmp!=NULL;pTmp=pTmp->next){
  		for(Node *pTmp2=pTmp->next;pTmp2!=NULL;pTmp2=pTmp2->next){
    		if(pTmp->data==pTmp2->data){
       			return pTmp->data;
     		}
  		}
 	}
}
void XoaCacPhanTuTrung(List &l){
	int tam=0;
	do{
		if(checksotrung(l)==0){
			Node *p = l.head;
			int dem=1,a=layphantutrung(l);
			while(p!=NULL){
				if(p->data==a){
					delAtK(l,dem);
					n--;
					tam++;
					break;	
				}
				dem++;
  				p = p->next;
 			}	
		}
	}while(checksotrung(l)==0);
	if(tam>0) {
		cout<<"Danh sach sau khi xoa cac so trung nhau: ";
		xuat(l);	
	}
	else cout<<"Khong co  phan tu nao trung nhau trong danh sach\n";
}
int main(){
 	List l;
	Init(l);
	char a[20];
 	int k, x, lc,dem=0;
 	do{
   		cout<<"\n__________________MENU__________________\n";
   		cout<<"[1]. Tao danh sach lien ket vong cac so nguyen dung khi nhan #\n";
  	 	cout<<"[2]. Kiem tra o vi tri so 5 co phai so nguyen to hay khong. Neu co thi xoa phan tu nay\n";
  	 	cout<<"[3]. Tinh tich cac so chan duong chia het cho 5\n";
    	cout<<"[4]. Sap xep danh sach theo thu tu tang dan\n";
    	cout<<"[5]. Xoa bo nhung phan tu trung nhau trong danh sach\n";
    	cout<<"[0]. Ket thuc chuong chinh\n";
    	cout<<"Nhap vao lua chon(0->5): ";
    	cin>> lc;
  		switch(lc){
   			case 0: 
   			   cout<<"Cam on ban da su dung chuong trinh\n";
			   break;
    		case 1: 
				while(1){
					cout<<"Nhap so thu "<<n<<": ";
					fflush(stdin);
					cin>>a;
					if(a[0]=='#') break;
					x=atoi(a);
					n++;
					addTail(l,x); 
				}
				cout<<"Cac phan tu trong danh sach: ";
				xuat(l);
				cout<<endl;
				break;
   			case 2: 
			    Xoasothu5nguyentotrongdanhsach(l);
				break;
   			case 3: 
			    TinhTichCacSo(l);
				break;
   			case 4: 
			    SapXepTangDan(l);
			    cout<<"Danh sach sau khi sap xep tang dan: ";
			    xuat(l); 
			    cout<<endl;
			    break;
   			case 5: 
   				XoaCacPhanTuTrung(l);
			    break;
			default:
				cout<<"Ban dap nhap sai. Vui long nhap lai(0->5)\n";
				break;
  		}
 	}while(lc != 0 );
 	return 0;
}