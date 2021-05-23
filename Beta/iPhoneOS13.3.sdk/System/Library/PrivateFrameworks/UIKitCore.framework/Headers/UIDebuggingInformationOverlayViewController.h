/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIDebuggingInformationContainerView, UIDebuggingInformationRootTableViewController, UINavigationController, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlayViewController : UIViewController

{
    UIDebuggingInformationContainerView *_shadowContainer;
    UINavigationController *_navController;
    _Bool _isFullscreen;
    UIDebuggingInformationRootTableViewController *_rootTableViewController;
    struct CGPoint _offset;
}

@property struct CGPoint offset;
@property (nonatomic, readonly) UIView *containerView;
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) _Bool isFullscreen;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)toggleFullscreen;
- (void)didReceiveGesture:(id)arg1;

@end
