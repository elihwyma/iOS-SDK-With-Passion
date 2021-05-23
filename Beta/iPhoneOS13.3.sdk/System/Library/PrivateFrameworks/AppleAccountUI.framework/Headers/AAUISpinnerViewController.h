/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;

@interface AAUISpinnerViewController : UIViewController

{
    UIActivityIndicatorView *_spinnerView;
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) _Bool spinning;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end
