/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitNodeBase : NSObject <Swift>

{
    GEOMapAccess *_map;
    shared_ptr_52e51bdf _node;
    double _boundingRadius;
    CDStruct_02837cd9 _boundingRect;
    CDStruct_c3b9c2ee *_polygonPoints;
    long long _polygonPointsCount;
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

- (void)dealloc;
- (id).cxx_construct;
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMap:(id)arg1 node:(shared_ptr_52e51bdf)arg2;

@end
