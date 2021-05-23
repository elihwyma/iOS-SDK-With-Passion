/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOThrottlerRequester : NSObject

+ (id)sharedRequester;

- (id)getTokenOrInfoFor:(CDStruct_d1a7ebee)arg1 nextSafeRequestTime:(double *)arg2 availableRequestCount:(unsigned int *)arg3 error:(id *)arg4;
- (_Bool)allowRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2 throttlerToken:(id *)arg3 error:(id *)arg4;
- (_Bool)_getTokenAndInfo:(id *)arg1 forRequest:(CDStruct_d1a7ebee)arg2 nextSafeRequestTime:(double *)arg3 availableRequestCount:(unsigned int *)arg4 error:(id *)arg5;
- (_Bool)getThrottleStateFor:(CDStruct_d1a7ebee)arg1 nextSafeRequestTime:(double *)arg2 availableRequestCount:(unsigned int *)arg3 error:(id *)arg4;

@end
