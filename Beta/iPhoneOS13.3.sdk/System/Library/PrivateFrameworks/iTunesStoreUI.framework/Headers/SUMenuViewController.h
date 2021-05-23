/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, UITableView;

@protocol SUMenuViewControllerDelegate;

@interface SUMenuViewController : SUViewController

{
    id <SUMenuViewControllerDelegate> _delegate;
    long long _selectedIndex;
    UITableView *_tableView;
}

@property (nonatomic) id <SUMenuViewControllerDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reload;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_sendDidCancel;
- (long long)numberOfMenuItems;
- (struct CGSize)maximumViewSize;
- (struct CGSize)minimumViewSize;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;

@end
