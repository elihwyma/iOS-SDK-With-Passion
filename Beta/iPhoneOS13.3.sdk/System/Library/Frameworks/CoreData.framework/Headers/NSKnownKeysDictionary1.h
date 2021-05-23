/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary

{
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (id)init;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)initWithCapacity:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)initWithCoder:(id)arg1;
+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
+ (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
+ (id)initWithDictionary:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)initForKeys:(id)arg1;
+ (id)initWithSearchStrategy:(id)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)getObjects:(id *)arg1;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)setValues:(id *)arg1;
- (const id *)values;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)getKeys:(id *)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (Class)classForArchiver;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)mapping;
- (void)_setValues:(id *)arg1 retain:(_Bool)arg2;
- (const id *)knownKeyValuesPointer;
- (unsigned long long)_countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3 forKeys:(_Bool)arg4;
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_recount;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;

@end
