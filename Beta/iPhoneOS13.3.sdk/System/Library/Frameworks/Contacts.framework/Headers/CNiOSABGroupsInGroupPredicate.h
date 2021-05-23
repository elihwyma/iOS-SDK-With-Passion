/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsInGroupPredicate : CNPredicate

{
    NSString *_parentGroupIdentifier;
}

@property (copy, nonatomic, readonly) NSString *parentGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithParentGroupIdentifier:(id)arg1;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;

@end
