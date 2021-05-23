/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString, PSRootController, PSSpecifier, UIBarButtonItem, UILabel, UIViewController, _UITableViewDiffableDataSource;

@protocol PSController;

@interface CKBlackholeConversationListViewController : UITableViewController <Swift>

{
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
    _UITableViewDiffableDataSource *_tableViewDataSource;
    UIBarButtonItem *_clearAllButton;
    UILabel *_emptyConversationListLabel;
}

@property (retain, nonatomic) _UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) UIBarButtonItem *clearAllButton;
@property (retain, nonatomic) UILabel *emptyConversationListLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)specifier;
- (void)suspend;
- (void)handleURL:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willBecomeActive;
- (void)willResignActive;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)setSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)setRootController:(id)arg1;
- (id)rootController;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (id)_conversations;
- (id)_conversationList;
- (void)_updateConversationList;
- (void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_alertTitleForDelete;
- (void)_deleteConversation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)popViewControllerIfNecessary;
- (void)_clearAllTappedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_alertTitleForClearAll;
- (void)_batchDeleteConversationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_clearAllTapped;

@end
