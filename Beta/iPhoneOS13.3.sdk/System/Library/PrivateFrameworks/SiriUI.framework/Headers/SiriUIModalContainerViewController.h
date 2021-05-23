/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

{
    UIViewController *_contentViewController;
    id <SiriUIModalContainerViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UIViewController *contentViewController;
@property (weak, nonatomic) id <SiriUIModalContainerViewControllerDelegate> delegate;

- (void)loadView;
- (id)initWithContentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;

@end
