/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSNumber, NSSet;

@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCMutableTodayPrivateData <Swift>

@property (copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (copy, nonatomic) NSSet *purchasedTagIDs;
@property (copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (copy, nonatomic) NSNumber *onboardingVersion;
@property (copy, nonatomic) FCBundleSubscription *bundleSubscription;

@end
