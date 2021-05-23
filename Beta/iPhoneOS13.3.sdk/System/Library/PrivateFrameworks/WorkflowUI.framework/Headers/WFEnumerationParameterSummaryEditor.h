/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class WFEnumerationTextTokenChooser;

@interface WFEnumerationParameterSummaryEditor : WFModuleSummaryEditor

{
    WFEnumerationTextTokenChooser *_chooser;
}

@property (retain, nonatomic) WFEnumerationTextTokenChooser *chooser;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)completeEditing;
- (void)loadDynamicEnumerationValuesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
