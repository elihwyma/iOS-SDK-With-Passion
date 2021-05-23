/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UIView;

@interface CAMImageWell : UIButton

{
    _Bool _scaledForInteraction;
    _Bool _thumbnailImageHidden;
    long long _layoutStyle;
    long long _cameraOrientation;
    UIView *__containerView;
    UIImageView *__thumbnailImageView;
    NSMutableArray *__dimmingViewQueue;
    UIImage *__thumbnailImage;
    UIImage *__placeholderImage;
    NSString *__uuid;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIImageView *_thumbnailImageView;
@property (nonatomic, readonly) NSMutableArray *_dimmingViewQueue;
@property (retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage;
@property (retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage;
@property (retain, nonatomic, setter=_setUuid:) NSString *_uuid;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long cameraOrientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (nonatomic, getter=isScaledForInteraction) _Bool scaledForInteraction;
@property (nonatomic, getter=isThumbnailImageHidden) _Bool thumbnailImageHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_updateForLayoutStyle;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(_Bool)arg3;
- (void)recoverFromFailedThumbnailUpdate;
- (void)setCameraOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setScaledForInteraction:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setThumbnailImage:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 scaledForInteraction:(_Bool)arg2;
- (void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)_updateThumbnailImageAnimated:(_Bool)arg1;
- (void)_removeFirstDimmingView;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;
- (id)_placeholderImageForLayoutStyle:(long long)arg1;
- (double)_cornerRadiusForLayoutStyle:(long long)arg1;

@end
