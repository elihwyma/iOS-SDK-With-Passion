/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCTodayPrivateData.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString;

@protocol FCDerivedPersonalizationData><NSCoding;

@interface FCMutableTodayPrivateData : FCTodayPrivateData

@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;
@property (copy, nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (copy, nonatomic, readonly) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@property (copy, nonatomic, readonly) NSSet *mutedTagIDs;
@property (copy, nonatomic, readonly) NSSet *autoFavoriteTagIDs;
@property (copy, nonatomic, readonly) NSArray *rankedAllSubscribedTagIDs;
@property (copy, nonatomic, readonly) NSArray *recentlySeenHistoryItems;
@property (copy, nonatomic, readonly) NSDictionary *recentlyReadHistoryItems;
@property (copy, nonatomic, readonly) NSNumber *onboardingVersion;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setOnboardingVersion:(id)arg1;
- (void)_deleteObjectsForOldKeys;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setRankedAllSubscribedTagIDs:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setBundleSubscription:(id)arg1;

@end
