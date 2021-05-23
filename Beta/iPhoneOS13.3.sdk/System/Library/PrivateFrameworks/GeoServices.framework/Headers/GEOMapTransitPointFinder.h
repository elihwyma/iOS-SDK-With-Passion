/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitPointFinder : GEOMapRequest

{
    GEOMapTileFinder *_tileFinder;
    CDStruct_34734122 _centerPoint;
    double _mapRadius;
    unsigned long long _pointID;
    unsigned long long _parentID;
}

@property (nonatomic, readonly) GEOMapAccess *map;

- (void)cancel;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (void)_validatePoint:(CDStruct_cdc9fa9f *)arg1 rect:(CDStruct_90e2a262)arg2 localSearch:(Box_3fb92e00)arg3 validPointHandler:(CDUnknownBlockType)arg4;
- (id)initWithMap:(id)arg1 approxLocation:(CDStruct_c3b9c2ee)arg2 pointID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(CDStruct_c3b9c2ee)arg2 parentID:(unsigned long long)arg3;
- (void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(CDUnknownBlockType)arg2 accessPointHandler:(CDUnknownBlockType)arg3;

@end
