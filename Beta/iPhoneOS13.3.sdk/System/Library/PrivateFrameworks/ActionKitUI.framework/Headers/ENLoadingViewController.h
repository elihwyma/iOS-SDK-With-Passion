/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

@protocol ENLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ENLoadingViewController : UIViewController

{
    id <ENLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id <ENLoadingViewControllerDelegate> delegate;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)cancel:(id)arg1;

@end
