/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class NSArray, NSString, NSTextAttachment, WFVariableInputCoordinator, WFVariableStringParameterState;

@interface WFTextInputParameterSummaryEditor : WFModuleSummaryEditor

{
    _Bool _hasChangedText;
    _Bool _isPickingMagicVariable;
    WFVariableStringParameterState *_stagedState;
    WFVariableInputCoordinator *_variableCoordinator;
    NSTextAttachment *_textAttachmentToEdit;
}

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) NSTextAttachment *textAttachmentToEdit;
@property (nonatomic) _Bool isPickingMagicVariable;
@property (nonatomic, readonly) _Bool hasChangedText;
@property (nonatomic, readonly) WFVariableStringParameterState *stagedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *currentVariables;

- (struct _NSRange)selectedRange;
- (void)setVariableProvider:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryDidFinish;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)setVariableUIDelegate:(id)arg1;
- (void)textEntryDidCutWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)textEntryDidCopyWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)textEntryDidPasteWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)sourceViewTintColorDidChange;
- (_Bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (void)insertVariable:(id)arg1;
- (_Bool)doneButtonNeededForInputTraits:(id)arg1 allowMultipleLines:(_Bool)arg2;
- (void)copyVariableString;
- (void)configureVariableAttachmentForInsertion:(id)arg1;

@end
