/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CNContact.h>

@class CRRecentContact;

@interface CNContact (PKAdditions)

@property (retain, nonatomic) CRRecentContact *recentContact;
@property (nonatomic) unsigned long long contactSource;

+ (id)pkPassbookRequiredKeys;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)contactWithABRecordRef:(void *)arg1;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;

- (id)nameComponents;
- (void *)ABPerson;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1;
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1 showName:(_Bool)arg2;
- (id)pkFullAndPhoneticName;
- (id)pkFullName;
- (_Bool)isSubsetOfMeCard;
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)pkPhoneticName;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFormattedContactAddressWithoutName;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkFullyQualifiedName;
- (id)sanitizedContact;
- (id)contactWithCleanedUpDistrict;
- (id)localizedDisplayNameWithLabel:(id)arg1;
- (id)pkDeconstructContactUsingKey:(id)arg1;
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;

@end
