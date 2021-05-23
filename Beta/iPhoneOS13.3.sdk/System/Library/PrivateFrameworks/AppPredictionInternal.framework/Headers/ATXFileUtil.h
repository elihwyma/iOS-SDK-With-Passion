/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXFileUtil : NSObject

+ (_Bool)shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2;
+ (_Bool)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1 basePath:(id)arg2;
+ (double)_cacheAgeForCache:(id)arg1 withCurrentTime:(double)arg2;
+ (_Bool)cachesAreValidForConsumerSubTypes:(id)arg1;
+ (_Bool)cachesAreValidForBasePath:(id)arg1 consumerSubTypes:(id)arg2;

@end
