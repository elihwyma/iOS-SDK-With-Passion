/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapAccessTransitNodeBase.h>

@class NSString;

@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase

{
    id <GEOMapTransitStation> _station;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) unsigned long long transitID;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) CDStruct_90e2a262 boundingRect;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (nonatomic, readonly) unsigned long long stationID;

- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
