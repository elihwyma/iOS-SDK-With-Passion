/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIViewController.h>

@class BiometricKitIdentity, BiometricKitUIEnrollViewController, NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupTouchIDViewController : UIViewController

{
    BiometricKitUIEnrollViewController *_enrollController;
    BiometricKitIdentity *_identity;
    UIBarButtonItem *_previousLeftNavigationItem;
    UIBarButtonItem *_cancelLeftNavigationItem;
    _Bool _enrollComplete;
    NSString *_passcode;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didResignActive:(id)arg1;
- (void)_userDidTapCancelButton:(id)arg1;
- (void)beginEnrollment;
- (void)deleteIdentity;
- (void)endEnrollment;
- (struct CGRect)frameForEnrollmentController;
- (void)resetLeftNavigationItem;
- (void)_didCompleteMesaControllerWithResult:(unsigned long long)arg1;
- (id)_cancelLeftNavigationItem;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (void)restartEnrollment;

@end
