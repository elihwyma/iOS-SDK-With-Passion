/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMapTable, NSObject, NSString, SKUIGalleryPageComponent, SKUIMediaComponent, SKUIResourceLoader, UIPageControl, UIPageViewController, UITapGestureRecognizer;

@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGalleryViewController : UIViewController <Swift>

{
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    id <SKUIEmbeddedMediaViewDelegate> _embeddedMediaDelegate;
    SKUIGalleryPageComponent *_galleryComponent;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic, readonly) SKUIGalleryPageComponent *galleryComponent;
@property (weak, nonatomic) id <SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate;
@property (nonatomic, readonly) SKUIMediaComponent *selectedMediaComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_selectedViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)_newViewWithMediaComponent:(id)arg1;
- (void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3;
- (void)performActionForSelectedComponentAnimated:(_Bool)arg1;
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;
- (id)_newViewControllerWithIndex:(long long)arg1;
- (void)_startCycleTimer;
- (void)_stopCycleTimer;
- (void)_finishPaneAnimation;
- (void)_showNextPaneAnimated:(_Bool)arg1;

@end
