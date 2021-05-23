/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class FCPersonalizationFeature;

@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <Swift>

{
    FCPersonalizationFeature *_targetSectionFeature;
    double _targetSectionFeatureClickPrior;
    double _targetSectionFeatureImpressionPrior;
    FCPersonalizationFeature *_competingSectionFeature;
    double _competingSectionFeatureClickPrior;
    double _competingSectionFeatureImpressionPrior;
    double _scalar;
}

@property (copy, nonatomic) FCPersonalizationFeature *targetSectionFeature;
@property (nonatomic) double targetSectionFeatureClickPrior;
@property (nonatomic) double targetSectionFeatureImpressionPrior;
@property (copy, nonatomic) FCPersonalizationFeature *competingSectionFeature;
@property (nonatomic) double competingSectionFeatureClickPrior;
@property (nonatomic) double competingSectionFeatureImpressionPrior;
@property (nonatomic) double scalar;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
