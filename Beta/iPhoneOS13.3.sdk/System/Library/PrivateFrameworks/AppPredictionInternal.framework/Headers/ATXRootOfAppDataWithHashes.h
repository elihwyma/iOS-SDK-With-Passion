/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXRootOfAppData.h>

@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData

{
    NSMutableDictionary *_dataForBundleId;
}

- (id)init;
- (id)description;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2;
- (void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2;

@end
