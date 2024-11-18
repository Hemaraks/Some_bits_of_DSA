#if !defined(H)
#define H
using namespace std;

template <class T>
struct item{
	T data;
	item *next;
};

template<class T> class G_stack;
template<class T> ostream& operator << (ostream& ,G_stack<T>& );

template <class T>
class G_stack{
	protected:
		item<T> *top;
	public:	
		G_stack();
		void push(T);
		void pop();
		friend ostream& operator << <T>(ostream& ,G_stack<T>& );
};

#endif