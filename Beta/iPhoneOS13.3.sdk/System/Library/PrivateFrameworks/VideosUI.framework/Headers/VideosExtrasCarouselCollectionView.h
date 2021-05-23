/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionView.h>

@protocol VideosExtrasCarouselCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionView : UICollectionView

{
    id <VideosExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;
}

@property (weak, nonatomic) id <VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;

- (void)didAddSubview:(id)arg1;

@end
