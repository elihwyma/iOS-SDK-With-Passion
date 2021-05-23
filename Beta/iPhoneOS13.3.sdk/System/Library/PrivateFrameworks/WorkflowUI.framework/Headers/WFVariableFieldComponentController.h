/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@interface WFVariableFieldComponentController : CKStatefulViewComponentController

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;

- (void)textDidChange;
- (_Bool)variablesDisabled;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;

@end
