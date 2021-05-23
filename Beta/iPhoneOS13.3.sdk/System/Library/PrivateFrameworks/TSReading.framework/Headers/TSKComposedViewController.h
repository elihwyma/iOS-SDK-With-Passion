/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController

{
    UIViewController *mComposedViewController;
}

@property (nonatomic, readonly) UIViewController *composedViewController;

- (void)dealloc;
- (id)title;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;
- (id)i_contentViewController;
- (void)p_loadChildView;
- (void)p_unloadChildView;

@end
