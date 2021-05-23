/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <UIViewController.h>

@interface AXUIRootViewController : UIViewController

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(_Bool)arg2;

@end
