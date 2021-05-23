/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewController.h>

@class CKConversation;

__attribute__((visibility("hidden")))
@interface CKStarkConversationListViewController : UITableViewController

{
    CKConversation *_selectedConversation;
}

@property (retain, nonatomic) CKConversation *selectedConversation;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isCarPlayIdiom;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)conversationListDidChange:(id)arg1;
- (void)setupComposeButton;
- (void)_handleNewComposePressed:(id)arg1;
- (long long)getCurrentUIUserInterfaceStyle;

@end
