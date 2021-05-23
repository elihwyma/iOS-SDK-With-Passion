/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, UINavigationController, UIView, UIViewController;

@protocol SKUITabBarControllerDelegate;

@protocol SKUITabBarController <Swift>

@property (nonatomic) id <SKUITabBarControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) UIViewController *selectedViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, readonly) UIView *tabBar;
@property (retain, nonatomic) UIViewController *transientViewController;
@property (nonatomic, readonly) NSArray *allViewControllers;
@property (nonatomic) long long forcedUserInterfaceStyle;
@property (nonatomic, readonly) UINavigationController *moreNavigationController;
@property (nonatomic, readonly) UIViewController *floatingOverlayViewController;

- (unsigned short)setViewControllers:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)setTransientViewController:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)hideBarWithTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)showBarWithTransition: /* Error: Ran out of types for this method. */;

@end
