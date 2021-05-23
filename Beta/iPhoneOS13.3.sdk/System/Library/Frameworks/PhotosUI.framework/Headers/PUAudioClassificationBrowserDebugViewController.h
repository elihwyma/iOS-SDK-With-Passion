/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary, PUAudioClassificationAssetBrowserDebugViewController;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationBrowserDebugViewController : UITableViewController

{
    NSArray *_audioClassificationNames;
    NSMutableDictionary *_assetsByAudioClassificationName;
    PUAudioClassificationAssetBrowserDebugViewController *_assetCollectionViewController;
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
- (void)_fetchAudioClassifications;

@end
