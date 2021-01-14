package kr.or.aesop;

public class HelloWorld {
	static {
		System.load("/usr/lib/helloworld.so");
	}
	public static void main(String args[]) {
		HelloWorld h = new HelloWorld();

		String a = "AA\n";
		int[] b = {1,2,3};
		char[] c = {'a', 'b', 'c'};
		System.out.println(a);
		h.show1();
		h.show2(9);
		h.show3(b);
		h.show4('d');
		h.show5(c);
		h.show6(a);
		h.show6();
	}
	public void func() {
		System.out.println("func");
	}
	
	public native void show1();
	public native void show2(int i);
	public native void show3(int i[]);
	public native void show4(char c);
	public native void show5(char c[]);
	public native void show6(String s);
	public native void show6();
}
