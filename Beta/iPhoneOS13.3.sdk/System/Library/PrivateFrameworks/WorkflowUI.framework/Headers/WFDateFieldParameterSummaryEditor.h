/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTextInputParameterSummaryEditor.h>

@class NSDateFormatter, NSString, WFTextEditingHintView;

@interface WFDateFieldParameterSummaryEditor : WFTextInputParameterSummaryEditor

{
    WFTextEditingHintView *_hintView;
    NSDateFormatter *_hintDateFormatter;
}

@property (weak, nonatomic) WFTextEditingHintView *hintView;
@property (retain, nonatomic) NSDateFormatter *hintDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)parameterAttributesDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryDidFinish;
- (void)updateHintView;
- (id)hintTextForVariableString:(id)arg1;

@end
