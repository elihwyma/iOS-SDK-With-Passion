/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageHeaderViewController, SKUIProductPageTableView, UIColor, UITableView;

@protocol SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    id <SKUIProductPageChildViewController> _delegateSender;
    UIColor *_evenColor;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIColor *_color;
    NSArray *_sections;
    SKUIProductPageTableView *_tableView;
    SKUILayoutCache *_textLayoutCache;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (nonatomic, readonly) UITableView *tableView;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewController> delegateSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_tableView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_addHeaderView;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;
- (void)scrollToView:(id)arg1 animated:(_Bool)arg2;
- (id)_textLayoutRequestWithText:(id)arg1;
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;

@end
