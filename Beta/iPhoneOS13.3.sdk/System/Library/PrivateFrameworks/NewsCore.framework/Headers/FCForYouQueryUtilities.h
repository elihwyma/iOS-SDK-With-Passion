/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCForYouQueryUtilities : NSObject

+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(CDUnknownBlockType)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 purchasedTagIDs:(id)arg5 bundleSubscriptionProvider:(id)arg6 configuration:(id)arg7 maxCount:(unsigned long long)arg8 tagIDFeedRangeProvider:(CDUnknownBlockType)arg9 isRunningPPT:(_Bool)arg10;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(_Bool)arg7 qualityOfService:(long long)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(_Bool)arg7 qualityOfService:(long long)arg8 completionHandler:(CDUnknownBlockType)arg9;

@end
