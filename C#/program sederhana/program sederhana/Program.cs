using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace program_sederhana
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = 1;
            int b = 1;
            int c = 1;

            if(a == b)
            {
                Console.WriteLine("benar");

            }else if( a == c)
            {
                Console.WriteLine("salah");
            }
            else
            {
                Console.WriteLine("salah");
            }


            Console.ReadKey();
        }
    }
}
