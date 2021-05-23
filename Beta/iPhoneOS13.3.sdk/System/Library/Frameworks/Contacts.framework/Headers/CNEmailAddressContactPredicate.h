/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate : CNPredicate

{
    _Bool _returnsMultipleResults;
    NSArray *_emailAddresses;
    NSArray *_groupIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *emailAddresses;
@property (copy, nonatomic, readonly) NSArray *groupIdentifiers;
@property (nonatomic, readonly) _Bool returnsMultipleResults;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDebugDescription;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(_Bool)arg3;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(_Bool)arg2;
- (id)contactsFromCLSDataStore:(id)arg1;

@end
