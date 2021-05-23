/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer

{
    double _interval;
    NSDate *_lastChangeDate;
    unsigned long long _value;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (_Bool)supportsInvalidation;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_outputType;
- (void)configureWithInvocation:(id)arg1;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)_validateWithFeatures:(id)arg1;
- (void)_updateConfigurationForInterval:(double)arg1;

@end
