/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContaineriOSLegacyIdentifierPredicate : CNPredicate

{
    int _iOSLegacyIdentifier;
}

@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (_Bool)includesDisabledContainers;
- (id)initWithiOSLegacyIdentifier:(int)arg1;

@end
