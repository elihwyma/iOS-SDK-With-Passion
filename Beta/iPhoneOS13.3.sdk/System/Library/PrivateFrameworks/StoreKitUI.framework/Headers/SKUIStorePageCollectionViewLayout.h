/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, NSIndexSet, NSMapTable, NSString, UIColor;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout

{
    NSString *_backdropGroupName;
    UIColor *_collectionViewBackgroundColor;
    _Bool _hasValidGradientIndexPaths;
    _Bool _hasValidIndexPathsForPinningItems;
    _Bool _hasValidPinnedBackdropViewStyle;
    _Bool _hasValidPinningLayoutInformation;
    long long _inLayoutAttributesForElementsCount;
    NSMapTable *_indexPathToItemPinningConfiguration;
    NSMapTable *_indexPathToPinningLayoutInformation;
    NSArray *_indexPathsForGradientItems;
    NSArray *_indexPathsForPinningItems;
    double _overrideContentWidth;
    long long _pinnedBackdropViewStyle;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    struct {
        unsigned int respondsToIndexPathsForPinningItems:1;
        unsigned int respondsToPinningContentInsetForItemAtIndexPath:1;
        unsigned int respondsToPinningStyleForItemAtIndexPath:1;
        unsigned int respondsToPinningGroupForItemAtIndexPath:1;
        unsigned int respondsToPinningTransitionStyleForItemAtIndexPath:1;
        unsigned int respondsToWillApplyLayoutAttributes:1;
    } _collectionViewDelegateFlags;
    NSArray *_updateItems;
    _Bool _allowsPinningTransitions;
    NSIndexSet *_expandChildPageSectionsIndexSet;
}

@property (nonatomic) _Bool allowsPinningTransitions;
@property (nonatomic) double overrideContentWidth;
@property (copy, nonatomic) NSIndexSet *expandChildPageSectionsIndexSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (nonatomic) _Bool rendersWithParallax;
@property (nonatomic) _Bool rendersWithPerspective;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)_indexPathsForPinningItems;
- (id)_getCollectionViewUpdateItemForItemFromIndex:(long long)arg1 initalLayout:(_Bool)arg2;
- (void)_invalidatePinningLayoutInformation;
- (id)_itemPinningConfigurationForItemAtIndexPath:(id)arg1;
- (id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg1;
- (id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg1 pinningConfiguration:(id)arg2 layoutInformation:(id)arg3;
- (void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect)arg1 toArray:(id)arg2;
- (void)_configureCellLayoutAttributes:(id)arg1 forItemWithPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 allowPinning:(_Bool)arg5 returningIsPinning:(out _Bool *)arg6;
- (_Bool)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (id)_indexPathsForBackgroundGradients;
- (id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)arg1 currentAttributes:(id)arg2;
- (void)_alginCellsToTop:(id)arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1;
- (struct CGRect)_pinningFrameForStartingFrame:(struct CGRect)arg1 itemPinningConfiguration:(id)arg2 atIndexPath:(id)arg3;
- (long long)_pinningStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct UIEdgeInsets)_pinningContentInsetForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinningGroupForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)_targetFrameForStartingFrame:(struct CGRect)arg1 itemPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 returningIsPinning:(out _Bool *)arg5;
- (void)_calculatePinningLayoutInformation;
- (long long)_pinningTransitionStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinnedBackdropViewStyle;

@end
