/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSString, NTPBPersonalizationProfile;

@interface FCDerivedPersonalizationData : NSObject <Swift>

{
    NTPBPersonalizationProfile *_profile;
    NSDictionary *_aggregatesByFeatureKey;
}

@property (copy, nonatomic) NTPBPersonalizationProfile *profile;
@property (retain, nonatomic) NSDictionary *aggregatesByFeatureKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (id)initWithPersonalizationProfile:(id)arg1;
- (id)aggregateForFeatureKey:(id)arg1;

@end
