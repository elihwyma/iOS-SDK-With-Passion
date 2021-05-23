/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)populatesInputFromInputParameter;
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)itemsFromDictionaryItem:(id)arg1;
- (id)contentItemsFromSelectedItem:(id)arg1;
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2;

@end
