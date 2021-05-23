/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class UIView;

@protocol WFDrawerGestureCoordinatorDelegate <Swift>

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *drawerView;
@property (nonatomic, readonly) double minimumDrawerHeight;
@property (nonatomic, readonly) double maximumDrawerHeight;
@property (nonatomic, readonly) double drawerHeight;
@property (nonatomic, readonly) struct CGRect grabberAreaBounds;

- (unsigned short)gestureCoordinatorDidBeginInteraction: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureCoordinator:didContinueInteractionWithDrawerHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureCoordinator:didFinishInteractionWithVelocity:acceleration:animation: /* Error: Ran out of types for this method. */;

@end
