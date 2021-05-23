/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFSendMessageAction : WFHandleSystemIntentAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)skipsProcessingHiddenParameters;
- (_Bool)opensInApp;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (id)minimumSupportedClientVersion;
- (void)getRecipients:(CDUnknownBlockType)arg1;
- (void)getContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
