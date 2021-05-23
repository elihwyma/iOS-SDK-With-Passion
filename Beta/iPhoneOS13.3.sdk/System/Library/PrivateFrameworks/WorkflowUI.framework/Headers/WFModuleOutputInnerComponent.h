/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleOutputModel;

@interface WFModuleOutputInnerComponent : CKCompositeComponent

{
    WFModuleOutputModel *_model;
}

@property (nonatomic, readonly) WFModuleOutputModel *model;

+ (id)newWithModel:(id)arg1;

- (void)buttonTapped;

@end
