/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>

@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup

{
    CRRecentContact *_recentContact;
}

@property (retain, nonatomic, readonly) CRRecentContact *recentContact;

- (id)label;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;

@end
