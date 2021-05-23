/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITabBarController.h>

@class NSString, UIViewController;

@interface HKTabBarController : UITabBarController

{
    UIViewController *_previousViewController;
}

@property (weak, nonatomic) UIViewController *previousViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)setTabBarControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;

@end
