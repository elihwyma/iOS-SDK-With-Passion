/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RETaggedFeatureValueCountedSet : NSObject

{
    struct __CFBag *_bag;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateFeatureValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addFeatureValue:(unsigned long long)arg1;
- (void)removeFeatureValue:(unsigned long long)arg1;
- (unsigned long long)countForFeatureValue:(unsigned long long)arg1;
- (_Bool)containsFeatureValue:(unsigned long long)arg1;

@end
