/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureValue.h>

@class NSString;

@interface _REStringFeatureValue : REFeatureValue

{
    NSString *_value;
}

+ (id)featureValueWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (id)stringValue;
- (id)initWithValue:(id)arg1;
- (unsigned long long)_integralFeatureValue;

@end
