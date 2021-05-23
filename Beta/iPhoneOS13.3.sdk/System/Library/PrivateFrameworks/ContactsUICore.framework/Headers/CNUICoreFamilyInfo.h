/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject

{
    CNContact *_meContact;
    NSArray *_elements;
}

@property (nonatomic, readonly) CNContact *meContact;
@property (nonatomic, readonly) NSArray *elements;

- (id)init;
- (id)description;
- (id)initWithMeContact:(id)arg1 elements:(id)arg2;

@end
