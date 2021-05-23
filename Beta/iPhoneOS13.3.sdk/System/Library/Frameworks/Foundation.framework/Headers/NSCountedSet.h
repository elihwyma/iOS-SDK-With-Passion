/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet

{
    id _table;
    void *_reserved;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;

@end
