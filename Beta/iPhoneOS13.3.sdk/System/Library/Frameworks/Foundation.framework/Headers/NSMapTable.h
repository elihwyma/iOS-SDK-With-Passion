/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <Swift>

@property (copy, readonly) NSPointerFunctions *keyPointerFunctions;
@property (copy, readonly) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)strongToStrongObjectsMapTable;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)objectEnumerator;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllItems;
- (id)enumerator;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (unsigned long long)__capacity;
- (void)setItem:(const void *)arg1 forKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;
- (id)mutableDictionary;
- (id)dictionaryRepresentation;

@end
