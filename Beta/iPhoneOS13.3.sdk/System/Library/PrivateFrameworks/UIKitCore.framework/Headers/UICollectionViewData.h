/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewLayout;

__attribute__((visibility("hidden")))
@interface UICollectionViewData : NSObject

{
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect _validLayoutRect;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize _contentSize;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    struct {
        unsigned int contentSizeIsValid:1;
        unsigned int itemCountsAreValid:1;
        unsigned int layoutIsPreparing:1;
        unsigned int layoutIsPrepared:1;
        unsigned int layoutLocked:1;
    } _collectionViewDataFlags;
    struct vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *>> _globalItems;
    struct vector<long, std::__1::allocator<long>> _sectionItemCounts;
}

@property (nonatomic, readonly) _Bool layoutIsPrepared;
@property (nonatomic, getter=isLayoutLocked) _Bool layoutLocked;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic, readonly) NSArray *clonedCellAttributes;
@property (nonatomic, readonly) NSArray *clonedSupplementaryAttributes;
@property (nonatomic, readonly) NSArray *clonedDecorationAttributes;

+ (void)initialize;

- (void)invalidate:(_Bool)arg1;
- (id).cxx_construct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfItems;
- (_Bool)dataSourceMatchesCurrentCounts;
- (struct CGRect)collectionViewContentRect;
- (id)layoutAttributesForCellsInRect:(struct CGRect)arg1 validateLayout:(_Bool)arg2;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)validateLayoutInRect:(struct CGRect)arg1;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;
- (void)_prepareToLoadData;
- (long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1;
- (_Bool)isIndexPathValid:(id)arg1;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtGlobalIndex:(long long)arg1;
- (id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1;
- (long long)globalIndexForItemAtIndexPath:(id)arg1;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)arg1;
- (id)layoutAttributesForGlobalItemIndex:(long long)arg1;
- (id)existingSupplementaryLayoutAttributes;
- (struct CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)_updateItemCounts;
- (void)_validateItemCounts;
- (void)_validateContentSize;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (void)validateSupplementaryViews;
- (void)validateDecorationViews;
- (_Bool)isIndexPathValid:(id)arg1 validateItemCounts:(_Bool)arg2;
- (_Bool)isGlobalIndexValid:(long long)arg1;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (id)_layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)_loadEverything;
- (struct CGRect)rectForGlobalItemIndex:(long long)arg1;
- (id)layoutAttributesForElementsInSection:(long long)arg1;

@end
