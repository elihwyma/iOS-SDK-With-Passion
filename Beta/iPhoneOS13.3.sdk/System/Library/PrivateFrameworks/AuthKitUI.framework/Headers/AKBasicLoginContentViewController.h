/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIViewController.h>

@class AKBasicLoginContentViewControllerContainerView;

@interface AKBasicLoginContentViewController : UIViewController

@property (nonatomic, readonly) AKBasicLoginContentViewControllerContainerView *contentContainerView;

- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
