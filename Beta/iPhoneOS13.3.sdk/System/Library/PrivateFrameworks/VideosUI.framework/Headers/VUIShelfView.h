/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface VUIShelfView : UIView

{
    UIView *_headerView;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
