/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, PXRoundedCornerOverlayView, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;

@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell

{
    struct CGRect _unitRect;
    _Bool _titleUsesAllCaps;
    _Bool _favorite;
    _Bool _isReordering;
    _Bool _ppt_fullImageLoaded;
    _Bool _blurApplied;
    UIImageView *_avatarView;
    NSString *_name;
    double _textAlpha;
    unsigned long long _selectionStyle;
    id <PXPeopleCollectionViewCellDelegate> _delegate;
    UILabel *_nameLabel;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIButton *_favoriteBadge;
    UIView *_highlightOverlayView;
    UIView *_checkmarkView;
    UIView *_gradientView;
    UIImageView *_mirrorView;
    UIVisualEffectView *_blurView;
    struct CGSize _avatarSize;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (retain, nonatomic) UIButton *favoriteBadge;
@property (retain, nonatomic) UIView *highlightOverlayView;
@property (retain, nonatomic) UIView *checkmarkView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIImageView *mirrorView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) _Bool blurApplied;
@property (nonatomic) struct CGSize avatarSize;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double textAlpha;
@property (nonatomic) _Bool titleUsesAllCaps;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, setter=setReordering:) _Bool isReordering;
@property (nonatomic) unsigned long long selectionStyle;
@property (weak, nonatomic) id <PXPeopleCollectionViewCellDelegate> delegate;
@property (nonatomic) _Bool ppt_fullImageLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)_updateType;
- (long long)_preferredSizeClass;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;
- (struct CGSize)_avatarSizeForImageSize:(struct CGSize)arg1;
- (void)_favoriteBadgePressed:(id)arg1;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (id)_stretchableGradientImageWithSize:(struct CGSize)arg1 scale:(double)arg2 gradientColor:(id)arg3;

@end
