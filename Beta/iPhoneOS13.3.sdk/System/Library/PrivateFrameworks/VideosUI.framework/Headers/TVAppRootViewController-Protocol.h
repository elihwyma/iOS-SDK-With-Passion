/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class IKAppTabBar, UINavigationController, UIViewController;

@protocol IKAppNavigationController;

@protocol TVAppRootViewController <Swift>

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic, readonly) id <IKAppNavigationController> appNavigationController;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;

- (unsigned short)setAppNavigationControllersDelegate: /* Error: Ran out of types for this method. */;

@end
