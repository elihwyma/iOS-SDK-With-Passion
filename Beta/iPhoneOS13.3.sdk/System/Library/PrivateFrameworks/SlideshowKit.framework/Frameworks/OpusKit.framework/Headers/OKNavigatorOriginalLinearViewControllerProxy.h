/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorViewController.h>

@class NSArray, NSString, UIPageViewController;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController

{
    UIPageViewController *_pagesViewController;
    NSArray *_orderedPagesNames;
    long long _transitionStyle;
    long long _navigationOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)commonInit;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prepareForDisplay;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)applySettings;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadPagesViewController;
- (void)gotoNext:(id)arg1;
- (void)gotoPrevious:(id)arg1;
- (void)prepareAdjacentPageViewControllers;
- (void)updatePagesViewController;
- (id)nameForPageBeforePage:(id)arg1;
- (id)nameForPageAfterPage:(id)arg1;
- (void)setSettingTransition:(unsigned long long)arg1;
- (void)setSettingOrientation:(unsigned long long)arg1;

@end
