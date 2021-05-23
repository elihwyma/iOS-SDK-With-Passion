/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNCoreLocationProvider, NSBundle, NSString;

@protocol MNLocationProviderDelegate;

@interface MNHybridLocationProvider : NSObject

{
    unsigned long long _mode;
    double _desiredAccuracy;
    MNCoreLocationProvider *_coreLocationProvider;
    id <MNLocationProviderDelegate> _delegate;
}

@property (nonatomic) unsigned long long mode;
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

- (id)init;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)requestWhenInUseAuthorization;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithEffectiveBundle:(id)arg1;
- (void)stopUpdatingHeading;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)_sharedInit;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (_Bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)resetForActiveTileGroupChanged;
- (void)_setEffectiveAccuracy:(double)arg1;
- (id)coreLocationProvider;
- (id)leechedLocationProvider;

@end
