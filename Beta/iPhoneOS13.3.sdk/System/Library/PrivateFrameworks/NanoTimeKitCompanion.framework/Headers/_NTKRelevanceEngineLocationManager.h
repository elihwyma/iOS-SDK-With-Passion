/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <RelevanceEngine/RELocationManager.h>

@class NTKLocationManager;

@interface _NTKRelevanceEngineLocationManager : RELocationManager

{
    NTKLocationManager *_locationManager;
    struct NSString *_token;
}

- (id)currentLocation;
- (id)initWithLocationManager:(id)arg1;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end
