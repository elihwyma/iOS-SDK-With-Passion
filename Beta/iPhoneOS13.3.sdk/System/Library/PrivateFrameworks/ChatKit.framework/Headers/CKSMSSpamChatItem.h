/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKStampChatItem.h>

@interface CKSMSSpamChatItem : CKStampChatItem

- (Class)cellClass;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)getTranscriptTextForExtensionName:(id)arg1;

@end
