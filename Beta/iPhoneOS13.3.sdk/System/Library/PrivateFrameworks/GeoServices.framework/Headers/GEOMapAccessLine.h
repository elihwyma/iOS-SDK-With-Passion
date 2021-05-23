/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessLine : NSObject <Swift>

{
    GEOMapAccess *_map;
    shared_ptr_035a2da2 _edge;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _coordinates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) double length;

- (id).cxx_construct;
- (id)initWithMap:(id)arg1 edge:(shared_ptr_035a2da2)arg2;
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outSegmentCoordinate:(struct PolylineCoordinate *)arg2;

@end
