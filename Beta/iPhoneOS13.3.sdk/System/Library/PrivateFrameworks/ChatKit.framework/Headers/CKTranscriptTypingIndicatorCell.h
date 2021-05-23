/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMessageCell.h>

@class CALayer, CKTypingView;

@protocol IMTypingIndicatorLayerProtocol;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell

{
    CKTypingView *_typingView;
}

@property (retain, nonatomic) CKTypingView *typingView;
@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setOrientation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)ckLayerDidBecomeVisible:(_Bool)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)stopPulseAnimation;
- (void)startShrinkAnimation;

@end
