/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface UITableViewVisibleCells : NSMutableArray

{
    NSMutableArray *_array;
}

- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (id)_array;

@end
