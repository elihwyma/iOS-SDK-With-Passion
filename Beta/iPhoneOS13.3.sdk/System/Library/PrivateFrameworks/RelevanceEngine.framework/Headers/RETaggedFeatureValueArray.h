/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RETaggedFeatureValueArray : NSObject

{
    struct __CFArray *_array;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)enumerateFeatureValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addFeatureValue:(unsigned long long)arg1;
- (unsigned long long)_locked_count;
- (unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1;
- (id)initWithFeatureValues:(id)arg1;
- (unsigned long long)featureValueAtIndex:(unsigned long long)arg1;
- (void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFeatureValueAtIndex:(unsigned long long)arg1;
- (void)removeAllFeatureValues;
- (void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2;
- (unsigned long long)firstFeatureValue;
- (unsigned long long)lastFeatureValue;

@end
