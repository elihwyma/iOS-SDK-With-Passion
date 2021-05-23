/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKValueWithCaptionBubbleControl.h>

@interface GKBubbleFlowBubbleControl : GKValueWithCaptionBubbleControl

@property (nonatomic, readonly) _Bool hasAnyContent;

- (void)prepareForReuse;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)syncContentFromBubble:(id)arg1;

@end
