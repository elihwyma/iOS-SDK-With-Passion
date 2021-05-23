/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@class NSString;

@interface WFContactFieldComponentController : CKStatefulViewComponentController

{
    _Bool _mounted;
}

@property (nonatomic, getter=isMounted) _Bool mounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;

- (void)didMount;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (id)viewControllerContainingContactField:(id)arg1;
- (void)willUnmount;

@end
