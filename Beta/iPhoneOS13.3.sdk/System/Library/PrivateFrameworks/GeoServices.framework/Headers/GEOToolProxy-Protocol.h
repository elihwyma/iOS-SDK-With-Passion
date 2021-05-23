/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@protocol GEOToolProxy

- (unsigned short)ping;
- (unsigned short)unlockDBs;
- (unsigned short)lockDBs;
- (unsigned short)getDefault:source: /* Error: Ran out of types for this method. */;
- (unsigned short)calculatePurgableSpaceForUrgency: /* Error: Ran out of types for this method. */;
- (unsigned short)freePurgableSpace:forUrgency: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateTileCache;
- (unsigned short)notifyNetworkDefaultsChanged;

@end
