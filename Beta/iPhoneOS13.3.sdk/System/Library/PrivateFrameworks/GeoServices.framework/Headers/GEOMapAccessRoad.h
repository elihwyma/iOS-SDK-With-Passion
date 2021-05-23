/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapAccessLine.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessRoad : GEOMapAccessLine

{
    shared_ptr_92bc9970 _roadEdge;
    unsigned long long _roadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) int formOfWay;
@property (nonatomic, readonly) int travelDirection;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) unsigned long long speedLimit;
@property (nonatomic, readonly) _Bool speedLimitIsMPH;
@property (nonatomic, readonly) unsigned long long roadID;
@property (nonatomic, readonly) _Bool isTunnel;
@property (nonatomic, readonly) _Bool isBridge;
@property (nonatomic, readonly) _Bool isRail;
@property (nonatomic, readonly) int rampType;
@property (nonatomic, readonly) NSString *internalRoadName;

+ (double)estimatedWidthForRoad:(CDStruct_c8b5ad3f *)arg1;

- (id).cxx_construct;
- (id)initWithMap:(id)arg1 roadEdge:(shared_ptr_92bc9970)arg2;
- (void)roadFeaturesWithHandler:(CDUnknownBlockType)arg1;
- (void)roadEdgesWithHandler:(CDUnknownBlockType)arg1;
- (id)findRoadsFrom:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)tileKeys;

@end
