/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPrefetchingContext : NSObject

{
    NSArray *_remainingIndexPaths;
    NSMutableOrderedSet *_items;
    NSMutableDictionary *_itemsDict;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
}

@property (retain, nonatomic) NSArray *remainingIndexPaths;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *itemsDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataAccessQueue;

+ (id)prefetchingContextWithItems:(id)arg1;

- (id)_items;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (_Bool)hasRemainingItems;
- (id)popNextItem;
- (id)peekNextItem;
- (id)initWithPrefetchItems:(id)arg1;
- (void)_invalidateRemainingIndexPaths;

@end
