/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig

{
    double _timeout;
}

- (unsigned long long)urlType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)initWithTimeout:(double)arg1;

@end
