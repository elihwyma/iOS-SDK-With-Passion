/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapAccess, NSString;

@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitAccessPoint : NSObject

{
    GEOMapAccess *_map;
    shared_ptr_4792c490 _accessPoint;
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
@property (nonatomic, readonly) double groundRadius;
@property (nonatomic, readonly) unsigned char entranceExitType;
@property (nonatomic, readonly) unsigned short accessType;

- (id).cxx_construct;
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMap:(id)arg1 accessPoint:(shared_ptr_4792c490)arg2;

@end
