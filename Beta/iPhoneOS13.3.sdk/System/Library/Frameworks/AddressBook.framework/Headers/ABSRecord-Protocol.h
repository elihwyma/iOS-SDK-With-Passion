/*
 Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <AddressBook/Swift-Protocol.h>

@class ABSAddressBook, ABSSource, NSString;

@protocol ABSCNImplementation;

@protocol ABSRecord <Swift>

@property (nonatomic, readonly) int id;
@property (nonatomic, readonly) NSString *CNIdentifierString;
@property (nonatomic, readonly) unsigned int type;
@property (weak, nonatomic) ABSAddressBook *addressBook;
@property (weak, nonatomic) ABSSource *source;
@property (nonatomic, readonly) NSString *compositeName;
@property (retain, nonatomic) id <ABSCNImplementation> cnImpl;

- (unsigned short)copyValueForProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProperty:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceRecordStorageWithCNObject: /* Error: Ran out of types for this method. */;

@end
