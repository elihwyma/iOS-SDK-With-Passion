/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNHandleStringClassification, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNContactClassifiedHandleStringInterpreter : NSObject

{
    _Bool _hasBeenInterpreted;
    CNHandleStringClassification *_classification;
    NSMutableArray *_emailAddressesImpl;
    NSMutableArray *_phoneNumbersImpl;
    NSMutableArray *_unconvertableHandles;
}

@property (nonatomic, readonly) CNHandleStringClassification *classification;
@property (nonatomic, readonly) NSMutableArray *emailAddressesImpl;
@property (nonatomic, readonly) NSMutableArray *phoneNumbersImpl;
@property (nonatomic, readonly) NSMutableArray *unconvertableHandles;
@property (nonatomic) _Bool hasBeenInterpreted;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSArray *phoneNumbers;

- (id)init;
- (id)description;
- (id)initWithHandleStringClassification:(id)arg1;
- (void)interpretEmailAddresses;
- (void)interpretPhoneNumbers;
- (void)interpretUnknownsAsEmailAddresses;
- (void)interpretValues;

@end
