/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSMutableDictionary : NSDictionary

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)invert;
- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)_mutate;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(CDUnknownBlockType)arg1;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setDictionary:(id)arg1;

@end
