/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface VUILibraryStackView : UIView

{
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) UICollectionView *collectionView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
