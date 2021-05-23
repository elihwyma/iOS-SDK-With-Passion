/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeRecipientGroup.h>

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup

{
    CRRecentContact *_recentContact;
}

@property (retain, nonatomic, readonly) CRRecentContact *recentContact;

- (id)label;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;

@end
