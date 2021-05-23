/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeRecipient.h>

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient

{
    CRRecentContact *_recent;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isGroup;
- (_Bool)isRemovableFromSearchResults;
- (id)recentContact;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:(id)arg1;

@end
