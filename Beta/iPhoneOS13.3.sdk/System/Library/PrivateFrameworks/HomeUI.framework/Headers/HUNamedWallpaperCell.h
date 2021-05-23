/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

@interface HUNamedWallpaperCell : UICollectionViewCell

{
    long long _contentMode;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long contentMode;

- (id)initWithFrame:(struct CGRect)arg1;

@end
