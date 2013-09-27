# include <Foundation/Foundation.h>
# include "phonecard.h"

@implementation PhoneCard
@synthesize name,email,phoneNum;
-(void) print
{
   NSLog(@"Name %@",name);
   NSLog(@"Email %@",email);
   NSLog(@"Phone no %@",phoneNum);
}

@end
