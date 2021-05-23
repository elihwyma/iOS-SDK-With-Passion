/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UICollectionView.h>

@interface JTCollectionView : UICollectionView

{
    _Bool _inLayout;
    struct CGSize _lastCollectionViewSize;
}

@property (nonatomic) struct CGSize lastCollectionViewSize;
@property (nonatomic) _Bool inLayout;

- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (long long)selectedItem;
- (_Bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)firstVisibleIndexPath;
- (id)sortedIndexPathsForVisibleItems;
- (id)visibleSections;

@end
