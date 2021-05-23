/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFCreateNoteAction : WFHandleSystemIntentAction

+ (void)getNoteContentFromInput:(id)arg1 includingImages:(_Bool)arg2 actionName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)localizedKeyParameterDisplayName;
- (id)inputContentClasses;
- (void)selectedAppDidChange;
- (_Bool)inputPassthrough;
- (id)groupParameter;

@end
