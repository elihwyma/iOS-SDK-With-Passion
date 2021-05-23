/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

__attribute__((visibility("hidden")))
@interface GEOGeocodeRequestConfig : GEOServiceRequestDefaultConfig

+ (id)standardConfig;

- (unsigned long long)urlType;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)serviceTypeNumber;

@end
