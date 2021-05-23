/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupBiometricAndPasscodeController : NSObject

{
    NSString *_flowSkipIdentifier;
    NSString *_passcode;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)viewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)preconditionViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)passcodeViewControllerAllowSkip:(id)arg1;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;
- (id)initWithFlowSkipIdentifier:(id)arg1;
- (id)createViewControllerWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_userDidTapPasscodeCancelButton:(id)arg1;

@end
