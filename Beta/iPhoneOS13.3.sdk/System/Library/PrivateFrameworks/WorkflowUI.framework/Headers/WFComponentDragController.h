/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFDragController.h>

@class CKComponentHostingView, NSArray, NSString, WFAction;

@protocol NSObject;

@interface WFComponentDragController : WFDragController

{
    id <NSObject> _model;
    CKComponentHostingView *_hostingView;
}

@property (weak, nonatomic, readonly) CKComponentHostingView *hostingView;
@property (nonatomic, readonly) long long sizeRangeFlexibility;
@property (copy, nonatomic, readonly) WFAction *action;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (retain, nonatomic) id <NSObject> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void)loadView;
- (void)updateView;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)animateFromModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3;
- (void)animateToModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 withWidth:(double)arg4 completion:(CDUnknownBlockType)arg5;

@end
