/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapFeatureAccess;

__attribute__((visibility("hidden")))
@interface GEORouteRoadMatcher : NSObject

{
    GEOMapFeatureAccess *_mapFeatureAccess;
}

- (id)init;
- (_Bool)allowsNetworkTileLoad;
- (CDStruct_c8b5ad3f *)findRoadOnCoordinate:(CDStruct_c3b9c2ee)arg1 withCourse:(double)arg2;

@end
