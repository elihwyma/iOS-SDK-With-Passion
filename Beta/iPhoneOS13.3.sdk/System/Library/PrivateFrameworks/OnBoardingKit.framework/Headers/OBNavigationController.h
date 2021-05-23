/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UINavigationController.h>

@interface OBNavigationController : UINavigationController

{
    unsigned long long _supportedInterfaceOrientations;
}

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void)viewDidLoad;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;

@end
