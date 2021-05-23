/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITableViewController.h>

@class NSIndexPath, NSString;

@protocol GKMultiplayerPlayerCountViewControllerDelegate;

@interface GKMultiplayerPlayerCountViewController : UITableViewController

{
    long long _selectedCount;
    id <GKMultiplayerPlayerCountViewControllerDelegate> _delegate;
    NSIndexPath *_selectedRowIndexPath;
    struct _NSRange _pickerMinimumAndRange;
}

@property (nonatomic) struct _NSRange pickerMinimumAndRange;
@property (nonatomic) long long selectedCount;
@property (retain, nonatomic) NSIndexPath *selectedRowIndexPath;
@property (weak, nonatomic) id <GKMultiplayerPlayerCountViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithMinPlayerCount:(long long)arg1 maxPlayerCount:(long long)arg2 currentCount:(long long)arg3;

@end
