/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSOperationQueue, NSString, NSURLRequest, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIStorePage, SKUIStorePageSectionsViewController, SSMetricsPageEvent, SSVLoadURLOperation, UIRefreshControl;

@protocol SKUIStorePageDelegate;

@interface SKUIStorePageViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    id <SKUIStorePageDelegate> _delegate;
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    _Bool _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    UIRefreshControl *_refreshControl;
    SKUIStorePageSectionsViewController *_sectionsViewController;
    SKUIStorePage *_storePage;
}

@property (nonatomic, readonly, getter=isSkLoading) _Bool skLoading;
@property (copy, nonatomic) SKUIStorePage *storePage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIStorePageDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)setMetricsController:(id)arg1;
- (id)_colorScheme;
- (void)_setMetricsController:(id)arg1;
- (void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
- (_Bool)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;
- (id)_sectionsViewController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_loadWithOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_reloadStorePage;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_runScrollTestWithName:(id)arg1 options:(id)arg2;
- (void)_showProductPage:(id)arg1 withPageEvent:(id)arg2;
- (void)_runPerformanceTestAfterPageLoad;
- (void)cancelPageLoad;
- (id)activeMetricsController;
- (void)loadURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_runPerformanceTestAfterIdle;

@end
