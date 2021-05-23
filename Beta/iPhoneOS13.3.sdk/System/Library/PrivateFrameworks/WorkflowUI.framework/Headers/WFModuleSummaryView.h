/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString, UIColor, UIFont, WFModuleSummaryEditor, WFModuleSummaryTemplateBuilder, WFSlotIdentifier, WFSlotTemplateView, WFVariable;

@protocol WFModuleSummaryViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryView : UIView

{
    _Bool _processing;
    NSString *_summaryFormatString;
    NSSet *_parameters;
    NSSet *_editableParameters;
    NSDictionary *_parameterStates;
    CDUnknownBlockType _updateBlock;
    id <WFModuleSummaryViewDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    WFSlotTemplateView *_templateView;
    NSMutableDictionary *_mutableStagedParameterStates;
    WFModuleSummaryEditor *_currentEditor;
    WFSlotIdentifier *_currentlyEditingSlotIdentifier;
    WFModuleSummaryTemplateBuilder *_templateBuilder;
    WFVariable *_variableBeingEdited;
    NSHashTable *_variablesBeingObserved;
}

@property (weak, nonatomic) WFSlotTemplateView *templateView;
@property (retain, nonatomic) NSMutableDictionary *mutableStagedParameterStates;
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (retain, nonatomic) WFSlotIdentifier *currentlyEditingSlotIdentifier;
@property (retain, nonatomic) WFModuleSummaryTemplateBuilder *templateBuilder;
@property (retain, nonatomic) WFVariable *variableBeingEdited;
@property (retain, nonatomic) NSHashTable *variablesBeingObserved;
@property (copy, nonatomic, readonly) NSString *summaryFormatString;
@property (copy, nonatomic, readonly) NSSet *parameters;
@property (copy, nonatomic, readonly) NSSet *editableParameters;
@property (copy, nonatomic, readonly) NSDictionary *parameterStates;
@property (copy, nonatomic, readonly) NSDictionary *stagedParameterStates;
@property (retain, nonatomic) UIFont *summaryFont;
@property (retain, nonatomic) UIFont *summaryUnpopulatedFont;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) long long textAlignment;
@property (nonatomic) _Bool extendSlotBackgroundOffEdges;
@property (nonatomic, readonly) UIColor *disabledSlotTitleColor;
@property (nonatomic, readonly) UIColor *disabledSlotBackgroundColor;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (nonatomic) _Bool processing;
@property (weak, nonatomic) id <WFModuleSummaryViewDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)enumerateVariableAttachmentsInContents:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)paragraphStyleWithAlignment:(long long)arg1;
+ (id)parameterStatesByApplyingStaging:(id)arg1 toOriginal:(id)arg2;
+ (double)heightForWidth:(double)arg1 withSummaryFormatString:(id)arg2 parameters:(id)arg3 editableParameters:(id)arg4 parameterStates:(id)arg5 stagedParameterStates:(id)arg6 horizontalPadding:(double)arg7 font:(id)arg8 unpopulatedFont:(id)arg9 textAlignment:(long long)arg10;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (id)parameterForKey:(id)arg1;
- (void)variableDidChange:(id)arg1;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(_Bool)arg3;
- (void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
- (void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(_Bool)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)slotTemplateView:(id)arg1 didSelectSlotWithIdentifier:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)slotTemplateView:(id)arg1 didDeselectSlotWithIdentifier:(id)arg2;
- (_Bool)slotTemplateView:(id)arg1 shouldLongPressSlotWithIdentifier:(id)arg2;
- (void)slotTemplateView:(id)arg1 didLongPressSlotWithIdentifier:(id)arg2 sourceRect:(struct CGRect)arg3 textAttachmentToSelect:(id)arg4;
- (_Bool)slotTemplateView:(id)arg1 shouldTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3;
- (void)slotTemplateView:(id)arg1 didTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3;
- (void)slotTemplateView:(id)arg1 willBeginTypingInSlotWithIdentifier:(id)arg2 usingTextEntry:(id)arg3 allowMultipleLines:(_Bool *)arg4;
- (_Bool)slotTemplateView:(id)arg1 shouldChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3;
- (void)slotTemplateView:(id)arg1 didChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3;
- (void)slotTemplateView:(id)arg1 typingDidCutWithOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateView:(id)arg1 typingDidCopyWithOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateView:(id)arg1 typingDidPasteWithOriginalBlock:(CDUnknownBlockType)arg2;
- (void)slotTemplateView:(id)arg1 didEndTypingInSlotWithIdentifier:(id)arg2;
- (void)slotTemplateView:(id)arg1 deletePressedOnUnpopulatedSlotWithIdentifier:(id)arg2;
- (void)slotTemplateViewDidInvalidateSize:(id)arg1;
- (void)updateTemplateContentsAnimated:(_Bool)arg1;
- (void)setSummaryFormatString:(id)arg1 withParameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4;
- (id)currentParameterStateForParameterKey:(id)arg1;
- (Class)editorClassForParameter:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceRect:(struct CGRect)arg2 fromLongPressGesture:(_Bool)arg3 fromTextAttachment:(id)arg4;
- (id)addElementToArrayForParameterKey:(id)arg1;
- (void)removeElementFromArrayAtIndex:(unsigned long long)arg1 forParameterKey:(id)arg2;
- (void)destroyCurrentEditor;
- (void)startEditingForParameterKey:(id)arg1;
- (id)transformParameterStateForSerialization:(id)arg1 inEditor:(id)arg2;
- (void)updateVariableObservationsWithContents:(id)arg1;
- (void)updateVariableAttachmentAppearanceInContents:(id)arg1;

@end
