/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class TRIPBMessage;

@interface TRIPBBoolObjectDictionary : NSObject

{
    TRIPBMessage *_autocreator;
    id _values[2];
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objectForKey:(_Bool)arg1;
- (void)removeObjectForKey:(_Bool)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(_Bool)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeAll;
- (_Bool)isInitialized;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;

@end
