/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REComparisonCondition.h>

@class REFeature;

@interface _REFeatureComparisonCondition : REComparisonCondition

{
    REFeature *_leftFeature;
    long long _relation;
    REFeature *_rightFeature;
}

@property (nonatomic, readonly) REFeature *leftFeature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) REFeature *rightFeature;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (_Bool)_requiresTwoFeatures;
- (_Bool)_validForRanking;
- (_Bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)initWithLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3;

@end
