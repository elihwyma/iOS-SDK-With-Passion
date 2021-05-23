/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <UIKit/UIView.h>

@class AFUIStarkGradientView, UIImageView, _UIVisualEffectBackdropView;

@interface AFUISiriCarPlayView : UIView

{
    long long _backgroundViewMode;
    UIView *_fullScreenBackgroundView;
    UIImageView *_fullScreenAuraView;
    AFUIStarkGradientView *_gradientView;
    _UIVisualEffectBackdropView *_fullScreenBackdropView;
    UIView *_systemBackgroundView;
}

@property (retain, nonatomic) UIView *fullScreenBackgroundView;
@property (retain, nonatomic) UIImageView *fullScreenAuraView;
@property (retain, nonatomic) AFUIStarkGradientView *gradientView;
@property (retain, nonatomic) _UIVisualEffectBackdropView *fullScreenBackdropView;
@property (retain, nonatomic) UIView *systemBackgroundView;
@property (nonatomic) long long backgroundViewMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateViewsForBackgroundViewMode:(long long)arg1;

@end
