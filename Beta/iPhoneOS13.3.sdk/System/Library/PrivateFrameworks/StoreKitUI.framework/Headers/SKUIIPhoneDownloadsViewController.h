/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, UITableView, _UIContentUnavailableView;

@protocol SKUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneDownloadsViewController : UIViewController

{
    UITableView *_tableView;
    _UIContentUnavailableView *_noContentView;
    id <SKUIDownloadsChildViewControllerDelegate> _delegate;
    NSArray *_downloads;
    SKUIClientContext *_clientContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSArray *downloads;
@property (weak, nonatomic) id <SKUIDownloadsChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_reload;
- (void)reloadDownloadsAtIndexes:(id)arg1;

@end
