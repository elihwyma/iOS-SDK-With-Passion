/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)generatedAccessResource;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (_Bool)populatesInputFromInputParameter;
- (void)getRecipientsFromParameterKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateContentForIntents:(CDUnknownBlockType)arg1;
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
