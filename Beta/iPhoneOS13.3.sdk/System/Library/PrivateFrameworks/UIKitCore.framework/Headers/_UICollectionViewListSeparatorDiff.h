/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSeparatorDiff : NSObject

{
    _UICollectionViewListSnapshotter *_oldSnapshot;
    _UICollectionViewListSnapshotter *_newSnapshot;
    _UIDataSourceUpdateMap *_map;
    NSMutableDictionary *_insertedIndexPaths;
    NSMutableDictionary *_deletedIndexPaths;
    NSArray *_insertedSeparators;
    NSArray *_deletedSeparators;
}

- (void)_mapUpdateItems:(id)arg1;
- (void)_prepareInsertsAndDeletes;
- (id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3;
- (id)indexPathsToInsertForSeparators;
- (id)indexPathsToDeleteForSeparators;

@end
