/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@interface WFNumberFieldComponentController : CKStatefulViewComponentController

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;

- (void)valueChanged;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)valueChangedThrottled;

@end
