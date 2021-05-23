/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class FCPersonalizationFeature;

@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <Swift>

{
    FCPersonalizationFeature *_feature;
    double _featureClickPrior;
    double _featureImpressionPrior;
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *_absolutePresenceConfig;
}

@property (copy, nonatomic) FCPersonalizationFeature *feature;
@property (nonatomic) double featureClickPrior;
@property (nonatomic) double featureImpressionPrior;
@property (copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
