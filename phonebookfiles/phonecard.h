#include <Foundation/Foundation.h>

@interface PhoneCard : NSObject
{
   NSString* name;
   NSString* email;
   NSString* phoneNum;
}
@property (retain) NSString *name;
@property (retain) NSString *email;
@property (retain) NSString *phoneNum;
-(void) print;
@end
