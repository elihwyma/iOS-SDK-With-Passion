/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFAppendToNoteAction : WFHandleSystemIntentAction

- (_Bool)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
