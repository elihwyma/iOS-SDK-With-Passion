/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXRootOfAppData.h>

@class NSMutableDictionary;

@interface ATXRootOfAppDataWithDictionary : ATXRootOfAppData

{
    NSMutableDictionary *_sessionCounts;
    NSMutableDictionary *_firstUA;
}

- (id)init;
- (id)description;
- (unsigned long long)sessionCountForBundleId:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2;
- (void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2;

@end
