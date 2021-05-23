/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UILabel, UIView;

@protocol _SKUIStatusBarAlertViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SKUIStatusBarAlertViewController : UIViewController

{
    UILabel *_label;
    _Bool _onScreen;
    long long _style;
    unsigned long long _supportedInterfaceOrientations;
    id <_SKUIStatusBarAlertViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UIView *statusBarView;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOnScreen) _Bool onScreen;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) id <_SKUIStatusBarAlertViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long defaultInterfaceOrientations;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateLabelFrame;
- (void)endAllAnimations;
- (void)handleLabelTap:(id)arg1;

@end
