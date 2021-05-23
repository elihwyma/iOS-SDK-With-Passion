/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOFlyoverRegionVersions;

__attribute__((visibility("hidden")))
@interface _GEOFlyoverRegionVersionMap : NSObject

{
    GEOFlyoverRegionVersions *_versions;
    struct unordered_map<unsigned int, unsigned long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> _regionToIndex;
}

- (id)init;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (struct GEOFlyoverRegion *)regionForID:(unsigned int)arg1;
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;
- (id)initWithFlyoverRegions:(id)arg1;

@end
