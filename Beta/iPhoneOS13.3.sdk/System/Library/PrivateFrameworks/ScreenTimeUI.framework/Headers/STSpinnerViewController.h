/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface STSpinnerViewController : UIViewController

{
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
