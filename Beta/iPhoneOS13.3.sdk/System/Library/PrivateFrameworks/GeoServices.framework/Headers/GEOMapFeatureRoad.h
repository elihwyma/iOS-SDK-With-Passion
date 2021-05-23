/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine

{
    CDStruct_c8b5ad3f *_feature;
    unsigned long long _roadID;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    _Bool _checkedJunctionA;
    _Bool _checkedJunctionB;
}

@property (nonatomic, readonly) struct _GEOTileKey tileKey;
@property (nonatomic, readonly) CDStruct_c8b5ad3f *feature;
@property (nonatomic, readonly) unsigned long long featureIndex;
@property (nonatomic, readonly) _Bool isFlipped;
@property (nonatomic, readonly) unsigned long long roadID;
@property (nonatomic, readonly) GEOMapFeatureJunction *startJunction;
@property (nonatomic, readonly) GEOMapFeatureJunction *endJunction;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) int formOfWay;
@property (nonatomic, readonly) int travelDirection;
@property (nonatomic, readonly) long long laneCount;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) unsigned long long speedLimit;
@property (nonatomic, readonly) _Bool speedLimitIsMPH;
@property (nonatomic, readonly) _Bool isDrivable;
@property (nonatomic, readonly) _Bool isWalkable;
@property (nonatomic, readonly) _Bool isRoadPedestrianNavigable;
@property (nonatomic, readonly) int walkableSide;
@property (nonatomic, readonly) int sidewalkSide;
@property (nonatomic, readonly) _Bool isTunnel;
@property (nonatomic, readonly) _Bool isBridge;
@property (nonatomic, readonly) _Bool isRail;
@property (nonatomic, readonly) int rampType;
@property (nonatomic, readonly) NSString *internalRoadName;

+ (double)estimatedWidthForRoad:(CDStruct_c8b5ad3f *)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)_attributes;
- (id)_containingTile;
- (id)_junctionB;
- (id)_junctionA;
- (int)_flippedWalkableSideFor:(int)arg1;
- (int)_flippedSidewalkSideFor:(int)arg1;
- (void)flip;
- (id)localizedRoadName:(out id *)arg1;
- (CDStruct_6e3f967a *)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long *)arg2;
- (id)initWithFeature:(CDStruct_c8b5ad3f *)arg1;
- (void)updateForDesiredRoadDirectionality:(unsigned long long)arg1 isOutboundRoad:(_Bool)arg2;

@end
