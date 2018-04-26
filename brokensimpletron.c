      
      if(err) {
	 switch(err) {
	    case 1:
               printf("========================================\n"
            	      "You did it, You broke the accumulator\n"
                      "========================================\n"); 
	       break;
	    case 2:
	       printf("That's Definitely Not how division works\n");
	       break;
	 }
	 
         printf("*** Simpletron execution abnormally terminated ***\n");
         dump(acc, mem[i]);
         exit(-1);
      }


	} /* end for (i) */
	
}
// { GET FETCH DECODE EXECUTE CYCLE TO WORK Nothing else matters

// int Fetch(int mem[8]){
// 	for(int i = 0;i<9;i++){
// 	int cmd = mem[i];
// 	iCounter++;
// 	}
// 	return cmd;
// }
// }// 	   printf("\nREGISTERS:\n");
// 	   //{
// 	   //printf("math storage Box		%c%.4d\n"
// 	   //"command Counter		%.2d\n"
// 	   //"instructionRegister	%c%.4d\n"
// 	   //"location in mem		%.2d\n",
// 		  //acc < 0 ? '-' : '+', acc < 0 ? -acc : acc,
// 		  //iCounter, mem[*iCounter] < 0 ? '-' : '+',
// 		  //mem[*iCounter] < 0 ? -mem[*iCounter] : mem[*iCounter],
// 		  //mem[*iCounter] % 1000);
// 	   //   //"operation	%.2d\n"
// 		//}
// 	   printf("\nmem:\n");
	
// 	   /* Print the header */
// 	   printf("%3c", ' ');
// 	   for(i = 0; i < 10; i++)
// 	      printf("%5d ", i);
// 	   printf("\n");
	
// 	   for(i = 0; i < MEMSIZE; i += 10) {
// 	      printf("%.2d", i);
// 	      for(j = i; j < i+10; j++) {
// 		 printf(" %c%.4d",
// 		    mem[j] < 0 ? '-' : '+', mem[j] < 0 ? -mem[j] : mem[j]);
// 	      }
// 	      printf("\n");
// 	   }
	
// 	} //end of dump


//{
// void storeInMem(int mem[1000],address)
// int FDE(int location[1000]){
	
// 	decodeinstruction(location);
// 	execute(opCode,);
//}	
// }
	//execute(mem[i],&operation,&loc);
	
//}	

//{
//prompt(mem,iCounter);
// while(opCode != HALT){
	
// *iCounter = mem[8];
//fetch

// int i = 0;
//}
