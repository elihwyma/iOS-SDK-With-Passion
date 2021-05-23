/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REHistogram.h>

@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram

{
    unsigned long long _binningValue;
    RESortedDictionary *_values;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (void)addValue:(unsigned long long)arg1;
- (void)removeValue:(unsigned long long)arg1;
- (unsigned long long)standardDeviation;
- (unsigned long long)mean;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;

@end
