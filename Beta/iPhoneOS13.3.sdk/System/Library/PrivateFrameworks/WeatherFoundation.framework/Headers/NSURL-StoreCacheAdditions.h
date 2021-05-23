/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSURL.h>

@interface NSURL (StoreCacheAdditions)

+ (id)wf_inMemoryAddress;
+ (id)wf_cacheDirectory:(id)arg1;

- (_Bool)wf_isInMemoryAddress;
- (id)wf_URLWithTracking:(id)arg1;
- (_Bool)wf_URLHasParameter:(id)arg1;

@end
