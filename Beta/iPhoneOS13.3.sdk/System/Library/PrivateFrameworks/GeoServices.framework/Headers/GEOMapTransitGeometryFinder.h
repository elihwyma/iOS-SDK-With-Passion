/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitGeometryFinder : GEOMapRequest

{
    GEOMapTileFinder *_tileFinder;
    unsigned long long _transitID;
}

- (void)cancel;
- (id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (void)findTransitGeometryWithHandler:(CDUnknownBlockType)arg1;

@end
