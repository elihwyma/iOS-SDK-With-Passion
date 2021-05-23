/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKStampChatItem.h>

@interface CKBlackholeChatItem : CKStampChatItem

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;

- (Class)cellClass;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;

@end
