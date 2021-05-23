/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFExecutionEnvironment, HMCameraProfile, NSDate, NSError, NSMapTable, NSString;

@protocol NACancelable;

@interface HFCameraManager : NSObject

{
    _Bool _isRegisteredForEvents;
    NSError *_cachedStreamError;
    HMCameraProfile *_cameraProfile;
    NSMapTable *_snapshotRequesters;
    NSMapTable *_streamRequesters;
    id <NACancelable> _nextSnapshotEvent;
    NSDate *_snapshotErrorDate;
    unsigned long long _snapshotErrorCount;
    HFExecutionEnvironment *_executionEnvironment;
}

@property (weak, nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) NSMapTable *snapshotRequesters;
@property (nonatomic, readonly) NSMapTable *streamRequesters;
@property (nonatomic) _Bool isRegisteredForEvents;
@property (retain, nonatomic) id <NACancelable> nextSnapshotEvent;
@property (retain, nonatomic) NSDate *snapshotErrorDate;
@property (nonatomic) unsigned long long snapshotErrorCount;
@property (retain, nonatomic) NSError *cachedStreamError;
@property (retain, nonatomic) HFExecutionEnvironment *executionEnvironment;
@property (nonatomic, readonly, getter=arePeriodicSnapshotsEnabled) _Bool periodicSnapshotsEnabled;
@property (nonatomic, readonly, getter=isContinuousStreamingEnabled) _Bool continuousStreamingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (id)initWithCameraProfile:(id)arg1;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)executionEnvironmentWillResignActive:(id)arg1;
- (void)executionEnvironmentDidBecomeVisible:(id)arg1;
- (void)executionEnvironmentDidBecomeOccluded:(id)arg1;
- (void)endPeriodicSnapshotsWithRequester:(id)arg1;
- (void)_beginPeriodicSnapshots;
- (void)_updateEventRegistration;
- (void)_endPeriodicSnapshots;
- (void)endContinuousStreamingWithRequester:(id)arg1;
- (void)_beginContinuousStreaming;
- (void)_endContinuousStreaming;
- (void)_scheduleNextSnapshotEventWithPreviousError:(id)arg1;
- (void)_cancelNextSnapshotEvent;
- (double)_snapshotTimeInterval;
- (_Bool)_hasSnapshotRequesters;
- (id)_nextSnapshotDate;
- (void)_startStreaming;
- (void)_stopStreaming;
- (_Bool)_hasStreamRequesters;
- (void)_dispatchStreamStateUpdate;
- (void)beginPeriodicSnapshotsWithRequester:(id)arg1;
- (void)beginContinuousStreamingWithRequester:(id)arg1;

@end
