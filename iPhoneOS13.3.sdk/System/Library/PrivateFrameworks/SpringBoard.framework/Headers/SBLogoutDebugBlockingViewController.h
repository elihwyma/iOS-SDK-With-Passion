//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, NSDictionary;

@interface SBLogoutDebugBlockingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSDictionary *_debugBlockingTasks;
    NSArray *_applicationKeys;
}

@property(retain, nonatomic) NSDictionary *debugBlockingTasks; // @synthesize debugBlockingTasks=_debugBlockingTasks;
// - (void).cxx_destruct;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_configureCell:(id)arg1 withBlockingTask:(id)arg2;
- (id)_tableView;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end

