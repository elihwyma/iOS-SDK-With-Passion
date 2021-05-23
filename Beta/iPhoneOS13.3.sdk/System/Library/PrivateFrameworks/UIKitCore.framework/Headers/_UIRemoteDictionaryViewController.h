/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableDictionary, _UIDictionaryManager;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController : UITableViewController

{
    NSArray *_availableDictionaries;
    _UIDictionaryManager *_dictionaryAssetManager;
    NSMutableDictionary *_downloadingAssets;
}

@property (retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager;
@property (retain, nonatomic) NSMutableDictionary *downloadingAssets;

- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (id)_downloadImageWithTintColor:(id)arg1;
- (void)_handleDownloadButton:(id)arg1;
- (void)_startDownloadForDictionary:(id)arg1;
- (id)_downloadButton;

@end
