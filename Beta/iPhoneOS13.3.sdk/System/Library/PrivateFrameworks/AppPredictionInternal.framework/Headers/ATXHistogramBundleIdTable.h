/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXHistogramTable.h>

@interface ATXHistogramBundleIdTable : ATXHistogramTable

+ (id)sharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;
+ (void)stopUsingTemporarySharedInstance;

- (id)initWithDatastore:(id)arg1;
- (id)permutationFrom:(id)arg1;

@end
