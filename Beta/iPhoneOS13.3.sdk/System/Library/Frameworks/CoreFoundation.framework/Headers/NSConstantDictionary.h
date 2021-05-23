/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSConstantDictionary : NSDictionary

{
    unsigned long long _hashOptions;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_cfMutableCopy;
- (id)objectForKey:(id)arg1;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;

@end
