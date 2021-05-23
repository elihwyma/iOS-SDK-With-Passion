/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactsWithIdentifiersPredicate : CNPredicate

{
    NSMutableDictionary *_internalIdentifiers;
    NSArray *_identifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *identifiers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (_Bool)cn_supportsNativeSorting;
- (id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;
- (id)contactsFromDonationStore:(id)arg1;

@end
