/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOToolRequester : NSObject

+ (id)sharedRequester;

- (id)ping;
- (void)unlockDBs;
- (void)lockDBs;
- (id)getDefault:(id)arg1 source:(long long *)arg2;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (void)invalidateTileCache;
- (_Bool)notifyNetworkDefaultsChanged;

@end
