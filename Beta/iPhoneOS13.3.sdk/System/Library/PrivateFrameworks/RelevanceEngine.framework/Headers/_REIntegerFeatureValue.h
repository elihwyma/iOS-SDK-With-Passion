/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureValue.h>

@interface _REIntegerFeatureValue : REFeatureValue

{
    unsigned long long _value;
}

+ (id)featureValueWithInt64:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (unsigned long long)int64Value;
- (id)initWithValue:(long long)arg1;
- (unsigned long long)_integralFeatureValue;

@end
