/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, TVApplicationController, UINavigationController, VUIBootURLController;

@interface VUIApplicationViewController : UIViewController

{
    TVApplicationController *_applicationController;
    VUIBootURLController *_bootURLController;
    UINavigationController *_navigationController;
}

@property (retain, nonatomic) TVApplicationController *applicationController;
@property (retain, nonatomic) VUIBootURLController *bootURLController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_launchOptions;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (id)imageForResource:(id)arg1;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)URLForResource:(id)arg1;
- (id)_viewForIKElement:(id)arg1 existingView:(id)arg2;
- (id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2;
- (Class)_collectionViewCellClassForIKElement:(id)arg1;
- (void)_parseAppConfigurationForIKElement:(id)arg1;
- (id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2;
- (void)_startApplicationControllerWithBootURL:(id)arg1;
- (void)_exposeObjectsInJSContext:(id)arg1;
- (id)_initialViewControllerWithAppContext:(id)arg1;
- (Class)_applicationControllerClass;

@end
