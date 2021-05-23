/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (NCBannerPresentationControllerAdditions)

@property (nonatomic, setter=setNCTransitionAnimationState:) long long ncTransitionAnimationState;

- (id)nc_presentationControllerIfPresented;
- (id)nc_bannerPresentationController;
- (id)nc_presentingBannerPresentationController;
- (id)nc_presentationContextDefiningViewController;

@end
