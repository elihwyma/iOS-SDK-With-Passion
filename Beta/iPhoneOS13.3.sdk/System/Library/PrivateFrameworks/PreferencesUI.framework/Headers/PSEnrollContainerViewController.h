/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <UIKit/UIViewController.h>

@class BiometricKitUIEnrollViewController;

__attribute__((visibility("hidden")))
@interface PSEnrollContainerViewController : UIViewController

{
    BiometricKitUIEnrollViewController *_enrollController;
}

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)teardown;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (struct CGRect)frameForEnrollmentController;

@end
