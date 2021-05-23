/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSPointerFunctions, NSSet;

@interface NSHashTable : NSObject <Swift>

@property (copy, readonly) NSPointerFunctions *pointerFunctions;
@property (readonly) unsigned long long count;
@property (copy, readonly) NSArray *allObjects;
@property (nonatomic, readonly) id anyObject;
@property (copy, readonly) NSSet *setRepresentation;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)hashTableWithWeakObjects;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithOptions:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void *)getItem:(const void *)arg1;
- (void)removeItem:(const void *)arg1;
- (void)removeAllItems;
- (unsigned long long)weakCount;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (_Bool)intersectsHashTable:(id)arg1;
- (_Bool)isEqualToHashTable:(id)arg1;
- (_Bool)isSubsetOfHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)minusHashTable:(id)arg1;
- (id)mutableSet;

@end
