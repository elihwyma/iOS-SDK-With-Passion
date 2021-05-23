/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFFinishSetupBiometricAndPasscodeController.h>

@class BFFFinishSetupFaceIDViewController;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupFaceIDController : BFFFinishSetupBiometricAndPasscodeController

{
    BFFFinishSetupFaceIDViewController *_viewController;
}

+ (id)finishSetupFaceIDController;

- (id)init;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)createViewControllerWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
