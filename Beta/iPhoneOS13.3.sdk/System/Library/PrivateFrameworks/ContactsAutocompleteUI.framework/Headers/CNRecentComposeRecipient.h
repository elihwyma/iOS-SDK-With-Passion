/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient

{
    CRRecentContact *_recent;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isGroup;
- (id)recentContact;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:(id)arg1;

@end
