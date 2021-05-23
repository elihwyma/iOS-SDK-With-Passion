/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

{
    long long _activeDragSessions;
    _UIDragSnappingFeedbackGenerator *_feedbackGenerator;
}

@property (nonatomic) long long activeDragSessions;
@property (weak, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (id)initWithCollectionView:(id)arg1;
- (void)objectSnapped;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(CDUnknownBlockType)arg2;
- (void)draggedObjectLifted;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)draggedObjectLanded;
- (void)dropTargetUpdated;
- (void)draggingStarted;
- (void)draggingPositionUpdated;
- (void)draggingItemSnapped;
- (void)draggingCancelled;
- (void)draggingItemDropped;

@end
