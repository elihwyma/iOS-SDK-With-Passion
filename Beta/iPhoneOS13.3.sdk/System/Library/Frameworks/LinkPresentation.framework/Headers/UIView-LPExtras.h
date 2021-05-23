/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIView.h>

@interface UIView (LPExtras)

- (void)_lp_setNeedsLayout;
- (_Bool)_lp_isLTR;
- (double)_lp_backingScaleFactor;
- (void)_lp_setBackgroundColor:(id)arg1;
- (void)_lp_insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)_lp_insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_lp_setOpacity:(double)arg1;
- (void)_lp_setCornerRadius:(double)arg1;
- (void)_lp_setNonContinuousCornerRadius:(double)arg1;
- (void)_lp_bringSubviewToFront:(id)arg1;
- (_Bool)_lp_prefersDarkInterface;

@end
