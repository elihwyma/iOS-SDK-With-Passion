/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditEffectCell : UICollectionViewCell

{
    NSLayoutConstraint *_bottomLabelConstraint;
    NSLayoutConstraint *_gapConstraint;
    NSArray *_constraints;
    UIImage *_image;
    NSString *_name;
    UIImageView *__imageView;
    UILabel *__nameLabel;
    UIView *__highlightView;
    UIImageView *__selectionView;
}

@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic, setter=_setNameLabel:) UILabel *_nameLabel;
@property (retain, nonatomic, setter=_setHighlightView:) UIView *_highlightView;
@property (retain, nonatomic, setter=_setSelectionView:) UIImageView *_selectionView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;

+ (id)selectionOutlineImage;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_colorForIsSelected:(_Bool)arg1;
- (void)_setSubview:(id)arg1 visible:(_Bool)arg2 animated:(_Bool)arg3;

@end
