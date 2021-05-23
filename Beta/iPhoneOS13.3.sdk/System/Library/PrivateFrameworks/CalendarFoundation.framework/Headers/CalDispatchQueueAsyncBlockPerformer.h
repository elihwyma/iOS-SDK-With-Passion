/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)arg1;
- (id)performAsync:(CDUnknownBlockType)arg1;
- (id)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;

@end
