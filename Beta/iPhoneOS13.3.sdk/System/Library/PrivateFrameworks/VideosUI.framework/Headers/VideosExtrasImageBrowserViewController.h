/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString, UIPageViewController;

@protocol VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasImageBrowserViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageBrowserViewController : UIViewController <Swift>

{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    id <VideosExtrasImageBrowserViewControllerDataSource> _dataSource;
    id <VideosExtrasImageBrowserViewControllerDelegate> _delegate;
    id <VideosExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;
    unsigned long long _visibleImageIndex;
    UIPageViewController *_pageViewController;
}

@property (retain, nonatomic) UIPageViewController *pageViewController;
@property (weak, nonatomic) id <VideosExtrasImageBrowserViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <VideosExtrasImageBrowserViewControllerDelegate> delegate;
@property (weak, nonatomic) id <VideosExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource;
@property (nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition;
@property (nonatomic) unsigned long long visibleImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_updateTitle;
- (unsigned long long)_numberOfImages;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (void)_removePageViewController;
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;
- (id)_imageViewControllerAtIndex:(unsigned long long)arg1;
- (id)_visibleImageViewController;
- (void)_updatePageViewController;

@end
