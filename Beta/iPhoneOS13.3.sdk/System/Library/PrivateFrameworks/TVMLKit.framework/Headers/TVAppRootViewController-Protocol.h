/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/Swift-Protocol.h>

@class IKAppTabBar, MISSING_TYPE, UINavigationController, UIViewController;

@protocol IKAppNavigationController;

@protocol TVAppRootViewController <Swift>

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, readonly) id <IKAppNavigationController> appNavigationController;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;

- (MISSING_TYPE *)setAppNavigationControllersDelegate: /* Error: Ran out of types for this method. */;

@end
