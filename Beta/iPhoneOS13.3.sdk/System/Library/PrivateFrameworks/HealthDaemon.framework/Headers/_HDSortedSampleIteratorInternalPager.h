/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface _HDSortedSampleIteratorInternalPager : NSObject

+ (void)getSamplesWithSampleQueryDescription:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 profile:(id)arg5 resultsHandler:(CDUnknownBlockType)arg6;
+ (id)_enumeratorWithProfile:(id)arg1 sampleQueryDescription:(id)arg2 anchor:(id)arg3 limit:(long long)arg4 error:(id *)arg5;

- (id)init;

@end
