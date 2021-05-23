/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIControl.h>

@class CAShapeLayer, UIImage, UIImageView, UIView;

@interface ADCountdownButton : UIControl

{
    _Bool _dimmed;
    UIImage *_iconImage;
    UIImage *_dimmedIconImage;
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UIView *_outlineView;
    CAShapeLayer *_outlineProgressLayer;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *dimmedIconImage;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *outlineView;
@property (retain, nonatomic) CAShapeLayer *outlineProgressLayer;
@property (nonatomic) _Bool dimmed;

+ (id)_closeBoxImage;
+ (id)_inactiveCloseBoxImage;

- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCountdownProgress:(double)arg1;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (double)countdownProgress;

@end
