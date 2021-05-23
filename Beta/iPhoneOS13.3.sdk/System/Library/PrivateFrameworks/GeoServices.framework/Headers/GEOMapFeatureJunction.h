/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject

{
    CDStruct_2c43369c _coordinate;
    CDStruct_6e3f967a _tilePoint;
    GEOVectorTile *_tile;
}

@property (nonatomic, readonly) GEOVectorTile *tile;
@property (nonatomic, readonly) CDStruct_6e3f967a tilePoint;
@property (nonatomic, readonly) CDStruct_3b01f0aa *connectivityJunction;
@property (nonatomic, readonly) _Bool isOnTileBorder;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;

+ (id)junctionForRoadFeature:(CDStruct_c8b5ad3f *)arg1 startJunction:(_Bool)arg2;
+ (_Bool)_isPointOnTileBorder:(CDStruct_6e3f967a)arg1;

@end
