/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBUInt64FloatDictionary : NSObject

{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(unsigned long long)arg2;
- (void)removeAll;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithFloats:(const float *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getFloat:(float *)arg1 forKey:(unsigned long long)arg2;
- (void)removeFloatForKey:(unsigned long long)arg1;

@end
