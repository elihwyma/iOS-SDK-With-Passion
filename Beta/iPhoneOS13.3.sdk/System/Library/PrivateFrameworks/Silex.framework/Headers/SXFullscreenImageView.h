/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXImageView, UIActivityIndicatorView, UIScrollView, UITapGestureRecognizer;

@protocol SXFullscreenImageViewDelegate;

@interface SXFullscreenImageView : UIView <Swift>

{
    _Bool _isZooming;
    id <SXFullscreenImageViewDelegate> _delegate;
    SXImageView *_contentView;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    unsigned long long _viewIndex;
    unsigned long long _activeGestureCount;
    double _currentScale;
    UIActivityIndicatorView *_activityIndicator;
    struct CGPoint _currentTranslation;
    struct CGRect _contentViewFrame;
}

@property (retain, nonatomic) SXImageView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic) _Bool isZooming;
@property (nonatomic) unsigned long long activeGestureCount;
@property (nonatomic) struct CGPoint currentTranslation;
@property (nonatomic) double currentScale;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id <SXFullscreenImageViewDelegate> delegate;
@property (nonatomic) struct CGRect contentViewFrame;
@property (nonatomic, readonly) unsigned long long viewIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setup;
- (void)handleDoubleTap:(id)arg1;
- (void)setupGestures;
- (id)initWithContentView:(id)arg1 viewIndex:(unsigned long long)arg2;
- (void)showLoadingIndicator:(_Bool)arg1;
- (_Bool)allowsDismissal;

@end
