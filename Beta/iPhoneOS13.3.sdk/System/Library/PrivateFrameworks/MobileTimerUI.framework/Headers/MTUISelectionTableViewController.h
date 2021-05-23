/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath;

@protocol MTUISelectionTableViewControllerDelegate;

@interface MTUISelectionTableViewController : UITableViewController

{
    _Bool _allowsNone;
    NSArray *_selectionData;
    id <MTUISelectionTableViewControllerDelegate> _delegate;
    NSIndexPath *_parentIndexPath;
}

@property (retain, nonatomic) NSArray *selectionData;
@property (weak, nonatomic) id <MTUISelectionTableViewControllerDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *parentIndexPath;
@property (nonatomic) _Bool allowsNone;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)deselectRowsExcluding:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 selectionData:(id)arg3 parentIndexPath:(id)arg4 allowsMultiple:(_Bool)arg5 allowsNone:(_Bool)arg6 delegate:(id)arg7;

@end
