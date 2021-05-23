/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSHashTable.h>

#import <Foundation/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable <Swift>

{
    struct NSSlice slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copy;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allObjects;
- (id)pointerFunctions;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void *)getItem:(const void *)arg1;
- (void)removeItem:(const void *)arg1;
- (void)removeAllItems;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)insertItem:(const void *)arg1;
- (void)raiseCountUnderflowException;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2;
- (void)hashGrow;
- (void)rehash;

@end
