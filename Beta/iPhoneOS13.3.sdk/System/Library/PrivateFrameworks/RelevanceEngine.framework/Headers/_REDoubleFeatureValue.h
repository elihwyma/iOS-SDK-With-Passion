/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureValue.h>

@interface _REDoubleFeatureValue : REFeatureValue

{
    double _value;
}

+ (id)featureValueWithDouble:(double)arg1;

- (double)doubleValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (id)initWithValue:(double)arg1;
- (unsigned long long)_integralFeatureValue;

@end
