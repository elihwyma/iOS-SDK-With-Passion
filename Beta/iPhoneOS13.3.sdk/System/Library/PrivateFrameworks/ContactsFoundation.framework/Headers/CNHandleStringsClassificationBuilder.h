/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

{
    NSMutableArray *_emailAddresses;
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_unknown;
}

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

- (id)init;
- (id)build;
- (void)addEmailAddress:(id)arg1;
- (void)addPhoneNumber:(id)arg1;
- (void)addUnknown:(id)arg1;

@end
