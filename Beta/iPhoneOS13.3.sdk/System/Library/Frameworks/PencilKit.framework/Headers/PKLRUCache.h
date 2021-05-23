/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, PKLRUCacheItem;

@interface PKLRUCache : NSObject

{
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    unsigned long long _totalCostLimit;
    long long _freeItemCount;
}

@property (copy, nonatomic, readonly) NSArray *allObjects;
@property (nonatomic) unsigned long long totalCostLimit;
@property (nonatomic) long long freeItemCount;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)_addItem:(id)arg1;
- (void)_removeItem:(id)arg1;

@end
