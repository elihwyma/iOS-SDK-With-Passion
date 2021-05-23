/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKMemoizingComponent.h>

@class NSString, WFModuleModel;

@interface WFModuleComponent : CKMemoizingComponent

{
    WFModuleModel *_model;
}

@property (nonatomic, readonly) WFModuleModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;

- (void)actionNameDidChange:(id)arg1;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)reflowComponentSynchronously;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (void)reflowComponentAsynchronously;

@end
