/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class BFFPasscodeViewController;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupPasscodeController : NSObject

{
    BFFFinishSetupPasscodeController *_selfReference;
    BFFPasscodeViewController *_passcodeViewController;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)finishSetupPasscodeController;

- (void)_userDidTapCancelButton:(id)arg1;
- (id)viewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2;

@end
