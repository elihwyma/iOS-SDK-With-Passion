/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@class NSString;

@interface WFWorkflowPickerParameterComponentController : CKComponentController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;
- (void)workflowPickerViewControllerDidCancel:(id)arg1;
- (void)workflowPickerViewController:(id)arg1 didSelectWorkflowWithName:(id)arg2;
- (void)workflowPickerViewController:(id)arg1 didSelectVariable:(id)arg2;

@end
