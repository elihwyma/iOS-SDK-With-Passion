/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFDragFeedbackGenerator.h>

@class NSDate;

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator

{
    _Bool _initializedReorderSound;
    unsigned int _reorderSound;
    NSDate *_lastDragStartDate;
}

@property (retain, nonatomic) NSDate *lastDragStartDate;
@property (nonatomic) _Bool initializedReorderSound;
@property (nonatomic) unsigned int reorderSound;

- (void)dealloc;
- (void)draggingStarted;
- (void)draggingItemSnapped;
- (void)draggingInsertedActions:(id)arg1 intoWorkflow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)draggingRemovedActions:(id)arg1;
- (void)draggingMovedActions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 inWorkflow:(id)arg4;
- (void)draggingActionsEnteredDeletionZone:(id)arg1;
- (void)playReorderSound;

@end
