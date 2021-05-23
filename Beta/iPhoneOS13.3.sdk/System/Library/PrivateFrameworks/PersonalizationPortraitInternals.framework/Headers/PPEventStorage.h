/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@protocol OS_dispatch_queue;

@interface PPEventStorage : NSObject

{
    _PASLock *_lock;
    struct atomic_flag _pendingReset;
    NSObject<OS_dispatch_queue> *_resetQueue;
}

+ (id)defaultStorage;

- (id)init;
- (id)_init;
- (void)clearCaches;
- (void)_loadCalendars;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsInRange:(struct _NSRange)arg1;
- (void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)resolveEventFromEKChange:(id)arg1;
- (void)setCalendarVisibilityChangeHandler:(CDUnknownBlockType)arg1;
- (_Bool)eventKitChangeIsEvent:(id)arg1;
- (_Bool)shouldIngestEvent:(id)arg1;
- (void)resetAfterQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_predicateForRange:(struct _NSRange)arg1;
- (_Bool)_isAllDayOrMultiDayEvent:(id)arg1 guardedData:(id)arg2;

@end
