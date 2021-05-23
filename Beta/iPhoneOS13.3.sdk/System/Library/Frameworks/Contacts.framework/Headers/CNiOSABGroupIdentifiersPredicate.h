/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupIdentifiersPredicate : CNPredicate

{
    NSArray *_identifiers;
}

@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionOfIdentifiers:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;

@end
