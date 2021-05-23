/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIResponder.h>

@protocol WFDragCoordinator;

@interface UIResponder (WFDragCoordinator)

@property (nonatomic, readonly) id <WFDragCoordinator> wf_dragCoordinator;

- (void)wf_handleBlockKeyCommand:(id)arg1;

@end
