/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class FAFamilyMember, NSArray;

@interface CNUICoreFamilyElement : NSObject

{
    FAFamilyMember *_familyMember;
    NSArray *_matchingContacts;
}

@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) NSArray *matchingContacts;
@property (nonatomic, readonly) _Bool hasMatchingContacts;
@property (nonatomic, readonly) _Bool isParent;

- (id)description;
- (id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2;
- (_Bool)containsFamilyMember:(id)arg1;

@end
