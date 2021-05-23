/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapAccessLine.h>

@class NSString;

@protocol GEOMapTransitStop;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitLink : GEOMapAccessLine

{
    shared_ptr_24ebf3c0 _transitEdge;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _coords;
    id <GEOMapTransitStop> _stopFrom;
    id <GEOMapTransitStop> _stopTo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) unsigned long long transitLineID;
@property (nonatomic, readonly) NSString *internalLineName;
@property (nonatomic, readonly) unsigned int minimumTravelTime;
@property (nonatomic, readonly) id <GEOMapTransitStop> stopFrom;
@property (nonatomic, readonly) id <GEOMapTransitStop> stopTo;

- (id).cxx_construct;
- (id)initWithMap:(id)arg1 transitEdge:(shared_ptr_24ebf3c0)arg2;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1 outClosestCoordinateOnLine:(CDStruct_c3b9c2ee *)arg2;

@end
