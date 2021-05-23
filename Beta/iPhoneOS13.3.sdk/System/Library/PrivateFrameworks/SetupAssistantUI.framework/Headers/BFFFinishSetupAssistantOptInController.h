/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class NSString, VTUIEnrollTrainingViewController;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupAssistantOptInController : NSObject

{
    BFFFinishSetupAssistantOptInController *_selfReference;
    VTUIEnrollTrainingViewController *_enrollmentController;
    _Bool _willOfferVoiceTrigger;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)finishSetupAssistantOptInController;

- (id)init;
- (void)continueSetup;
- (id)viewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (void)skipSetup;
- (void)showLearnMore;

@end
