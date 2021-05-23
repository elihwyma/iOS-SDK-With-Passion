/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@interface CNComposeRecipient (Additions)

- (id)rawAddress;
- (id)IDSCanonicalAddress;
- (id)IDSCanonicalAddressForAddress:(id)arg1;
- (_Bool)isNotAChildOfUnifiedRecipient;
- (_Bool)isUnnamedGroup;
- (_Bool)isNamedGroup;
- (_Bool)isPhone;
- (_Bool)isEmail;
- (struct __CFPhoneNumber *)copyPhoneNumber;
- (void)setCanonicalAddress:(id)arg1;
- (id)canonicalAddress;

@end
