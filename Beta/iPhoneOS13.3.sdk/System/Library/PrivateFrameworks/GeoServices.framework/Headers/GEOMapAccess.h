/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject;

@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

@interface GEOMapAccess : GEOMapRequestManager

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <GEOMapAccessRestrictions> _restrictions;
    CDUnknownBlockType _tileErrorHandler;
    _Bool _useMapMatchingTilesetForRoads;
}

@property (nonatomic, readonly) unsigned long long roadsZoomLevel;
@property (nonatomic, readonly) unsigned long long transitZoomLevel;
@property (nonatomic, readonly) unsigned long long buildingsZoomLevel;
@property (nonatomic) _Bool useMapMatchingTilesetForRoads;
@property (nonatomic, readonly) _Bool allowsNetworkTileLoad;
@property (weak, nonatomic) id <GEOMapAccessRestrictions> restrictions;
@property (copy, nonatomic) CDUnknownBlockType tileErrorHandler;
@property (nonatomic) unsigned int zoomLevel;
@property (nonatomic, readonly) unsigned int minZoomLevel;
@property (nonatomic, readonly) unsigned int maxZoomLevel;
@property (nonatomic, readonly) unsigned int maxTransitZoomLevel;

+ (id)map;
+ (_Bool)supportsRoadMapAccess;
+ (_Bool)supportsTransitMapAccess;
+ (_Bool)supportsRealisticMap;
+ (_Bool)supportsTransitMap;
+ (id)realisticMap;
+ (id)transitMap;
+ (_Bool)supportsBuildingMapAccess;

- (id)init;
- (id)callbackQueue;
- (void)setCallbackQueue:(id)arg1;
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece *)arg1 edgeHandler:(CDUnknownBlockType)arg2;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 type:(unsigned long long)arg3 pointHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_transitPointForTransitMapNode:(shared_ptr_52e51bdf)arg1;
- (_Bool)_hasLoadedTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6;
- (id)findClosestNamedFeaturesAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 pointHandler:(CDUnknownBlockType)arg3 polygonHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findClosestRoadAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitLinksWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 linkHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 hallHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 nodeHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 stopHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findBuildingsWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 buildingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)preloadRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasLoadedRoadTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (_Bool)hasLoadedTransitTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (_Bool)hasLoadedBuildingTilesNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (id)findRoadTilesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 tileHander:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
