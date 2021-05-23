/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, GEOMapFeatureTransitStop, NSArray, NSString;

@interface GEOMapFeatureTransitPoint : NSObject

{
    struct GEOTransitNodeFeature *_feature;
    CDStruct_2c43369c _coordinate;
    double _boundingRadius;
    CDStruct_02837cd9 _boundingRect;
    CDStruct_c3b9c2ee *_polygonPoints;
    unsigned long long _polygonPointsCount;
}

@property (nonatomic, readonly) struct _GEOTileKey tileKey;
@property (nonatomic, readonly) struct GEOTransitNodeFeature *feature;
@property (nonatomic, readonly) GEOMapFeatureTransitStop *stop;
@property (nonatomic, readonly) GEOMapFeatureTransitHall *hall;
@property (nonatomic, readonly) GEOMapFeatureTransitStation *station;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) unsigned long long transitID;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) NSArray *internalSystemNames;
@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) CDStruct_90e2a262 boundingRect;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *polygonPoints;
@property (nonatomic, readonly) unsigned long long polygonPointsCount;

- (void)dealloc;
- (id)description;
- (id)initWithFeature:(struct GEOTransitNodeFeature *)arg1;
- (void)updateWithGeometryFeature:(CDStruct_040038b6 *)arg1;

@end
