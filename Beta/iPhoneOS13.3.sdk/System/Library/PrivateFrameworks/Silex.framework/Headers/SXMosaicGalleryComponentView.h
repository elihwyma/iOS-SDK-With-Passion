/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXGalleryComponentView.h>

@class NSMutableArray, NSMutableSet, NSString, SXFullscreenCanvasController, SXMediaViewEvent, SXMosaicGalleryLayouter, UIView;

@protocol SXGalleryItemImageViewFactory;

@interface SXMosaicGalleryComponentView : SXGalleryComponentView

{
    _Bool _loadedAtleastOneImage;
    id <SXGalleryItemImageViewFactory> _imageViewFactory;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    UIView *_galleryView;
    NSMutableArray *_imageViews;
    NSMutableArray *_visibleImageViews;
    SXMediaViewEvent *_mediaViewEvent;
    SXMosaicGalleryLayouter *_galleryLayouter;
    NSMutableSet *_exposedGalleryItems;
}

@property (nonatomic, readonly) id <SXGalleryItemImageViewFactory> imageViewFactory;
@property (nonatomic, readonly) SXFullscreenCanvasController *fullScreenCanvasController;
@property (retain, nonatomic) UIView *galleryView;
@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (nonatomic, readonly) NSMutableArray *visibleImageViews;
@property (retain, nonatomic) SXMediaViewEvent *mediaViewEvent;
@property (nonatomic) _Bool loadedAtleastOneImage;
@property (retain, nonatomic) SXMosaicGalleryLayouter *galleryLayouter;
@property (retain, nonatomic) NSMutableSet *exposedGalleryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)discardContents;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (id)imageViewForLocation:(struct CGPoint)arg1;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)textResizerForCaption:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)renderContentsInDrawableRect;
- (void)visibleBoundsChanged;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)finishMediaViewEvent;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (void)submitEvents;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (_Bool)allowHierarchyRemoval;
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (_Bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
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
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsGalleryType;
- (_Bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;

@end
