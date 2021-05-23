/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutableArray.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray

{
    NSMutableArray *_mutableArray;
}

+ (id)_proxyShare;

- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
