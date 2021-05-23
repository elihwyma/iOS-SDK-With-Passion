/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSDate, NSMutableDictionary, NSObject, REUpNextTimer;

@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler : RESingleton

{
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    _Bool _alreadyScheduled;
}

- (void)dealloc;
- (id)_init;
- (void)_updateBlocks;
- (void)_rescheduleTimer;
- (void)_queue_updateBlocks;
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unscheduleEventWithIdentifier:(id)arg1;

@end
