/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class INCExtensionConnection, INIntentDescription, NSArray, NSString, UIViewController, WFIntentExecutor;

@protocol WFIntentViewController;

@interface WFHandleIntentAction : WFAction

{
    NSString *_inputParameterName;
    WFIntentExecutor *_executor;
    UIViewController<WFIntentViewController> *_intentViewController;
    CDUnknownBlockType _viewControllerCompletionHandler;
    INCExtensionConnection *_connection;
}

@property (retain, nonatomic) WFIntentExecutor *executor;
@property (retain, nonatomic) UIViewController<WFIntentViewController> *intentViewController;
@property (copy, nonatomic) CDUnknownBlockType viewControllerCompletionHandler;
@property (retain, nonatomic) INCExtensionConnection *connection;
@property (nonatomic, readonly) INIntentDescription *intentDescription;
@property (nonatomic, readonly) NSArray *slots;
@property (nonatomic, readonly) NSString *inputParameterName;
@property (nonatomic, readonly) long long intentCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appIdentifierForIntent:(id)arg1;
+ (id)bundleIdentifierForIntent:(id)arg1;

- (void)cancel;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)generateShortcutRepresentation:(CDUnknownBlockType)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)intentViewControllerWasTapped:(id)arg1;
- (void)intentViewControllerDidConfirmIntent:(id)arg1;
- (void)intentViewControllerDidDismissPlatter:(id)arg1;
- (void)intentExecutorRequestsContinueInApp:(id)arg1;
- (void)intentExecutor:(id)arg1 showConfirmationForInteraction:(id)arg2 confirmationRequired:(_Bool)arg3 authenticationRequired:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)finishRunningWithError:(id)arg1;
- (_Bool)skipsProcessingHiddenParameters;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (_Bool)requiresShowsWhenRun;
- (_Bool)showsWhenRun;
- (_Bool)opensInApp;
- (unsigned long long)allowsInteractiveSlotResolution;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (void)generatePopulatedIntentFromInput:(id)arg1 processedParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createResourceManager;
- (id)generatedAccessResource;
- (id)parameterForSlot:(id)arg1;
- (void)accessBundleContentWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isWorkflowInDatabase;
- (_Bool)shouldDonateIntent:(id)arg1;
- (void)startExecutingIntent:(id)arg1;
- (id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2;
- (void)populateIntent:(id)arg1 withInput:(id)arg2 processedParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2;
- (void)finishRunningByContinuingInApp;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showInteractionIfNeeded:(id)arg1 inUserInterface:(id)arg2 requiringConfirmation:(_Bool)arg3 requiringAuthentication:(_Bool)arg4 executionStage:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)createIntentViewControllerWithInteraction:(id)arg1 requiresConfirmation:(_Bool)arg2;
- (void)showInteraction:(id)arg1 fromViewController:(id)arg2 sourceView:(id)arg3 requiringConfirmation:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dismissViewControllerIfNecessary:(CDUnknownBlockType)arg1;
- (id)unknownErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 userInfo:(id)arg3;
- (void)handleResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (void)showAskForValueAndRetryForSlot:(id)arg1 onIntent:(id)arg2;
- (void)localizedDisambiguationPromptForAttribute:(id)arg1 intent:(id)arg2 disambiguationItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showDisambiguationAndRetryForSlot:(id)arg1 items:(id)arg2 onIntent:(id)arg3;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorAttributedToApp:(id)arg1;
- (id)errorThatLaunchesApp:(id)arg1;
- (void)getErrorFromExtensionError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleExecutorError:(id)arg1;

@end
