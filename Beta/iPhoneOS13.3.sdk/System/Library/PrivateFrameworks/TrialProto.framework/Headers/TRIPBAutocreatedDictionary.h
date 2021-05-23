/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSMutableDictionary.h>

@class TRIPBMessage;

@interface TRIPBAutocreatedDictionary : NSMutableDictionary

{
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
