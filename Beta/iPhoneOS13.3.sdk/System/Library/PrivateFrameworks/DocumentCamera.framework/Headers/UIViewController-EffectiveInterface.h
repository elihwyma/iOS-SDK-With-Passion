/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (EffectiveInterface)

@property (nonatomic, readonly) _Bool dc_isRTL;

+ (void)dc_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;

- (void)dc_getEffectiveInterfaceOrientation:(long long *)arg1 andEffectiveInterfaceIdiom:(long long *)arg2;
- (double)dc_safeAreaDistanceFromTop;
- (long long)dc_effectiveInterfaceOrientation;
- (id)dc_safeAreaLayoutGuide;
- (void)dc_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;
- (_Bool)dc_isViewVisible;
- (double)dc_safeAreaDistanceFromBottom;

@end
