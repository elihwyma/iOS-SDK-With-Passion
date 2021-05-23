/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainerIdentifiersPredicate : CNPredicate

{
    NSArray *_identifiers;
}

@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (_Bool)includesDisabledContainers;

@end
