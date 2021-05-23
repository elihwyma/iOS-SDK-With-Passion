/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <CoreRecents/CRRecentContact.h>

@interface CRRecentContact (CloudRecentsExtensions)

- (id)contactKey;
- (id)contactWithKeysToFetch:(id)arg1;
- (id)existingContactWithKeysToFetch:(id)arg1 contactStore:(id)arg2;
- (id)_contactContext;
- (void)_setContactContext:(id)arg1;
- (id)contactWithKeysToFetch:(id)arg1 contactStore:(id)arg2;
- (id)existingContactWithKeysToFetch:(id)arg1;

@end
