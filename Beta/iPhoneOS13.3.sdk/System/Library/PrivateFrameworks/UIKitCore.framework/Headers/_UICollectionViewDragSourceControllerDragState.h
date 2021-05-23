/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableOrderedSet, NSPointerArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerDragState : NSObject

{
    NSMutableOrderedSet *_dataSourceIndexPathsOfDraggingItems;
    NSPointerArray *_dragItemsWithRebasableIndexPaths;
}

@property (retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems;
@property (retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths;
@property (nonatomic, readonly) NSIndexPath *dragFromDataSourceIndexPath;
@property (nonatomic, readonly) NSArray *draggingDataSourceIndexPaths;

- (id)init;
- (id)description;
- (id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2;
- (_Bool)isDraggingFromDataSourceIndexPath:(id)arg1;
- (void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3;
- (void)addDraggingDataSourceIndexPath:(id)arg1;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1;

@end
