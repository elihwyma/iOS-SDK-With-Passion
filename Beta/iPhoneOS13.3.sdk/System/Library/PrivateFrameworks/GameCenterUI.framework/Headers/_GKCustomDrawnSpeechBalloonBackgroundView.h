/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@interface _GKCustomDrawnSpeechBalloonBackgroundView : UIView

{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
}

@property (nonatomic) unsigned char drawStyle;
@property (nonatomic) unsigned char tipDirection;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (id)speechBalloonMaskForRect:(struct CGRect)arg1;
- (struct CGGradient *)_gradientForColor:(id)arg1;

@end
