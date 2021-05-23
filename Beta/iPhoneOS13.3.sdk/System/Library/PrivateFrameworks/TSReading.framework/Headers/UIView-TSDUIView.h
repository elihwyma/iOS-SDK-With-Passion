/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (TSDUIView)

@property (nonatomic) double tsdAlpha;
@property (copy, nonatomic) UIColor *tsdBackgroundColor;

- (void)p_translateToView:(id)arg1 above:(_Bool)arg2 siblingView:(id)arg3 shouldScale:(_Bool)arg4;
- (void)translateAndScaleToView:(id)arg1;
- (void)translateAndScaleToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateToView:(id)arg1;
- (void)translateToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateToView:(id)arg1 belowSubview:(id)arg2;
- (id)childAtPoint:(struct CGPoint)arg1;
- (id)ts_windowForView;

@end
