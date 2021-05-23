/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSEventQueue, NSString;

@interface BSEventQueueLock : NSObject

{
    _Bool _relinquished;
    NSString *_reason;
    BSEventQueue *_eventQueue;
}

@property (retain, nonatomic) BSEventQueue *eventQueue;
@property (copy, nonatomic) NSString *reason;

- (void)dealloc;
- (id)description;
- (void)relinquish;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;

@end
