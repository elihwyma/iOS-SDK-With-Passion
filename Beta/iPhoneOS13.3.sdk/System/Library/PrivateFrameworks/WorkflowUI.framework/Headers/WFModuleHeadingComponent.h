/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleModel;

@protocol WFComponentNavigationContext;

@interface WFModuleHeadingComponent : CKCompositeComponent

{
    WFModuleModel *_model;
    id <WFComponentNavigationContext> _navigationContext;
}

@property (nonatomic, readonly) WFModuleModel *model;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;

- (void)titleComponentTapped:(id)arg1;
- (void)settingsButtonTapped;
- (void)removeButtonTapped:(id)arg1;

@end
