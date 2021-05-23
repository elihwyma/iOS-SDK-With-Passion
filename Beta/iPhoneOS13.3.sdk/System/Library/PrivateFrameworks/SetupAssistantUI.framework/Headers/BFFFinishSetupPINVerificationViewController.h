/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Preferences/DevicePINSetupController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController

{
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)stringsBundle;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;

@end
