/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView, VideosExtrasZoomableImageView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageViewController : UIViewController <Swift>

{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    _Bool _overlayHidden;
    unsigned long long _imageIndex;
    NSString *_zoomingImageTransitionIdentifier;
    UIActivityIndicatorView *_activityIndicatorView;
    VideosExtrasZoomableImageView *_zoomableImageView;
    NSArray *_gestureRecognizers;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) VideosExtrasZoomableImageView *zoomableImageView;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (retain, nonatomic) UIView *textContainmentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint;
@property (nonatomic) _Bool overlayHidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *subtitleString;
@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (nonatomic) unsigned long long imageIndex;
@property (nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition;
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)updateViewConstraints;
- (void)_handlePinch:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;

@end
