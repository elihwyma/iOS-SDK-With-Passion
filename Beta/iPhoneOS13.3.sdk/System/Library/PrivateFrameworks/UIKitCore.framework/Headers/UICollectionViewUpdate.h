/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, UICollectionView, UICollectionViewData;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdate : NSObject

{
    UICollectionView *_collectionView;
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    struct CGRect _oldVisibleBounds;
    struct CGRect _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    id *_animatedItems;
    id *_animatedHeaders;
    id *_animatedFooters;
    NSMutableArray *_viewAnimations;
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    long long _oldFocusedViewType;
    long long _newFocusedViewType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)finalSectionCount;
- (struct _NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect)arg5 newVisibleBounds:(struct CGRect)arg6;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;
- (void)_computeSupplementaryUpdates;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;
- (void)_computeSectionUpdates;
- (void)_computeItemUpdates;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
- (struct _NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)initialSectionCount;

@end
