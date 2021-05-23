/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSourceStoredDataViewController.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController

{
    UILabel *_messageLabel;
    _Bool _watchPaired;
}

@property _Bool watchPaired;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateFont;
- (void)updateTableHeaderViewForUnpairedWatch;
- (void)handlePairedDevicesSnapshot:(id)arg1;
- (void)addUnpairedWatchHeaderView;

@end
