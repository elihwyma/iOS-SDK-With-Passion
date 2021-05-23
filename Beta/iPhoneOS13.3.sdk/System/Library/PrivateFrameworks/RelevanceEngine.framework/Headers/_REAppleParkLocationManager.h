/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RELocationManager.h>

@interface _REAppleParkLocationManager : RELocationManager

- (id)currentLocation;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end
