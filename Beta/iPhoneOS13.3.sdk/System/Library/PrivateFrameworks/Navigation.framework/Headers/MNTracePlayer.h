/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, MNSessionUpdateManager, MNTrace, MNTracePlayerETAUpdater, MNTracePlayerScheduler, MNTracePlayerTimelineStream, NSData, NSDate, NSHashTable, NSString;

@interface MNTracePlayer : NSObject

{
    MNTrace *_trace;
    double _traceStartTimestamp;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    _Bool _isPlaying;
    _Bool _isPaused;
    double _duration;
    double _speedMultiplier;
    _Bool _forceDirectionsResponsesFromTrace;
    MNTracePlayerTimelineStream *_directionsStream;
    _Bool _shouldPlayETARequests;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}

@property (nonatomic, readonly) MNTrace *trace;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) _Bool isPaused;
@property (nonatomic, readonly) double position;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) int mainTransportType;
@property (nonatomic, readonly) NSDate *currentLocationDate;
@property (nonatomic, readonly) NSData *selectedRouteID;
@property (nonatomic, readonly) unsigned long long selectedRouteIndex;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) _Bool shouldPlayETARequests;
@property (nonatomic, readonly) MNSessionUpdateManager *sessionUpdater;
@property (nonatomic) _Bool forceDirectionsResponsesFromTrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double currentTime;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (id)initWithPath:(id)arg1;
- (void)start;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (_Bool)requestDirectionsNearTimestamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;
- (id)initWithTrace:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id *)arg2;
- (void)_createTimelineStreams;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (_Bool)requestDirectionsWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)skipByTimeInterval:(double)arg1;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;

@end
