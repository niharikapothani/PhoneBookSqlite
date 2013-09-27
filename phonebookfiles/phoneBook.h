#include <Foundation/Foundation.h>
#include "phonecard.h"

@interface phoneBook: NSObject
{
   NSString *phoneBookName;
   NSMutableArray *book;
}
-(id) initWithName: (NSString*) name;
-(void) addRecord: (PhoneCard*) theRecord;
-(void) remove: (PhoneCard*) theRecord;
-(void) findPerson: (NSString *) theName;
-(int) noOfEntries;
-(void) list;
-(void) dealloc;
@end
