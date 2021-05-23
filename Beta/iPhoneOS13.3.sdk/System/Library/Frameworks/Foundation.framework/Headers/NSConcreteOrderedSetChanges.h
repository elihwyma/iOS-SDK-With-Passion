/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOrderedSetChanges.h>

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges

{
    CDStruct_29daef6c _changes;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)changeCount;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addChange:(id)arg1;

@end
