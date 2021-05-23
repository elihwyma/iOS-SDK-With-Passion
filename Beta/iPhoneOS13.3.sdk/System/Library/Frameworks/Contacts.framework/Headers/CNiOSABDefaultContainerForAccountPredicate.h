/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDefaultContainerForAccountPredicate : CNPredicate

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (_Bool)includesDisabledContainers;

@end
