/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringBoolDictionary : NSObject

{
    TRIPBMessage *_autocreator;
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
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithBools:(const _Bool *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getBool:(_Bool *)arg1 forKey:(id)arg2;
- (void)removeBoolForKey:(id)arg1;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;

@end
