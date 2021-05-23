/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray;

@protocol ICDocCamThumbnailViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout

{
    _Bool _transitioning;
    _Bool _compactLayout;
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;
    NSDictionary *_layoutInfo;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    struct CGSize _itemSize;
}

@property (retain, nonatomic) NSDictionary *layoutInfo;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (nonatomic) _Bool compactLayout;
@property (nonatomic) struct CGSize itemSize;
@property (weak, nonatomic) id <ICDocCamThumbnailViewLayoutDelegate> delegate;
@property (nonatomic) _Bool transitioning;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeLayoutTransition;
- (void)setup;
- (void)prepareLayout:(_Bool)arg1;
- (struct CGSize)frameSizeForImageSize:(struct CGSize)arg1;
- (struct CGRect)compactFrameForThumbnailAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGRect)frameForThumbnailAtIndexPath:(id)arg1;

@end
