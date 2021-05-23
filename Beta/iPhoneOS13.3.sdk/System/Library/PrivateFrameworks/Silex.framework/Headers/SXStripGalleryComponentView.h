/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXGalleryComponentView.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SXFullscreenCanvasController, SXImageView, SXItemizedScrollView, SXMediaViewEvent, UIView;

@protocol SXFullscreenCanvasControllerFactory, SXImageViewFactory;

@interface SXStripGalleryComponentView : SXGalleryComponentView

{
    _Bool _loadedAtleastOneImage;
    id <SXImageViewFactory> _imageViewFactory;
    id <SXFullscreenCanvasControllerFactory> _canvasControllerFactory;
    double _xOffset;
    double _rightContentInset;
    NSArray *_imageResources;
    NSMutableArray *_imageViews;
    SXItemizedScrollView *_itemizedScrollView;
    long long _visibleImageViewIndex;
    UIView *_fullscreenGestureView;
    SXFullscreenCanvasController *_fullScreenCanvasController;
    SXMediaViewEvent *_mediaViewEvent;
    double _contentOffset;
    double _contentWidth;
    unsigned long long _lastPreloadViewIndex;
    SXImageView *_targetGalleryItem;
    NSMutableSet *_exposedGalleryItems;
}

@property (nonatomic, readonly) id <SXImageViewFactory> imageViewFactory;
@property (nonatomic, readonly) id <SXFullscreenCanvasControllerFactory> canvasControllerFactory;
@property (nonatomic, readonly) double xOffset;
@property (nonatomic, readonly) double rightContentInset;
@property (retain, nonatomic) NSArray *imageResources;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) SXItemizedScrollView *itemizedScrollView;
@property (nonatomic) long long visibleImageViewIndex;
@property (weak, nonatomic) UIView *fullscreenGestureView;
@property (retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController;
@property (retain, nonatomic) SXMediaViewEvent *mediaViewEvent;
@property (nonatomic) _Bool loadedAtleastOneImage;
@property (nonatomic, readonly) double contentOffset;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) unsigned long long lastPreloadViewIndex;
@property (retain, nonatomic) SXImageView *targetGalleryItem;
@property (retain, nonatomic) NSMutableSet *exposedGalleryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)discardContents;
- (id)hostingView;
- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (_Bool)gestureShouldBegin:(id)arg1;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (id)imageViewForLocation:(struct CGPoint)arg1;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)textResizerForCaption:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)finishMediaViewEvent;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (void)submitEvents;
- (void)willSubmitMediaExposureEvent:(id)arg1;
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
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsGalleryType;
- (void)loadComponent:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)transitionContentView;
- (struct CGRect)transitionVisibleFrame;
- (struct CGRect)transitionContentFrame;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
- (struct CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (_Bool)itemizedScrollViewWillReindex:(id)arg1;
- (_Bool)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2;
- (double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (id)createViewForViewIndex:(unsigned long long)arg1;
- (void)preloadAdjacentViewsForIndex:(unsigned long long)arg1;
- (void)trackExposedGalleryItems;
- (struct CGRect)snapRegion;
- (id)visibleGalleryItemViewForImageIdentifier:(id)arg1;
- (id)fullScreenCanvasController:(id)arg1 copyViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;

@end
