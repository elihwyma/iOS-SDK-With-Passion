/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewController.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsDictionaryViewController : UITableViewController

{
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSDictionary *dictionary;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sortedKeys;

@end
