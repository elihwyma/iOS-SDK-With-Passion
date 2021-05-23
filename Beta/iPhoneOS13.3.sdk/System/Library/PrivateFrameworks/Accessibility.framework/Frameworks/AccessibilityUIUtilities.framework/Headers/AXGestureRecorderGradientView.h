/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface AXGestureRecorderGradientView : UIView

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (id)_copyColorsArrayWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)_configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 locations:(id)arg3 animated:(_Bool)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_copyLocationsArrayWithTopColorLocation:(float)arg1 bottomColorLocation:(float)arg2;
- (void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4;
- (void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;

@end
