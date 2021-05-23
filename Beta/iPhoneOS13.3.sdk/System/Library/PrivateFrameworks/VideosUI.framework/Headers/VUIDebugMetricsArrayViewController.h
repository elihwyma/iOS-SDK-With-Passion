/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsArrayViewController : UITableViewController

{
    NSArray *_array;
    NSDictionary *_cachedKeysOrder;
}

@property (retain, nonatomic) NSDictionary *cachedKeysOrder;
@property (retain, nonatomic) NSArray *array;

- (id)init;
- (id)object;
- (void)setObject:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)generateCachedKeys;

@end
