/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

__attribute__((visibility("hidden")))
@interface CNContactsUserDefaultsX : CNContactsUserDefaults

{
    CNFoundationUserDefaults *_foundationUserDefaults;
}

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (id)init;
- (id)countryCode;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)arg1;
- (long long)sortOrder;
- (_Bool)shortNameFormatPrefersNicknames;
- (_Bool)isShortNameFormatEnabled;
- (long long)displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setShortNameFormatEnabled:(_Bool)arg1;
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)initWithFoundationUserDefaults:(id)arg1;

@end
