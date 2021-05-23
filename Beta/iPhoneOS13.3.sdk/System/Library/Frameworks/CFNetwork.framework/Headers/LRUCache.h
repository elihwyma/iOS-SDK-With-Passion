/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface LRUCache : NSObject

{
    unsigned long long _maxCapacity;
    NSMutableDictionary *_items;
    NSMutableArray *_lru;
}

@property (nonatomic) unsigned long long maxCapacity;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) NSMutableArray *lru;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllItems;
- (id)itemForKey:(id)arg1;
- (void)removeItemForKey:(id)arg1;
- (void)addItem:(id)arg1 forKey:(id)arg2;
- (void)_insert:(id)arg1;

@end
