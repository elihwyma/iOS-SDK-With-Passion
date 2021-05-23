/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface _VUISeasonPickerView : UIView

{
    UICollectionView *_collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
