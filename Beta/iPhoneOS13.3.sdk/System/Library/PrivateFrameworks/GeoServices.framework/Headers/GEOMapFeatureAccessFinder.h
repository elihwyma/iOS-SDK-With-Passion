/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureAccessFinder : NSObject

{
    _Bool _allowNetwork;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) _Bool allowNetwork;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (Sphere_37dc312c)_boundingCircleWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 inTile:(struct _GEOTileKey)arg3;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsTransitLink:(CDStruct_32d7d945 *)arg2;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsFeature:(CDStruct_c8b5ad3f *)arg2;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsPoints:(CDStruct_6e3f967a *)arg2 pointCount:(unsigned long long)arg3;

@end
