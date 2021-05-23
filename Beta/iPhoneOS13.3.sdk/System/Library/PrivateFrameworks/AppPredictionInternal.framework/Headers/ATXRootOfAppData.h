/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXRootOfAppData : NSObject

- (id)init;
- (id)initInternal;
- (unsigned long long)sessionCountForBundleId:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2;
- (void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2;
- (unsigned long long)docFreqForBundleId:(id)arg1 withAction:(id)arg2;
- (void)recordDocFreqWithBundleId:(id)arg1 hasAction:(id)arg2;

@end
