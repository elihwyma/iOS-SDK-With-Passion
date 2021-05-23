/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <CoreLocation/CLStateTracker.h>

@interface CLLocationManagerStateTracker : CLStateTracker

{
    struct _CLLocationManagerStateTrackerState _state;
    void *_identifier;
    _Bool _inTransaction;
}

@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) _Bool updatingLocation;
@property (nonatomic) _Bool requestingLocation;
@property (nonatomic) _Bool requestingRanging;
@property (nonatomic) _Bool updatingRanging;
@property (nonatomic) _Bool updatingHeading;
@property (nonatomic) double headingFilter;
@property (nonatomic) _Bool allowsLocationPrompts;
@property (nonatomic) _Bool allowsAlteredAccessoryLocations;
@property (nonatomic) _Bool dynamicAccuracyReductionEnabled;
@property (nonatomic) _Bool previousAuthorizationStatusValid;
@property (nonatomic) int previousAuthorizationStatus;
@property (nonatomic) long long activityType;
@property int pausesLocationUpdatesAutomatically;
@property (nonatomic) _Bool paused;
@property (nonatomic) _Bool allowsBackgroundLocationUpdates;
@property (nonatomic) _Bool showsBackgroundLocationIndicator;
@property (nonatomic) _Bool allowsMapCorrection;
@property (nonatomic) _Bool batchingLocation;
@property (nonatomic) _Bool updatingVehicleSpeed;
@property (nonatomic) _Bool updatingVehicleHeading;
@property (nonatomic) _Bool matchInfoEnabled;
@property (nonatomic) _Bool groundAltitudeEnabled;
@property (nonatomic) _Bool courtesyPromptNeeded;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (void)dealloc;
- (void *)identifier;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;
- (void)updateState:(CDUnknownBlockType)arg1;
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;

@end
