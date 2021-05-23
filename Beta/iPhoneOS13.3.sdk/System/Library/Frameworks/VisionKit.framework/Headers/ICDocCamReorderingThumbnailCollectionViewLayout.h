/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableArray, NSString;

@protocol ICDocCamThumbnailViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout

{
    _Bool _movingItem;
    _Bool _isScrollingBetweenPages;
    _Bool _isScrubbing;
    _Bool _isUndergoingOrientationChange;
    _Bool _layoutCacheIsValid;
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;
    double _itemSpacing;
    double _topBottomMargins;
    double _leftMargin;
    double _rightMargin;
    double _itemHeight;
    NSArray *_itemAttributes;
    NSMutableArray *_imageSizeCache;
    unsigned long long _currentItem;
    double _currentInterPageScrollPosition;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    struct CGSize _cachedContentSize;
}

@property (nonatomic) double itemSpacing;
@property (nonatomic) double topBottomMargins;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemHeight;
@property (nonatomic) _Bool layoutCacheIsValid;
@property (nonatomic) struct CGSize cachedContentSize;
@property (copy, nonatomic) NSArray *itemAttributes;
@property (retain, nonatomic) NSMutableArray *imageSizeCache;
@property (nonatomic) unsigned long long currentItem;
@property (nonatomic) double currentInterPageScrollPosition;
@property (nonatomic, readonly) double extraSpacingForCurrentItem;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (weak, nonatomic, readonly) id <ICDocCamThumbnailViewLayoutDelegate> delegate;
@property (nonatomic) _Bool movingItem;
@property (nonatomic) _Bool isScrollingBetweenPages;
@property (nonatomic) _Bool isScrubbing;
@property (nonatomic) _Bool isUndergoingOrientationChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)effectiveAspectRatioForSize:(struct CGSize)arg1;

- (id)initWithDelegate:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)itemSizeForImageSize:(struct CGSize)arg1;
- (void)setInterPageScrollPosition:(double)arg1;
- (void)setCurrentItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateLayoutCacheIfNecessary;
- (void)setContentOffsetForItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)arg1;
- (double)horizontalContentOffsetForItem:(unsigned long long)arg1;

@end
