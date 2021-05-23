/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class NSString, WFVariableInputCoordinator;

@protocol WFParameterState;

@interface WFNumberFieldParameterSummaryEditor : WFModuleSummaryEditor

{
    _Bool _hasChangedText;
    _Bool _isPickingMagicVariable;
    WFVariableInputCoordinator *_variableCoordinator;
    id <WFParameterState> _stagedState;
}

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) id <WFParameterState> stagedState;
@property (nonatomic) _Bool hasChangedText;
@property (nonatomic) _Bool isPickingMagicVariable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setVariableProvider:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryDidFinish;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)setVariableUIDelegate:(id)arg1;
- (_Bool)textEntryShouldChangeText:(id)arg1;
- (void)sourceViewTintColorDidChange;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (id)stateForEnteredText:(id)arg1;
- (id)stateForVariable:(id)arg1;
- (void)negateText;

@end
