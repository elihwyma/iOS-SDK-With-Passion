/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class AVTMSStickerView, NSUUID, UIImageView;

@protocol AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTStickerCollectionViewCell : UICollectionViewCell

{
    _Bool _stickerViewIsAnimating;
    NSUUID *_displaySessionUUID;
    id <AVTStickerCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    AVTMSStickerView *_stickerView;
    struct CGSize _fullImageSize;
    struct CGRect _clippingRect;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) AVTMSStickerView *stickerView;
@property (nonatomic) _Bool stickerViewIsAnimating;
@property (nonatomic) struct CGSize fullImageSize;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) _Bool allowsPeel;
@property (nonatomic) struct CGRect clippingRect;
@property (weak, nonatomic) id <AVTStickerCollectionViewCellDelegate> delegate;
@property (weak, nonatomic) id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;

+ (id)cellIdentifier;
+ (double)imageInsetForWidth:(double)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithImage:(id)arg1 sticker:(id)arg2 animated:(_Bool)arg3;
- (struct CGRect)stickerViewFrameForImageSize:(struct CGSize)arg1 clippingRect:(struct CGRect)arg2;
- (struct CGSize)imageSizeFromURL:(id)arg1;
- (void)stickerViewDidBeginPeel:(id)arg1;
- (void)stickerViewWasTapped:(id)arg1;

@end
