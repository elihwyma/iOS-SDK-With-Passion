/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSData, NSString, NSURL, SKUICategoryController, SKUIStorePageViewController, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILegacyNativeViewController : SKUIViewController

{
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)_storePageViewController;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (id)activeMetricsController;
- (void)_reloadNavigationItem;
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)_categoryController;
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;

@end
