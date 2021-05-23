/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class NSString, SXAnimatedImageController, SXDragManager, SXImageView;

@protocol SXImageViewFactory, SXMediaSharingPolicyProvider;

@interface SXImageComponentView : SXMediaComponentView

{
    id <SXImageViewFactory> _imageViewFactory;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXImageView *_imageView;
    SXAnimatedImageController *_animatedImageController;
    SXDragManager *_dragManager;
}

@property (nonatomic, readonly) id <SXImageViewFactory> imageViewFactory;
@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (nonatomic, readonly) SXImageView *imageView;
@property (retain, nonatomic) SXAnimatedImageController *animatedImageController;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)discardContents;
- (struct CGRect)imageFrame;
- (id)imageResource;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)viewForDragManager:(id)arg1;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (unsigned long long)analyticsMediaType;
- (void)loadComponent:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)transitionContentView;
- (struct CGRect)transitionContentFrame;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (id)contentViewForBehavior:(id)arg1;
- (void)layoutImageView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 mediaSharingPolicyProvider:(id)arg8;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2;

@end
