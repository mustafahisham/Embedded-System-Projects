
#define set_bit(x,y) x = x |(1<<y);
			
#define clr_bit(x,y) x &= ~(1 << y);

#define toggle_bit(x,y) x ^= (1 << y);

#define sr_bit(x,y) x = x >> y;

#define sl_bit(x,y) x = x << y;

#define get_bit(x,y) x = x & (1 << y);
