/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/_UICollectionViewCompositionLayout.h>

@class NSArray, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout

{
    NSString *_backdropGroupName;
    NSArray *_indexPathsForGradientItems;
    NSMutableArray *_orderedSublayouts;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (nonatomic) _Bool rendersWithParallax;
@property (nonatomic) _Bool rendersWithPerspective;

- (id)init;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)sublayouts;
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)removeSublayout:(id)arg1;
- (id)_newStorePageCollectionViewLayout;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;

@end
