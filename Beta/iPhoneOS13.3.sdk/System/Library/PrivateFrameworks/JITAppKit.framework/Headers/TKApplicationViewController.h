/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UIViewController.h>

@class NSString, NSURL;

@protocol TKApplicationViewControllerDelegate;

@interface TKApplicationViewController : UIViewController

{
    NSURL *_bundleURL;
    NSString *_viewName;
    UIViewController *_childViewController;
    UIViewController *_loadingViewController;
    id <TKApplicationViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) UIViewController *childViewController;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *viewName;
@property (retain, nonatomic) UIViewController *loadingViewController;
@property (weak, nonatomic) id <TKApplicationViewControllerDelegate> delegate;

+ (id)applicationViewController:(id)arg1;

- (void)viewDidLoad;
- (void)dismissApplicationControllerAnimated:(_Bool)arg1;
- (id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(CDUnknownBlockType)arg3;
- (_Bool)handleApplicationControllerError;
- (void)didLoadViewController:(id)arg1;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3;

@end
