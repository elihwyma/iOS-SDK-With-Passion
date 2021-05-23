/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class IKSlideshowElement, NSArray, NSString, UITapGestureRecognizer, VideosExtrasSlideshowViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <Swift>

{
    _Bool _overlayHidden;
    _Bool _preventNavbarAutohide;
    VideosExtrasSlideshowViewController *_slideshowViewController;
    NSArray *_imageElements;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) NSArray *imageElements;
@property (retain, nonatomic) VideosExtrasSlideshowViewController *slideshowViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) IKSlideshowElement *templateElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)_handleTap:(id)arg1;
- (_Bool)showsPlaceholder;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1;
- (void)_toggleVisibilityOfNavigationBar;
- (void)_firstImageLoadedHideNavigationBar;
- (_Bool)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2;

@end
