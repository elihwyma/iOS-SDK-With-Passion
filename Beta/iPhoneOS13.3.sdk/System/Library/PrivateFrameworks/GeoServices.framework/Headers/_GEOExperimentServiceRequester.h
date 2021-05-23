/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface _GEOExperimentServiceRequester : GEOServiceRequester

+ (id)sharedInstance;

- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelRequest:(id)arg1;

@end
