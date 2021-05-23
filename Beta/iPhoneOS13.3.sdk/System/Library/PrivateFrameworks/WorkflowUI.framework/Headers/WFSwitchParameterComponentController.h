/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@class UISwitch;

@interface WFSwitchParameterComponentController : CKComponentController

{
    UISwitch *_toggleSwitch;
}

- (void)willUnmount;
- (void)didUnmount;

@end
