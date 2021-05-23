/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUICoreContactTypeAssessor, NSArray;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject

{
    _Bool _includeWhitelistedContactsOnly;
    _Bool _sortItemsByName;
    _Bool _markItemsAsPersisted;
    NSArray *_contacts;
    CNUICoreContactTypeAssessor *_contactTypeAssessor;
    long long _contactFormatterStyle;
}

@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (nonatomic, readonly) long long contactFormatterStyle;
@property (nonatomic, readonly) _Bool includeWhitelistedContactsOnly;
@property (nonatomic, readonly) _Bool sortItemsByName;
@property (nonatomic, readonly) _Bool markItemsAsPersisted;

+ (id)itemsBySortingItems:(id)arg1;
+ (_Bool)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(_Bool)arg2;
+ (id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(_Bool)arg4;
+ (id)uniqueFamilyMemberContactItems:(id)arg1;
+ (id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2;
+ (id)placeholderNameForNamelessContact:(id)arg1;
+ (id)firstDisplayableEmailAddressForContact:(id)arg1;
+ (id)firstDisplayablePhoneNumberForContact:(id)arg1;

- (id)init;
- (id)build;
- (id)initWithContacts:(id)arg1 contactTypeAssessor:(id)arg2 contactFormatterStyle:(long long)arg3 includeWhitelistedContactsOnly:(_Bool)arg4 sortItemsByName:(_Bool)arg5 markItemsAsPersisted:(_Bool)arg6;
- (id)initWithContacts:(id)arg1 contactTypeAssessor:(id)arg2 contactFormatterStyle:(long long)arg3 includeWhitelistedContactsOnly:(_Bool)arg4 sortItemsByName:(_Bool)arg5;
- (id)sortedFamilyMemberContactItems:(id)arg1;

@end
