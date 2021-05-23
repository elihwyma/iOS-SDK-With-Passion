/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class NSString, PKPaymentSetupAssistantRegistrationViewController;

@protocol BFFFinishSetupFlowHosting;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupPaymentController : NSObject

{
    NSObject<BFFFinishSetupFlowHosting> *_host;
    PKPaymentSetupAssistantRegistrationViewController *_registrationController;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)registrationViewControllerOutstandingRequirements;
+ (_Bool)hasPrimaryiCloudAccount;
+ (id)finishSetupPaymentControllerWithHost:(id)arg1;

- (void)_completeWithResult:(unsigned long long)arg1;
- (id)initWithHost:(id)arg1;
- (_Bool)controllerNeedsToRun;
- (void)_userDidTapCancelButton:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (id)viewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)prerequisiteFlowIdentifier;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canCompleteExtendedInitializationQuickly;

@end
