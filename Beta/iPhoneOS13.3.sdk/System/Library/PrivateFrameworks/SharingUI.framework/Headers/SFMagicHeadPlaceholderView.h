/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIView.h>

@class SFMagicHeadCircleView, UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SFMagicHeadPlaceholderView : UIView

{
    UIVisualEffectView *_backgroundVisualEffectView;
    SFMagicHeadCircleView *_backgroundView;
    UIVisualEffectView *_contentVisualEffectView;
    UILabel *_label;
    UIImageView *_imageView;
    _Bool _useNoUWBCapableLabel;
    _Bool _useRaiseLabel;
    _Bool _titledTooFarColor;
    _Bool _canShowArrow;
}

- (double)alpha;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setTiltedTooFarColor:(_Bool)arg1 useRaiseLabel:(_Bool)arg2 useNoUWBCapableLabel:(_Bool)arg3;
- (void)updateForCurrentState;

@end
