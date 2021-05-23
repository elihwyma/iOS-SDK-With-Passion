/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSSet, NSString;

@protocol FCBundleSubscriptionProviderType;

@interface NTCatchUpOperationForYouRequest : NSObject <Swift>

{
    NSString *_topStoriesChannelID;
    NSSet *_hiddenFeedIDs;
    NSString *_paidBundleFeedID;
    NSSet *_mutedTagIDs;
    NSSet *_purchasedTagIDs;
    NSSet *_subscribedTagIDs;
    id <FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
    long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    long long _fetchingBin;
}

@property (copy, nonatomic, readonly) NSString *topStoriesChannelID;
@property (copy, nonatomic, readonly) NSSet *hiddenFeedIDs;
@property (copy, nonatomic, readonly) NSString *paidBundleFeedID;
@property (copy, nonatomic, readonly) NSSet *mutedTagIDs;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;
@property (copy, nonatomic, readonly) NSSet *subscribedTagIDs;
@property (copy, nonatomic, readonly) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) long long cutoffTime;
@property (nonatomic, readonly) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic, readonly) long long fetchingBin;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithForYouTodaySectionSpecificConfig:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 mutedTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 subscribedTagIDs:(id)arg7 bundleSubscriptionProvider:(id)arg8;

@end
