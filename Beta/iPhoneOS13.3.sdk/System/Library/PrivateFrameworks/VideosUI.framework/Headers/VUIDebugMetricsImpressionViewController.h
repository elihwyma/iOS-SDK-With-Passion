/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsImpressionViewController : UITableViewController

{
    NSArray *_array;
}

@property (retain, nonatomic) NSArray *array;

- (id)init;
- (id)object;
- (void)setObject:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
