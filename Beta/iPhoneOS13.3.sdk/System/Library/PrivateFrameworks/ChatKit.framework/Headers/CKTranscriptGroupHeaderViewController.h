/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptHeaderViewController.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (nonatomic, readonly) UIButton *headerButton;

- (void)dealloc;
- (void)loadView;
- (_Bool)shouldInvalidateOnAddressBookChange;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (id)_groupHeaderComposeRecipients;

@end
