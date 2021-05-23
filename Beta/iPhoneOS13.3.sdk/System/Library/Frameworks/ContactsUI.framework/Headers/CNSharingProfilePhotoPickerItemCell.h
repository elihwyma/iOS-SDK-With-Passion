/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, CNSharingProfilePhotoPickerItem, UIImageView;

__attribute__((visibility("hidden")))
@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell

{
    _Bool _isSmallScreen;
    CNSharingProfilePhotoPickerItem *_pickerItem;
    CAShapeLayer *_selectionStrokeLayer;
    UIImageView *_imageView;
    struct CGSize _originalSize;
}

@property (retain, nonatomic) CAShapeLayer *selectionStrokeLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize originalSize;
@property (nonatomic) _Bool isSmallScreen;
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *pickerItem;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)selectionBezierPath;
- (void)updateWithImage:(id)arg1;

@end
