/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewFlowLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXGadgetSpec;

@protocol PXGadgetCollectionViewLayoutDelegate;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <Swift>

{
    _Bool _pagingEnabled;
    _Bool _isPageFullColumnnWidth;
    PXGadgetSpec *_spec;
    id <PXGadgetCollectionViewLayoutDelegate> _delegate;
    long long _pageSizeClass;
    double _columnWidth;
    double _interSectionSpacing;
}

@property (retain, nonatomic) PXGadgetSpec *spec;
@property (weak, nonatomic) id <PXGadgetCollectionViewLayoutDelegate> delegate;
@property (nonatomic) _Bool pagingEnabled;
@property (nonatomic) long long pageSizeClass;
@property (nonatomic) _Bool isPageFullColumnnWidth;
@property (nonatomic) double columnWidth;
@property (nonatomic) double interSectionSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)_gadgetForSection:(long long)arg1;
- (id)_titleForGadget:(id)arg1;
- (unsigned long long)_buttonTypeForGadget:(id)arg1;
- (_Bool)_hasButtonForGadget:(id)arg1;
- (_Bool)_shouldShowSectionHeaderForGadget:(id)arg1;
- (unsigned long long)_sectionHeaderStyleForGadget:(id)arg1;

@end
