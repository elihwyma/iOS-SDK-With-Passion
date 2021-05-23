/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@class NSString;

@interface WFTagFieldComponentController : CKStatefulViewComponentController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;

- (id)viewControllerContainingTagField:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;

@end
