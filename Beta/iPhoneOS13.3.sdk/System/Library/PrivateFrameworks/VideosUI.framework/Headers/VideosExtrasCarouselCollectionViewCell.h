/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, NSString, UILabel, UIPinchGestureRecognizer, UIView, VideosExtrasConstrainedArtworkContainerView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell

{
    _Bool _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    VideosExtrasConstrainedArtworkContainerView *_thumbnailImageContainerView;
    NSLayoutConstraint *_thumbnailImageContainerViewHeightConstraint;
    NSArray *_thumbnailImageContainerViewConstraints;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLabelBaselineConstraint;
    UIView *_textContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    unsigned long long _itemIndex;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSString *_zoomingImageTransitionIdentifier;
    struct CGSize _windowSize;
}

@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *thumbnailImageContainerView;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint;
@property (retain, nonatomic) NSArray *thumbnailImageContainerViewConstraints;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) _Bool allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier;
@property (nonatomic) struct CGSize windowSize;
@property (nonatomic, readonly) double thumbnailImageContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
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
- (id)descriptionTextStyle;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)_updateThumbnailArtworkViewBorder;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg1;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailMaxSize;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (id)thumbnailImagePlaceholder;
- (id)thumbnailImageAccessibilityText;
- (id)lockupElement;
- (double)_descriptionLabelTopInset;

@end
