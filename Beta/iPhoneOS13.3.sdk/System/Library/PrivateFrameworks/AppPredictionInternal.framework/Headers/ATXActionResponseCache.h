/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXActionResponseCache : NSObject

+ (_Bool)unexpiredCacheExistsForConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double *)arg2;
+ (void)restartFeedbackTimers;
+ (id)retrieveActionResponseWithConsumerSubType:(unsigned char)arg1 cacheAgeOut:(double *)arg2 unlink:(_Bool)arg3;
+ (_Bool)storeActionResponseAndStartTimer:(id)arg1;
+ (_Bool)storeActionResponse:(id)arg1;
+ (id)retrieveActionResponseFromCachePath:(id)arg1 maxValidCacheAge:(double)arg2 cacheAgeOut:(double *)arg3 unlink:(_Bool)arg4;
+ (_Bool)storeActionResponse:(id)arg1 cachePath:(id)arg2;

@end
