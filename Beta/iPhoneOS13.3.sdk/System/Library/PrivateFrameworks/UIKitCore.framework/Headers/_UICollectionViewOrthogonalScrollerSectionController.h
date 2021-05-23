/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSHashTable, NSIndexSet, NSMapTable, NSString, UICollectionView, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <Swift>

{
    UICollectionView *_collectionView;
    NSMapTable *_scrollViewFromSectionMap;
    NSMapTable *_scrollViewToSectionMap;
    NSHashTable *_frontMostElements;
    NSIndexSet *_currentOrthogonalSectionIndexes;
    UIScrollView *_scrollViewCurrentlyBeingConfigured;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap;
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap;
@property (retain, nonatomic) NSHashTable *frontMostElements;
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes;
@property (retain, nonatomic) UIScrollView *scrollViewCurrentlyBeingConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)initWithCollectionView:(id)arg1;
- (void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)restoreLayoutContentOffsetsFromEmbeddedScrollViews;
- (_Bool)isElementInOrthogonalScrollingSection:(id)arg1;
- (void)addElementIfNeeded:(id)arg1;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2;
- (void)performLayout;
- (_Bool)isIndexPathInOrthogonalScrollingSection:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)arg1;
- (id)_sectionScrollViewForIndexPath:(id)arg1;
- (id)_addSectionScrollViewForIndexPath:(id)arg1;
- (struct CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2;
- (void)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(struct UIEdgeInsets)arg3;
- (id)_sectionScrollViewForSection:(long long)arg1;
- (id)_addSectionScrollViewForSection:(long long)arg1;
- (void)_forceElementsOnTopAsNeeded;
- (id)_managedScrollViews;

@end
