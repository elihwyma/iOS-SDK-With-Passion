/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/BSEventQueue.h>

@interface FBSceneEventQueue : BSEventQueue

- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;

@end
