/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, WFMultipleValueParameterState, WFParameter, WFTextTokenChooser, WFVariableAttachment, WFVariableConfigurationResponder;

@protocol WFModuleSummaryEditorDelegate, WFModuleSummarySupporting, WFParameterState, WFSlotTemplateTextEntry, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryEditor : NSObject

{
    _Bool _processing;
    _Bool _variableResponderSuspended;
    _Bool _returnToKeyboardOnComplete;
    WFParameter<WFModuleSummarySupporting> *_parameter;
    id <WFParameterState> _initialState;
    WFMultipleValueParameterState *_initialArrayState;
    unsigned long long _arrayIndex;
    id <WFModuleSummaryEditorDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    UIView<WFSlotTemplateTextEntry> *_textEntry;
    WFTextTokenChooser *_variableChooser;
    WFVariableAttachment *_editingVariableAttachment;
    WFVariableConfigurationResponder *_variableResponder;
}

@property (retain, nonatomic) WFTextTokenChooser *variableChooser;
@property (retain, nonatomic) WFVariableAttachment *editingVariableAttachment;
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (nonatomic) _Bool variableResponderSuspended;
@property (nonatomic) _Bool returnToKeyboardOnComplete;
@property (nonatomic, readonly) WFParameter<WFModuleSummarySupporting> *parameter;
@property (nonatomic, readonly) id <WFParameterState> initialState;
@property (nonatomic, readonly) WFMultipleValueParameterState *initialArrayState;
@property (nonatomic, readonly) unsigned long long arrayIndex;
@property (nonatomic, readonly, getter=isProcessing) _Bool processing;
@property (weak, nonatomic) id <WFModuleSummaryEditorDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic, readonly) UIView<WFSlotTemplateTextEntry> *textEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;
+ (_Bool)supportsEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2;

- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryDidFinish;
- (void)variableResponderDidEndEditing:(id)arg1;
- (void)variableResponderDidReturnToKeyboard:(id)arg1;
- (_Bool)variableResponderHasText:(id)arg1;
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
- (void)variableResponderDidRevealAction:(id)arg1;
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(unsigned long long)arg4 processing:(_Bool)arg5;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)stageState:(id)arg1;
- (void)commitState:(id)arg1;
- (void)commitMultipleState:(id)arg1;
- (void)completeEditing;
- (void)completeEditingWithTextAttachmentToEdit:(id)arg1;
- (void)requestTextEntry;
- (_Bool)textEntryShouldChangeText:(id)arg1;
- (void)textEntryDidCutWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)textEntryDidCopyWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)textEntryDidPasteWithOriginalBlock:(CDUnknownBlockType)arg1;
- (void)sourceViewTintColorDidChange;
- (void)beginVariableMenuForSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (_Bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1;
- (void)beginEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 sourceView:(id)arg3;
- (_Bool)canTypeAlongsideVariables;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (void)_beginEditingVariableAttachment:(id)arg1 withParentView:(id)arg2;

@end
