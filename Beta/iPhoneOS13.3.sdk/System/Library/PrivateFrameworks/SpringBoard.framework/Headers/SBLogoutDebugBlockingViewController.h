/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString;

@interface SBLogoutDebugBlockingViewController : UIViewController

{
    NSDictionary *_debugBlockingTasks;
    NSArray *_applicationKeys;
}

@property (retain, nonatomic) NSDictionary *debugBlockingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)_tableView;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 withBlockingTask:(id)arg2;

@end
