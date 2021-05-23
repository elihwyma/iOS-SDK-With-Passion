/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSNumber, NSSet, NSString;

@protocol FCDerivedPersonalizationData><NSCoding;

@interface FCTodayPrivateData : NSObject <Swift>

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
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
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;

@end
