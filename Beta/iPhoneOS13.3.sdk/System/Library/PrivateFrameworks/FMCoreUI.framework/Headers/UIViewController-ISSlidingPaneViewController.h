/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIViewController.h>

@class FMSlidingPaneViewController;

@interface UIViewController (ISSlidingPaneViewController)

@property (readonly) FMSlidingPaneViewController *slidingPaneViewController;

- (void)addConstraintsToFillSuperview;

@end
