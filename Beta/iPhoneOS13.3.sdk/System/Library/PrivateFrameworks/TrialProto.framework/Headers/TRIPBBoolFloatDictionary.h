/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class TRIPBMessage;

@interface TRIPBBoolFloatDictionary : NSObject

{
    TRIPBMessage *_autocreator;
    float _values[2];
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
- (void)setFloat:(float)arg1 forKey:(_Bool)arg2;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithFloats:(const float *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getFloat:(float *)arg1 forKey:(_Bool)arg2;
- (void)removeFloatForKey:(_Bool)arg1;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;

@end
