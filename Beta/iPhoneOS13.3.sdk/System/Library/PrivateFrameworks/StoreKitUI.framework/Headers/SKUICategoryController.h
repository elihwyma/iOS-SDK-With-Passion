/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue, NSString, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUICategoryTableViewController, SKUIClientContext, SKUISegmentedControl, SSVLoadURLOperation, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;

@protocol SKUICategoryControllerDelegate;

@interface SKUICategoryController : NSObject

{
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    SKUIClientContext *_clientContext;
    UIViewController *_contentsController;
    NSURL *_defaultURL;
    id <SKUICategoryControllerDelegate> _delegate;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UIPopoverController *_popover;
    SKUICategory *_rootCategory;
    NSURL *_selectedURL;
    SKUISegmentedControl *_segmentedControl;
    long long _segmentedControlLength;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUICategoryControllerDelegate> delegate;
@property (retain, nonatomic) SKUICategory *category;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) UIBarButtonItem *categoryButton;
@property (nonatomic, readonly) _Bool isLoading;
@property (nonatomic) long long segmentedControlLength;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSURL *selectedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismiss;
- (id)_artworkLoader;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)initWithContentsController:(id)arg1;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)segmentedControlAction:(id)arg1;
- (void)_reloadSegmentedControl;
- (void)_precacheArtworkForCategory:(id)arg1;
- (void)_reloadSelectedSegment;
- (id)_rootMetricsLocations;
- (id)_tableViewControllerWithCategory:(id)arg1;
- (id)_metricsLocationsWithIndex:(long long)arg1;
- (void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2;

@end
