/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableDictionary, PUCurationImportSourceAssetBrowserDebugViewController;

__attribute__((visibility("hidden")))
@interface PUCurationImportSourceBrowserDebugViewController : UITableViewController

{
    NSMutableDictionary *_assetsByImportSource;
    PUCurationImportSourceAssetBrowserDebugViewController *_assetCollectionViewController;
}

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)_fetchImportSources;
- (id)importSourceNameForImportSource:(long long)arg1;

@end
