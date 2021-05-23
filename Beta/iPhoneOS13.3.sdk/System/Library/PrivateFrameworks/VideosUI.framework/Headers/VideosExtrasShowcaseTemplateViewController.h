/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class IKShowcaseTemplate, NSArray, NSDictionary, NSString, VideosExtrasCarouselViewController, VideosExtrasImageBrowserViewController, VideosExtrasZoomingImageTransitionController;

__attribute__((visibility("hidden")))
@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <Swift>

{
    _Bool _supportsOneupMode;
    VideosExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    VideosExtrasCarouselViewController *_carouselViewController;
    VideosExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    unsigned long long _autohighlightIndex;
}

@property (retain, nonatomic) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController;
@property (retain, nonatomic) NSArray *bannerButtonElements;
@property (retain, nonatomic) NSArray *carouselLockupElements;
@property (retain, nonatomic) VideosExtrasCarouselViewController *carouselViewController;
@property (retain, nonatomic) VideosExtrasImageBrowserViewController *imageBrowserViewController;
@property (retain, nonatomic) NSDictionary *overriddenFullscreenImages;
@property (nonatomic) _Bool supportsOneupMode;
@property (nonatomic) unsigned long long autohighlightIndex;
@property (nonatomic, readonly) IKShowcaseTemplate *templateElement;
@property (nonatomic, readonly) unsigned long long indexOfVisibleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)showsPlaceholder;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (void)_prepareLayout;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
- (unsigned long long)carouselSize;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (id)_mainChildViewController;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
