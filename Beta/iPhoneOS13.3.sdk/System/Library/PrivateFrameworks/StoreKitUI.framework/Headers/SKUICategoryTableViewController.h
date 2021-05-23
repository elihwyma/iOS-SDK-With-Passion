/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUIClientContext;

@protocol SKUICategoryTableViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUICategoryTableViewController : UITableViewController

{
    SKUICategoryArtworkLoader *_artworkLoader;
    SKUICategory *_category;
    SKUIClientContext *_clientContext;
    id <SKUICategoryTableViewControllerDelegate> _delegate;
    NSArray *_metricsLocations;
    long long _numberOfHiddenRows;
    NSURL *_selectedURL;
    NSURL *_defaultURL;
    _Bool _isRoot;
    _Bool _childrenHaveArtwork;
}

@property (retain, nonatomic) SKUICategoryArtworkLoader *artworkLoader;
@property (retain, nonatomic) SKUICategory *category;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUICategoryTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *metricsLocations;
@property (nonatomic) long long numberOfHiddenRows;
@property (retain, nonatomic) NSURL *selectedURL;
@property (retain, nonatomic) NSURL *defaultURL;
@property (nonatomic, getter=isRoot) _Bool root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_doneButtonAction:(id)arg1;
- (id)_categoryAtIndexPath:(id)arg1;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3;
- (id)_metricsLocationsToPushIndexPath:(id)arg1;
- (long long)_metricsLocationPostionForIndexPath:(id)arg1;
- (void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3;

@end
