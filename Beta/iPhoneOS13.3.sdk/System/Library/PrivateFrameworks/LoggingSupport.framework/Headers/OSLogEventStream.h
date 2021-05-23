/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSLogEventStreamBase.h>

@class NSObject, NSPredicate, OSLogEventSource, _OSLogCatalogFilter, _OSLogIndex;

@protocol OS_dispatch_queue;

@interface OSLogEventStream : OSLogEventStreamBase

{
    _OSLogCatalogFilter *_catalogFilter;
    _OSLogIndex *_index;
    OSLogEventSource *_source;
    struct _os_timesync_db_s *_tsdb;
}

@property (retain, nonatomic) _OSLogIndex *index;
@property (nonatomic) struct _os_timesync_db_s *tsdb;
@property (retain, nonatomic) _OSLogCatalogFilter *catalogFilter;
@property (nonatomic, readonly) OSLogEventSource *source;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;

- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (void)activateStreamFromDate:(id)arg1;
- (void)_foreachIndexFile:(CDUnknownBlockType)arg1;
- (id)_initWithSource:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1 skipNonSignpostFiles:(_Bool)arg2;
- (void)_activateStreamInRange:(struct os_timesync_range_s *)arg1;
- (void)_activateStreamFromTimeIntervalSinceLastBoot:(double)arg1;
- (void)activateStreamFromLastBoot;
- (void)activateStreamFromPosition:(id)arg1;

@end
