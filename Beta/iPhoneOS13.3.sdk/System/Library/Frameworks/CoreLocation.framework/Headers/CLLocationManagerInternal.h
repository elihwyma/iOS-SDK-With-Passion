/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, CLLocationManagerStateTracker, CLSilo, CLTimer, NSMutableSet, NSString;

@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject

{
    struct __CLClient *fClient;
    id <CLLocationManagerDelegate> fDelegate;
    CLLocationManager *fManager;
    CLLocationManagerStateTracker *fState;
    CDStruct_4d1fbe9a fLocation;
    NSString *fLocationEventType;
    CLTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    CLTimer *fRangingRequestTimer;
    double fLastRangingRequestTimeout;
    unsigned long long fLastRangingRequestMachTime;
    int fHeadingOrientation;
    NSMutableSet *fRangedRegions;
    NSMutableSet *fRangedConstraints;
    CDUnknownBlockType fPlaceInferenceHandler;
    unsigned long long fFidelityPolicy;
    CLSilo *fSilo;
}

@property (nonatomic, readonly) NSMutableSet *rangedRegions;
@property (nonatomic, readonly) NSMutableSet *rangedConstraints;
@property (weak, nonatomic) id <CLLocationManagerDelegate> delegate;
@property (weak, nonatomic) CLLocationManager *manager;

- (void)dealloc;
- (void)invalidate;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (_Bool)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (_Bool)showsBackgroundLocationIndicator;
- (void)setShowsBackgroundLocationIndicator:(_Bool)arg1;
- (_Bool)hasLingeringRangingRequest;
- (void)cancelRangingRequest;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 delegate:(id)arg4 silo:(id)arg5;
- (int)PausesLocationUpdatesAutomatically;
- (void)stopUpdatingLocationAutoPaused;
- (void)cancelLocationRequest;
- (void)cancelLingeringRangingRequest;
- (void)performCourtesyPromptIfNeeded;

@end
