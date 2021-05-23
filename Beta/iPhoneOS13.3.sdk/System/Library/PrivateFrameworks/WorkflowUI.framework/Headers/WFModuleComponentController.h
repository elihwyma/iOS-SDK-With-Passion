/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@protocol NSObject;

@interface WFModuleComponentController : CKComponentController

{
    id <NSObject> _inputVariableState;
}

- (void)didMount;
- (void)didUpdateComponent;
- (void)loadIconIfNecessary;
- (void)willUpdateComponent;

@end
