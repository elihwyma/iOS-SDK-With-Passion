/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class _GKCustomDrawnSpeechBalloonBackgroundView, _GKImageSpeechBalloonBackgroundView;

@interface GKSpeechBalloonBackgroundView : UIView

{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    _GKCustomDrawnSpeechBalloonBackgroundView *_customDrawnView;
    _GKImageSpeechBalloonBackgroundView *_strokedImageView;
}

@property (retain, nonatomic) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView;
@property (retain, nonatomic) _GKImageSpeechBalloonBackgroundView *strokedImageView;
@property (nonatomic) unsigned char drawStyle;
@property (nonatomic) unsigned char tipDirection;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;

@end
