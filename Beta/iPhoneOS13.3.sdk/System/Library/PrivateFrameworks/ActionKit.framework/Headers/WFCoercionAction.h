/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFCoercionAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)outputContentClasses;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (Class)coercionItemClass;

@end
