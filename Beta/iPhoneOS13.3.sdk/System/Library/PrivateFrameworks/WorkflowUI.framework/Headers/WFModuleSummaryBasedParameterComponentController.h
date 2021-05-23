/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@class NSString, WFModuleSummaryEditor;

@interface WFModuleSummaryBasedParameterComponentController : CKComponentController

{
    WFModuleSummaryEditor *_currentEditor;
}

@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;
- (void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
- (void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(_Bool)arg2 withTextAttachmentToEdit:(id)arg3;

@end
