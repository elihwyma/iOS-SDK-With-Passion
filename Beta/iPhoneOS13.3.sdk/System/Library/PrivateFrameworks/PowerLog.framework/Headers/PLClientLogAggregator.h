/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface PLClientLogAggregator : NSObject

{
    unsigned char _numAggregates;
    unsigned char _numAggregations;
    NSMutableDictionary *_aggregatesCache;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
}

@property (readonly) NSMutableDictionary *aggregatesCache;
@property unsigned char numAggregates;
@property unsigned char numAggregations;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (retain) NSObject<OS_dispatch_source> *flushTimer;

+ (id)sharedInstance;

- (id)init;
- (void)_flushToPowerLog;
- (_Bool)_aggregateForClientID:(id)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;
- (_Bool)_isEventInputValid:(id)arg1 configuration:(id)arg2;
- (id)_eventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4;
- (_Bool)_setEventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4 value:(id)arg5;
- (void)_scheduleFlushTimer;
- (void)cleanCache;
- (_Bool)aggregateForClientID_async:(short)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;

@end
