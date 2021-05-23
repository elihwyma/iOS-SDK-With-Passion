/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolBoolDictionary : NSObject

{
    GPBMessage *_autocreator;
    _Bool _values[2];
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
- (void)setBool:(_Bool)arg1 forKey:(_Bool)arg2;
- (void)removeAll;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getBool:(_Bool *)arg1 forKey:(_Bool)arg2;
- (void)removeBoolForKey:(_Bool)arg1;

@end
