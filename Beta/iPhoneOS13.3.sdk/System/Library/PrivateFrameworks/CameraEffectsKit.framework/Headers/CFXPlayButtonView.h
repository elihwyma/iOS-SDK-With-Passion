/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIButton, UIImage;

@protocol CFXPlayButtonViewDelegate;

@interface CFXPlayButtonView : UIView

{
    id <CFXPlayButtonViewDelegate> _delegate;
    CAShapeLayer *_playControlMaskLayer;
    UIView *_contentView;
    UIButton *_playButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
}

@property (retain, nonatomic) CAShapeLayer *playControlMaskLayer;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (weak, nonatomic) id <CFXPlayButtonViewDelegate> delegate;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)playButtonTapped:(id)arg1;
- (void)sharedInit;
- (void)notifyPlaybackDidStart;
- (void)notifyPlaybackDidStop;
- (void)notifyWasTapped;

@end
