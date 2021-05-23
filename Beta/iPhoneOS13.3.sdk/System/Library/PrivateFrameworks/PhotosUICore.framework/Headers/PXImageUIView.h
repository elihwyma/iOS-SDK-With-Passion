/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, PXFocusableUIImageView, PXImageViewSpec, PXRoundedCornerOverlayView, UIImage;

@interface PXImageUIView : UIView

{
    NSMutableArray *_overlayViews;
    UIView *_floatingOverlayView;
    struct UIEdgeInsets _floatingInsets;
    _Bool _hasParallax;
    unsigned long long _animationFlags;
    UIView *_snapshotView;
    _Bool _floatingViewEnabled;
    _Bool _animating;
    _Bool _floatingRotationEnabled;
    UIImage *_image;
    PXImageViewSpec *_spec;
    UIView *_contentView;
    long long _contentMode;
    PXFocusableUIImageView *__imageView;
    PXRoundedCornerOverlayView *__cornerView;
    NSArray *__overlaySpecs;
    struct CGRect _contentsRect;
}

@property (nonatomic, readonly) PXFocusableUIImageView *_imageView;
@property (retain, nonatomic, setter=_setCornerView:) PXRoundedCornerOverlayView *_cornerView;
@property (copy, nonatomic, setter=_setOverlaySpecs:) NSArray *_overlaySpecs;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PXImageViewSpec *spec;
@property (nonatomic) _Bool floatingViewEnabled;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) _Bool allowsFocus;
@property (nonatomic) long long contentMode;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic, getter=isFloatingRotationEnabled) _Bool floatingRotationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect contentsRect;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateCorners;
- (void)_PXImageUIViewInitialization;
- (void)setFloatingOverlay:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 parallax:(_Bool)arg3;
- (void)_updateFloatingOverlay;
- (void)_updateSubviewsOrdering;
- (void)setAnimating:(_Bool)arg1 withFlags:(unsigned long long)arg2;

@end
