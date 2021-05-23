/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIApplication.h>

@class UIViewController;

@interface UIApplication (UIApplicationAdditions)

@property (nonatomic, readonly) UIViewController *topmostViewController;

- (_Bool)isAlertControllerPresenting;

@end
