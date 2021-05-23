/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface HUWallpaperPhotoCollectionCell : UITableViewCell

{
    UIImageView *_imageThumbnailView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_imageSizeConstraints;
    NSArray *_horizontalConstraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) UIImageView *imageThumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *imageSizeConstraints;
@property (retain, nonatomic) NSArray *horizontalConstraints;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) struct CGSize imageSize;

- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
