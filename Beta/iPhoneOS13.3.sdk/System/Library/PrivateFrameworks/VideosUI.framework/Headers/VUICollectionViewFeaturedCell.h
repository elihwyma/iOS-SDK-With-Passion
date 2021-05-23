/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class IKViewElement, TVImageLayout, VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : UICollectionViewCell

{
    VUICollectionViewFeaturedView *_featuredView;
    TVImageLayout *_imageLayout;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) VUICollectionViewFeaturedView *featuredView;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) IKViewElement *viewElement;

+ (struct CGSize)lockupSizeForElement:(id)arg1;
+ (id)featuredCellWithElement:(id)arg1 existingCell:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

@end
