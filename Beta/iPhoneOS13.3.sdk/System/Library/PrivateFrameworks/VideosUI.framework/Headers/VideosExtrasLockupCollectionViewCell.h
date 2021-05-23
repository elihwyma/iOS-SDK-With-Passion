/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class IKLockupElement, NSLayoutConstraint, NSString, UILabel, UIPinchGestureRecognizer, UIView, VideosExtrasConstrainedArtworkContainerView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell

{
    struct CGSize _artworkSize;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    unsigned long long _itemIndex;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_descriptionBaselineConstraint;
    NSString *_zoomingImageTransitionIdentifier;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    _Bool _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    IKLockupElement *_lockup;
}

@property (weak, nonatomic) IKLockupElement *lockup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)subtitleText;
- (void)setSubtitleText:(id)arg1;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (id)titleTextStyle;
- (id)subtitleTextStyle;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)descriptionTextStyle;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailMaxSize;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(_Bool)arg1;

@end
