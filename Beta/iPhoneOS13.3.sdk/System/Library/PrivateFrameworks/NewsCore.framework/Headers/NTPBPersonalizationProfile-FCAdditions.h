/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBPersonalizationProfile.h>

@class NSDictionary;

@interface NTPBPersonalizationProfile (FCAdditions)

@property (nonatomic, readonly) NSDictionary *aggregatesByFeatureKey;
@property (nonatomic, readonly) NSDictionary *historiesByInstanceIdentifier;

- (id)historyForInstanceIdentifier:(id)arg1;
- (unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1;

@end
