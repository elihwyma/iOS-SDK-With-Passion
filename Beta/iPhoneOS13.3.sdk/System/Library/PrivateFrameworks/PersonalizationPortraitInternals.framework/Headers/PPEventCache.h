/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPEventStorage, _PASLock;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventCache : NSObject

{
    PPEventStorage *_storage;
    _PASLock *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

- (void)removeAllObjects;
- (void)_handleMemoryPressureStatus;
- (id)initWithEventStorage:(id)arg1;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;
- (id)objectForRange:(struct _NSRange)arg1;
- (id)evictEventWithIdentifier:(id)arg1;
- (id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(_Bool *)arg2;
- (void)_refreshCachedEvent:(id)arg1;
- (void)evictAllEventsNotInRange:(struct _NSRange)arg1;
- (void)evictAllEventsNotInRanges:(id)arg1;
- (void)setEventHighlight:(id)arg1;
- (id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2;

@end
