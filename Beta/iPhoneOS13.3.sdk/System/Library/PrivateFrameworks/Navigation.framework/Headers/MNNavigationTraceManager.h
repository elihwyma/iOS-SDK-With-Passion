/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTraceEventRecorder, MNTracePlayer, MNTraceRecorder, NSBundle, NSString;

@protocol GEOMotionContextProviderDelegate, MNLocationProviderDelegate, MNNavigationTraceManagerDelegate;

@interface MNNavigationTraceManager : NSObject

{
    MNTracePlayer *_tracePlayer;
    MNTraceRecorder *_traceRecorder;
    MNTraceEventRecorder *_traceEventRecorder;
    int _navigationType;
    id <MNNavigationTraceManagerDelegate> _traceManagerDelegate;
    id <MNLocationProviderDelegate> _locationProviderDelegate;
    id <GEOMotionContextProviderDelegate> _motionContextProviderDelegate;
}

@property (weak, nonatomic) id <MNNavigationTraceManagerDelegate> traceManagerDelegate;
@property (nonatomic, readonly) MNTracePlayer *tracePlayer;
@property (nonatomic, readonly) MNTraceRecorder *traceRecorder;
@property (nonatomic, readonly) MNTraceEventRecorder *traceEventRecorder;
@property (nonatomic) int navigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) double distanceFilter;
@property (nonatomic) _Bool matchInfoEnabled;
@property (nonatomic) int headingOrientation;
@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic) long long activityType;
@property (nonatomic, readonly) _Bool usesCLMapCorrection;
@property (nonatomic, readonly) _Bool isSimulation;
@property (nonatomic, readonly) _Bool isTracePlayer;
@property (nonatomic, readonly) unsigned long long traceVersion;
@property (nonatomic, readonly) double timeScale;
@property (weak, nonatomic) id <GEOMotionContextProviderDelegate> motionDelegate;

- (void)dealloc;
- (void)close;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingHeading;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (_Bool)_isNavigating;
- (id)_defaultTraceNameForDestination:(id)arg1;
- (id)_tracePathForTraceName:(id)arg1;
- (void)_recordEnvironmentInfo:(id)arg1;
- (void)_recordStylesheet:(id)arg1;
- (id)_validFilenameForTraceName:(id)arg1;
- (id)_defaultTraceExtension;
- (unsigned long long)_startIndexForNavigation;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)resetForActiveTileGroupChanged;
- (void)openForPlaybackWithTracePath:(id)arg1;
- (void)openForRecordingWithTraceRecordingData:(id)arg1 traceNameOverride:(id)arg2;
- (void)openForSimulationWithRoute:(id)arg1 traceRecordingData:(id)arg2 traceNameOverride:(id)arg3;
- (void)startSimulationWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5 traceNameOverride:(id)arg6;

@end
