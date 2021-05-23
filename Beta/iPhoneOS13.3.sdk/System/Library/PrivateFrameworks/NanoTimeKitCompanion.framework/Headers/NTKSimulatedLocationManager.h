/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimulatedLocationManager : NTKLocationManager

- (id)init;
- (id)previousLocation;
- (id)currentLocation;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;
- (id)companionLocation;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end
