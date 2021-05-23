/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestReserved : NSObject

{
    struct map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData>>> _reservedTriggerData;
    unsigned int _reservedCurrentRegion;
    unsigned char _reservedTourServerType;
    geo_isolater *_reservedIsolater;
}

- (id).cxx_construct;

@end
