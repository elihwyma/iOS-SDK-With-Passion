/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)arg1;
- (unsigned int)ABPersonGetEditNameFormat;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)arg1;
- (unsigned int)ABPersonGetSortOrdering;
- (void)ABPersonSetShortNameFormat:(unsigned int)arg1;
- (unsigned int)ABPersonGetShortNameFormat;
- (void)ABPersonSetShortNameFormatEnabled:(_Bool)arg1;
- (_Bool)ABPersonGetShortNameFormatEnabled;
- (void)ABPersonSetShortNamePreferNicknames:(_Bool)arg1;
- (_Bool)ABPersonGetShortNamePreferNicknames;
- (id)abDefaultCountryCode;
- (id)displayedContactsFilterRepresentationPref;
- (void)setDisplayedContactsFilterRepresentationPref:(id)arg1;

@end
