/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, UIView;

@protocol WFModuleDelegate;

@protocol WFDragCoordinator <Swift>

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) NSArray *participatingViewControllers;
@property (nonatomic, readonly) NSArray *scrollViewsAffectingDrag;
@property (nonatomic, readonly) id <WFModuleDelegate> moduleDelegate;

@end
