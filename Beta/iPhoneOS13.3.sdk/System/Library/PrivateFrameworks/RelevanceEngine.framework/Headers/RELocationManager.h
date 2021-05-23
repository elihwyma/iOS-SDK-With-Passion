/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RELocationManager : NSObject

+ (id)locationManager;
+ (id)simulatedLocationManager;

- (id)currentLocation;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end
