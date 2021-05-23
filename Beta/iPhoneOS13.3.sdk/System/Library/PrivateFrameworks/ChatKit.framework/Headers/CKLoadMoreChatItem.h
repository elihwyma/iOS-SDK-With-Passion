/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatItem.h>

@interface CKLoadMoreChatItem : CKChatItem

- (struct UIEdgeInsets)contentInsets;
- (Class)cellClass;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)displayDuringSend;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;

@end
