/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class AMSBinaryPromise, UIViewController;

@interface SUNavigationContainerViewController : SUViewController

{
    _Bool _bridgedNavigation;
    _Bool _shouldRunPopHandler;
    AMSBinaryPromise *_appearancePromise;
    CDUnknownBlockType _popHandler;
}

@property (nonatomic) _Bool shouldRunPopHandler;
@property (retain, nonatomic) AMSBinaryPromise *appearancePromise;
@property (nonatomic) _Bool bridgedNavigation;
@property (nonatomic, readonly) UIViewController *embeddedViewController;
@property (copy, nonatomic) CDUnknownBlockType popHandler;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithChildViewController:(id)arg1;
- (void)setEmbeddedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
