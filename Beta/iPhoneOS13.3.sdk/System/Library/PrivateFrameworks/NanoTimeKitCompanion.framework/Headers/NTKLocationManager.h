/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKLocationManager : NSObject

+ (id)sharedLocationManager;
+ (id)fallbackLocation;

- (id)previousLocation;
- (id)currentLocation;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;
- (id)anyLocation;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end
