/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class CLLocation, NSBundle, NSString;

@protocol MKLocationProviderDelegate;

@protocol MKLocationProvider <Swift>

@property (weak, nonatomic) id <MKLocationProviderDelegate> delegate;
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
@property (nonatomic, readonly) _Bool shouldShiftIfNecessary;
@property (nonatomic, readonly) _Bool isTracePlayer;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) CLLocation *lastLocation;

- (unsigned short)startUpdatingLocation;
- (unsigned short)stopUpdatingLocation;
- (unsigned short)startUpdatingHeading;
- (unsigned short)requestWhenInUseAuthorization;
- (unsigned short)stopUpdatingHeading;
- (unsigned short)dismissHeadingCalibrationDisplay;
- (unsigned short)requestWhenInUseAuthorizationWithPrompt;
- (unsigned short)startUpdatingVehicleSpeed;
- (unsigned short)stopUpdatingVehicleSpeed;
- (unsigned short)startUpdatingVehicleHeading;
- (unsigned short)stopUpdatingVehicleHeading;
- (unsigned short)authorizationStatusOnQueue:result: /* Error: Ran out of types for this method. */;

@end
