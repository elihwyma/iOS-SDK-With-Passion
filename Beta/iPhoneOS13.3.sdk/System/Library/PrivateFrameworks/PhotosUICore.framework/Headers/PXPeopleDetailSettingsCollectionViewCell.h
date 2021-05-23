/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class NSNumberFormatter, NSString, PXRoundedCornerOverlayView, UIImage, UIImageView, UILabel, UIView;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell

{
    NSNumberFormatter *_quantityNumberFormatter;
    struct CGRect _unitRect;
    _Bool _isFavorite;
    _Bool _isReordering;
    UIImageView *_avatarView;
    NSString *_name;
    unsigned long long _photoQuantity;
    double _textAlpha;
    UILabel *_quantityLabel;
    UILabel *_nameLabel;
    UIView *_actionIndicatorView;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *actionIndicatorView;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long photoQuantity;
@property (nonatomic, getter=isActionIndicatorHidden) _Bool actionIndicatorHidden;
@property (nonatomic) double textAlpha;
@property (nonatomic) _Bool isFavorite;
@property (retain, nonatomic) UILabel *quantityLabel;
@property (nonatomic, setter=setReordering:) _Bool isReordering;

+ (double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(_Bool)arg4;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)_updateType;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (long long)_preferredSizeClass;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;
- (double)avatarCenterYOffset;
- (struct UIColor *)_placeHolderColor;

@end
