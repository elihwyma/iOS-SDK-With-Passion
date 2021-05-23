/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

#import <AccessibilityUtilities/Swift-Protocol.h>

@interface AXIndexMap : NSObject <Swift>

{
    struct __CFDictionary *_map;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)indexes;
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)objectForIndex:(unsigned long long)arg1;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)initWithObjects:(id *)arg1 andIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForIndex:(unsigned long long)arg1;
- (void)addObjectsFromIndexMap:(id)arg1;

@end
