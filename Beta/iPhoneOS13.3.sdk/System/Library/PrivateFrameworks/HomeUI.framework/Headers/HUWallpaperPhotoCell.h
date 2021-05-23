/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIStackView, UIView;

@protocol HUWallpaperPhotoCellDelegate;

@interface HUWallpaperPhotoCell : UICollectionViewCell

{
    _Bool _busy;
    _Bool _empty;
    _Bool _removable;
    _Bool _showBorder;
    NSString *_assetIdentifier;
    double _cornerRadius;
    long long _contentMode;
    id <HUWallpaperPhotoCellDelegate> _delegate;
    UIImageView *_imageView;
    UIActivityIndicatorView *_spinnerView;
    UIView *_selectionOverlayView;
    UIButton *_deleteButton;
    UILabel *_choosePhotoLabel;
    UIStackView *_stackView;
    CAShapeLayer *_borderLayer;
    NSLayoutConstraint *_imageWidthConstraint;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) UIView *selectionOverlayView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *choosePhotoLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool busy;
@property (nonatomic) _Bool empty;
@property (nonatomic) _Bool removable;
@property (nonatomic) _Bool showBorder;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id <HUWallpaperPhotoCellDelegate> delegate;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateView;
- (void)deleteButtonPressed;
- (void)showBorder:(_Bool)arg1 animated:(_Bool)arg2;

@end
