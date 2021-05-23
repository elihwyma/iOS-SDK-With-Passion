/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@class UISegmentedControl, WFEnumerationTextTokenChooser;

@interface WFEnumerationParameterComponentController : CKComponentController

{
    UISegmentedControl *_segmentedControl;
    WFEnumerationTextTokenChooser *_textTokenChooser;
}

- (void)completeEditing;
- (void)loadDynamicEnumerationValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentTokenChooser:(id)arg1;
- (void)didUpdateComponent;
- (void)willUnmount;
- (void)didUnmount;

@end
