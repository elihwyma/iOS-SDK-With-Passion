/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForContainerPredicate : CNPredicate

{
    NSString *_containerIdentifier;
}

@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;

@end
