/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue

+ (id)sharedInstance;

- (_Bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;

@end
