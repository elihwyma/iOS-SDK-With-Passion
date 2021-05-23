/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface GKMultiplayerBubbleView : UIView

{
    UIButton *_shareButton;
    UIButton *_playButton;
}

@property (nonatomic) UIButton *shareButton;
@property (nonatomic) UIButton *playButton;

- (void)awakeFromNib;
- (void)floatInBubbles;
- (void)setBubblesHidden:(_Bool)arg1;
- (void)removeAllAnimationsFromBubbles;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;

@end
