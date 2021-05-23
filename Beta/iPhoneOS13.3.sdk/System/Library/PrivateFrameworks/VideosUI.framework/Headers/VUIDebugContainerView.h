/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface VUIDebugContainerView : UIView

{
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) UICollectionView *collectionView;

- (void)layoutSubviews;

@end
