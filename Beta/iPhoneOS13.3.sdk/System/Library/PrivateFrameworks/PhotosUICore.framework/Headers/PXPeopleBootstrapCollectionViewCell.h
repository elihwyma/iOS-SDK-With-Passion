/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIImage, UIImageView, UIView;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell

{
    _Bool _confirmed;
    _Bool _isMergeCandidate;
    _Bool _isVerified;
    unsigned long long _presentationStatus;
    PXPersonImageRequest *_imageRequest;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIView *_selectedCheckmarkView;
    UIView *_unselectedCheckmarkView;
    UIImageView *_badgeView;
    UIImageView *_imageView;
    struct CGSize _checkmarkImageSize;
}

@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic, readonly) UIView *selectedCheckmarkView;
@property (nonatomic, readonly) UIView *unselectedCheckmarkView;
@property (nonatomic, readonly) UIImageView *badgeView;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) struct CGSize checkmarkImageSize;
@property (nonatomic) _Bool confirmed;
@property (nonatomic) unsigned long long presentationStatus;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool isMergeCandidate;
@property (nonatomic) _Bool isVerified;

+ (id)cloudErrorBadgeImage;

- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_isRTL;
- (void)_updateCellSizing;

@end
