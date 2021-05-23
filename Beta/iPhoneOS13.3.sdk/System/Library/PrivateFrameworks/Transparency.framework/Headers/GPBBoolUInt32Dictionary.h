/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolUInt32Dictionary : NSObject

{
    GPBMessage *_autocreator;
    unsigned int _values[2];
    _Bool _valueSet[2];
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeAll;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(_Bool)arg2;
- (void)setUInt32:(unsigned int)arg1 forKey:(_Bool)arg2;
- (void)removeUInt32ForKey:(_Bool)arg1;

@end
