/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFImportToLightroomAction : WFHandleCustomIntentAction

- (void)initializeParameters;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (_Bool)populatesInputFromInputParameter;

@end
