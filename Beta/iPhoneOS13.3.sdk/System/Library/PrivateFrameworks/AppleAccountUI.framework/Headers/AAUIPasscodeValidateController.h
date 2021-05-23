/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUICDPHelper, NSString, PSSetupController;

@interface AAUIPasscodeValidateController : NSObject

{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    CDUnknownBlockType __passcodeValidationCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType _passcodeValidationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(_Bool)arg2;
+ (id)stingrayControllerWithPresenter:(id)arg1;

- (void)dealloc;
- (id)_presentingViewController;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (void)validateStingrayPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (void)_setupNavController;
- (id)_specifierForMode:(int)arg1;
- (void)dismissFlowWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
