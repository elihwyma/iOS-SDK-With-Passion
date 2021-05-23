/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UINavigationController.h>

@interface MCUINavigationViewController : UINavigationController

{
    CDUnknownBlockType _showViewControllerCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType showViewControllerCompletionBlock;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;

@end
