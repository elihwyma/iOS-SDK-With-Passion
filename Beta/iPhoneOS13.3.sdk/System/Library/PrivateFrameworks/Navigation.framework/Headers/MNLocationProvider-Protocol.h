/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@class NSBundle, NSString;

@protocol MNLocationProviderDelegate;

@protocol MNLocationProvider <Swift>

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

- (unsigned short)startUpdatingLocation;
- (unsigned short)stopUpdatingLocation;
- (unsigned short)startUpdatingHeading;
- (unsigned short)requestWhenInUseAuthorization;
- (unsigned short)stopUpdatingHeading;
- (unsigned short)requestWhenInUseAuthorizationWithPrompt;
- (unsigned short)startUpdatingVehicleSpeed;
- (unsigned short)stopUpdatingVehicleSpeed;
- (unsigned short)startUpdatingVehicleHeading;
- (unsigned short)stopUpdatingVehicleHeading;
- (unsigned short)resetForActiveTileGroupChanged;

@end
