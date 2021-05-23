/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class NSString, SXDragManager, SXFullscreenCanvasController, SXImageResource, SXImageView, SXMediaViewEvent, UIView;

@protocol SXFullscreenCanvasControllerFactory, SXImageViewFactory, SXMediaSharingPolicyProvider;

@interface SXScalableImageComponentView : SXMediaComponentView

{
    id <SXImageViewFactory> _imageViewFactory;
    id <SXFullscreenCanvasControllerFactory> _canvasControllerFactory;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXDragManager *_dragManager;
    SXImageView *_imageView;
    SXImageResource *_imageResource;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    SXMediaViewEvent *_activeViewEvent;
    UIView *_gestureView;
    struct CGRect _previousContentFrame;
}

@property (nonatomic, readonly) id <SXImageViewFactory> imageViewFactory;
@property (nonatomic, readonly) id <SXFullscreenCanvasControllerFactory> canvasControllerFactory;
@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (nonatomic, readonly) SXImageView *imageView;
@property (retain, nonatomic) SXImageResource *imageResource;
@property (retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController;
@property (retain, nonatomic) SXMediaViewEvent *activeViewEvent;
@property (nonatomic) struct CGRect previousContentFrame;
@property (weak, nonatomic) UIView *gestureView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)discardContents;
- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (_Bool)gestureShouldBegin:(id)arg1;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (id)viewForDragManager:(id)arg1;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)textResizerForCaption:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)finishMediaViewEvent;
- (void)submitEvents;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id)arg3;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect)fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (struct CGRect)fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (_Bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (unsigned long long)analyticsMediaType;
- (void)loadComponent:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)transitionContentView;
- (struct CGRect)transitionContentFrame;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (void)layoutImageView;
- (void)createMediaViewEvent;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 mediaSharingPolicyProvider:(id)arg9;

@end
