/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVCollectionView.h>

@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView

{
    _TVShelfViewLayout *_shelfFlowLayout;
}

@property (retain, nonatomic) _TVShelfViewLayout *shelfFlowLayout;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;
- (struct UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1;
- (struct CGRect)tv_augmentedSelectionFrameForFrame:(struct CGRect)arg1;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateLayoutForFocusedView:(id)arg1;

@end
