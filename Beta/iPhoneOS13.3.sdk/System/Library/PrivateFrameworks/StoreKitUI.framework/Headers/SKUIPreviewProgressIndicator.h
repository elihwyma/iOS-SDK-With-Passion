/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class SKUIShapeView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIPreviewProgressIndicator : UIControl

{
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
    _Bool _isIndeterminate;
    float _progress;
}

@property (nonatomic, readonly, getter=isIndeterminate) _Bool indeterminate;
@property (nonatomic) float progress;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (void)reloadWithPlayerStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;

@end
