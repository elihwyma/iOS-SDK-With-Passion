/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (TVMLKitAdditions)

@property (copy, nonatomic, setter=tv_setIdentifier:) NSString *tvIdentifier;

- (void)tv_updateViewLayout;
- (void)_cancelImpressionsUpdate;
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig)arg1;
- (id)tv_impressionableElementsForDocument:(id)arg1;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;

@end
