/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSString, NTCatchUpOperationForYouRequest;

@interface NTForYouSectionFetchDescriptor : NSObject <Swift>

{
    NTCatchUpOperationForYouRequest *_forYouRequest;
}

@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)initWithForYouConfiguration:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 mutedTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 subscribedTagIDs:(id)arg7 bundleSubscriptionProvider:(id)arg8;

@end
