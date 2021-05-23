/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject

{
    id *_array;
    unsigned long long _size;
    CDUnknownBlockType _comparator;
    unsigned long long _mutation;
    NSMapTable *_objects;
    unsigned long long _count;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (id)firstObject;
- (void)removeFirstObject;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (_Bool)check;
- (void)_moveDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveUp:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_shrink;
- (void)firstObjectWeightChanged;
- (void)objectWeightChanged:(id)arg1;

@end
