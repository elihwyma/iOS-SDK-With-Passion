/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView

{
    _Bool _delegateRespondsToIndexPathForPreferredFocusedView;
    _TVCollectionViewFlowLayout *_gridFlowLayout;
}

@property (retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout;

- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;

@end
