/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, UIPageViewController;

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    NSMutableDictionary *_itemViewControllersCache;
    _Bool _overlayVisible;
    _Bool _shouldCancelDelayedOverlayVisibilityChange;
    _Bool _overlayVisibilityWillChangeWithDelay;
    _Bool _lockOverlayControlsVisible;
    struct {
        long long style;
        _Bool hidden;
    } _savedStatusBarState;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    id <SKUISlideshowViewControllerDelegate> _delegate;
    long long _currentIndex;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUISlideshowViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <SKUISlideshowViewControllerDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForDismissedController:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;
- (id)currentItemViewController;
- (id)_itemViewControllerForIndex:(long long)arg1;
- (void)_updateCurrentIndex;
- (void)_contentViewTapped:(id)arg1;
- (void)_saveStatusBarAppearanceState;
- (void)_restoreStatusBarAppearanceState;
- (void)_setOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1;
- (void)_updateTitleWithIndex:(long long)arg1;
- (void)_toggleFadeOverlay;

@end
