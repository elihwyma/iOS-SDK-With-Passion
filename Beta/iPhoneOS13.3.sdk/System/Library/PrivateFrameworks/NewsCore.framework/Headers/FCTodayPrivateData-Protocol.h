/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSNumber, NSSet;

@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCTodayPrivateData <Swift>

@property (copy, nonatomic, readonly) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@property (copy, nonatomic, readonly) NSSet *mutedTagIDs;
@property (copy, nonatomic, readonly) NSSet *autoFavoriteTagIDs;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;
@property (copy, nonatomic, readonly) NSArray *rankedAllSubscribedTagIDs;
@property (copy, nonatomic, readonly) NSArray *recentlySeenHistoryItems;
@property (copy, nonatomic, readonly) NSDictionary *recentlyReadHistoryItems;
@property (copy, nonatomic, readonly) NSNumber *onboardingVersion;
@property (copy, nonatomic, readonly) FCBundleSubscription *bundleSubscription;

@end
