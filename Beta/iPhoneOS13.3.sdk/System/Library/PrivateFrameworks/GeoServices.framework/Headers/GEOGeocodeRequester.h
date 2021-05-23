/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEOGeocodeRequester : GEOServiceRequester

+ (id)sharedGeocodeRequester;

- (void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)cancelBatchReverseGeocode:(id)arg1;

@end
