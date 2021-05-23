/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIProductPageHeaderViewController, SKUIResourceLoader, SSVPlatformRequestOperation, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUISwooshArrayViewController : UIViewController <Swift>

{
    _Bool _askPermission;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSArray *_swooshComponents;
    NSMutableArray *_viewControllers;
}

@property (copy, nonatomic) NSArray *swooshComponents;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIMetricsController *metricsController;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_scrollView;
- (id)activeMetricsController;
- (id)_artworkLoader;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)_loadMissingItemsIfNecessary;
- (void)_reloadChildViewControllers;
- (void)_addHeaderView;
- (id)_clickEventWithItem:(id)arg1;
- (id)_clickEventForSeeAllForViewController:(id)arg1;
- (void)_layoutSwooshViews;
- (void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2;
- (id)initWithSwooshComponents:(id)arg1;
- (void)loadMissingItemData;
- (_Bool)isSkLoaded;

@end
