/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class WFStringParameterState;

@interface WFVariableFieldParameterSummaryEditor : WFModuleSummaryEditor

{
    _Bool _hasChangedText;
    WFStringParameterState *_stagedState;
}

@property (retain, nonatomic) WFStringParameterState *stagedState;
@property (nonatomic) _Bool hasChangedText;

- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryDidFinish;

@end
