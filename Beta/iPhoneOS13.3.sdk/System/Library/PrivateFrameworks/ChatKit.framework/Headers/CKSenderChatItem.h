/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatItem.h>

@interface CKSenderChatItem : CKChatItem

- (struct UIEdgeInsets)contentInsets;
- (id)cellIdentifier;
- (Class)cellClass;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)wantsDrawerLayout;

@end
