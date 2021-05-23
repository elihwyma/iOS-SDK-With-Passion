/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFComponentDragController.h>

@class NSArray, WFAction, WFModuleModel;

@interface WFModuleDragController : WFComponentDragController

{
    NSArray *_actions;
    WFAction *_sourceAction;
}

@property (retain, nonatomic) WFModuleModel *model;
@property (nonatomic, readonly) WFAction *sourceAction;
@property (copy, nonatomic) NSArray *actions;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void)reset;
- (void)loadView;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (long long)sizeRangeFlexibility;
- (void)updateCurrentViewControllers;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;

@end
