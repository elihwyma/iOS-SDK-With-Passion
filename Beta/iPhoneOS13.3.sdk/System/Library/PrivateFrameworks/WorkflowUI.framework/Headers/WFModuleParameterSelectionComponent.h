/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleModel;

@interface WFModuleParameterSelectionComponent : CKCompositeComponent

{
    WFModuleModel *_model;
}

+ (id)newWithModel:(id)arg1;

- (void)parameterSelected:(id)arg1 withIdentifier:(id)arg2;

@end
