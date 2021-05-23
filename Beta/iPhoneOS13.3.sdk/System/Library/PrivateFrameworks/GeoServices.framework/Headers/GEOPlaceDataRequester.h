/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequester : GEOServiceRequester

+ (id)sharedInstance;

- (void)cancelRequest:(id)arg1;
- (id)_validateResponse:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end
