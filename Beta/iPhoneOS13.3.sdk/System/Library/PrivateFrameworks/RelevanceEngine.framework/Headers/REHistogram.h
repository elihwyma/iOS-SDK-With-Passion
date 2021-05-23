/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REFeature;

@interface REHistogram : NSObject

{
    REFeature *_feature;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long mean;
@property (nonatomic, readonly) unsigned long long standardDeviation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (void)addValue:(unsigned long long)arg1;
- (void)removeValue:(unsigned long long)arg1;
- (id)initWithFeature:(id)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;

@end
