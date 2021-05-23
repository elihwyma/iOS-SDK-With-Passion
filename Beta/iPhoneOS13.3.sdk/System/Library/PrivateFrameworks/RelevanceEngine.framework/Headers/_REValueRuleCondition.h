/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REValueRuleCondition : RECondition

{
    _Bool _allowsEmptyValueForFeature;
    REFeature *_feature;
    long long _relation;
    unsigned long long _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) unsigned long long value;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3;

@end
