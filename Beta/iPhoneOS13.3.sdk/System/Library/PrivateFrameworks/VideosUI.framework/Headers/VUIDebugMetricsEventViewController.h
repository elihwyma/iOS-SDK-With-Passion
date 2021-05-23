/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewController.h>

@class VUIDebugMetricsEvent;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventViewController : UITableViewController

{
    VUIDebugMetricsEvent *_event;
}

@property (retain, nonatomic) VUIDebugMetricsEvent *event;

- (id)initWithEvent:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)performValidation;

@end
