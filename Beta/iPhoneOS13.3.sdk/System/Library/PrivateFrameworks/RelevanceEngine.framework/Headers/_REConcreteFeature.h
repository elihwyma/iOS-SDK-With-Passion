/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature

{
    NSString *_name;
    unsigned long long _featureType;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)featureType;
- (long long)_bitCount;
- (id)initWithName:(id)arg1 featureType:(unsigned long long)arg2;
- (id)_rootFeatures;

@end
