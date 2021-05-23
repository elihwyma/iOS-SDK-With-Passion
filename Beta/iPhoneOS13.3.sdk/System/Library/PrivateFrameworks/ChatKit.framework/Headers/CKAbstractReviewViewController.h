/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Preferences/PSViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString, UIBarButtonItem, UINavigationItem, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface CKAbstractReviewViewController : PSViewController <Swift>

{
    UITableView *_tableView;
    UIView *_topLineView;
    UINavigationItem *_navItem;
    UIBarButtonItem *_cancelEditingBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UINavigationItem *navItem;
@property (retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *deleteBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (id)navigationItem;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_updateNavigationItemState;
- (void)_handleCancel;
- (void)_handleDelete;

@end
