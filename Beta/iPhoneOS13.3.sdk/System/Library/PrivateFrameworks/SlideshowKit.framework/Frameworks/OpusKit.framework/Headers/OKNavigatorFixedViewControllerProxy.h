/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorViewController.h>

@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

{
    OKPageViewController *_pageViewController;
}

@property (retain, nonatomic) OKPageViewController *pageViewController;

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
- (void)didReceiveMemoryWarning;
- (void)resolutionDidChange;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePageViewController;

@end
