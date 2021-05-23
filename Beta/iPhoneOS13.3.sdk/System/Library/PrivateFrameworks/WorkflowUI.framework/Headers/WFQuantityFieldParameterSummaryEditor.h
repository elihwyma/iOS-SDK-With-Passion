/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFNumberFieldParameterSummaryEditor.h>

@class WFAlert;

@interface WFQuantityFieldParameterSummaryEditor : WFNumberFieldParameterSummaryEditor

{
    WFAlert *_unitAlert;
}

@property (retain, nonatomic) WFAlert *unitAlert;

- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1;
- (id)stateForEnteredText:(id)arg1;
- (id)stateForVariable:(id)arg1;

@end
