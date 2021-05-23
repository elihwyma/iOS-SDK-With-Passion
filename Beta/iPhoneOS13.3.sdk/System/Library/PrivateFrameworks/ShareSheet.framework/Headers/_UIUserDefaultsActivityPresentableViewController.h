/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIViewController.h>

@interface _UIUserDefaultsActivityPresentableViewController : UIViewController

{
    UIViewController *_navigationController;
    UIViewController *_userDefaultsViewController;
}

@property (retain, nonatomic) UIViewController *navigationController;
@property (retain, nonatomic) UIViewController *userDefaultsViewController;

- (void)viewDidLoad;
- (void)_loadNavigationController;
- (id)initWithUserDefaultsViewController:(id)arg1;

@end
