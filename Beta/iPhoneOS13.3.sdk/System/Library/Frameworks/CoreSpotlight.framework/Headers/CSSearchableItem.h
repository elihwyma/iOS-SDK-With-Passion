/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSSearchableItemAttributeSet, MISSING_TYPE, NSDate, NSString;

@interface CSSearchableItem : NSObject

{
    CSSearchableItemAttributeSet *_attributeSet;
    MISSING_TYPE *_score;
}

@property _Bool noIndex;
@property MISSING_TYPE *score;
@property _Bool isUpdate;
@property (copy) NSString *bundleID;
@property (copy) NSString *protection;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property (retain) CSSearchableItemAttributeSet *attributeSet;

+ (_Bool)supportsSecureCoding;
+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (id)searchableItem;
- (id)_propertiesDescription;
- (_Bool)_isFullyFormed;
- (_Bool)_hasAttributesOfType:(id)arg1;
- (id)initWithAttributeSet:(id)arg1;
- (void)_standardizeFileProvider:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizeMarkAs:(id)arg1;
- (void)_parseEmailHeadersForFeatures:(id)arg1;
- (void)_standardizeSiriShortcuts:(id)arg1;
- (void)_fixBrokenAuthorNames:(id)arg1;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13;
- (void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9;
- (void)standardizeAttributes;
- (id)filteredSpotlightAttributes;
- (void)_updateWithSearchableItem:(id)arg1;

@end
