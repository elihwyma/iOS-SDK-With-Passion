/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <GeoServices/GEOTraceRouteSimulator.h>

@class MNTraceEventRecorder, NSArray, NSBundle, NSMutableArray, NSString;

@protocol MNLocationProviderDelegate;

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator

{
    double _time;
    NSMutableArray *_priorityQueue;
    MNTraceEventRecorder *_recorder;
    id <MNLocationProviderDelegate> _delegate;
    CDUnknownBlockType _authorizationRequestBlock;
    NSArray *_traceEvents;
    double _simulationSpeedOverride;
}

@property (nonatomic, readonly) NSArray *traceEvents;
@property (nonatomic) double simulationSpeedOverride;
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
@property (nonatomic, readonly) double currentTime;

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
- (void)_tearDown;
- (void)_setup;
- (id)currentDate;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)insertVoiceEventAtTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordLocationsAlongRouteWithRecorder:(id)arg1;
- (void)resetForActiveTileGroupChanged;
- (void)generateGuidanceWithRequest:(id)arg1 response:(id)arg2 routeAttributes:(id)arg3 routeIndex:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_generateEvents;
- (void)generateGuidance;

@end
