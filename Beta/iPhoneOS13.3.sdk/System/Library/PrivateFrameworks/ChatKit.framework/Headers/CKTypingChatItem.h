/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatItem.h>

@class CALayer;

@protocol IMTypingIndicatorLayerProtocol;

@interface CKTypingChatItem : CKChatItem

@property (nonatomic, readonly, getter=isFromMe) _Bool fromMe;
@property (nonatomic, readonly) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (struct UIEdgeInsets)contentInsets;
- (Class)cellClass;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (_Bool)displayDuringSend;
- (_Bool)wantsDrawerLayout;

@end
