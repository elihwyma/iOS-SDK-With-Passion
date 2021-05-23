/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKConversation, NSMutableArray, NSString, STConversationContext, STLockoutViewController, UITextView, UIView;

@interface CKBlackholeTranscriptViewController : UITableViewController <Swift>

{
    _Bool _isShowingLockoutView;
    CKConversation *_conversation;
    NSMutableArray *_messages;
    UITextView *_headerTextView;
    STLockoutViewController *_lockoutViewController;
    STConversationContext *_conversationContext;
    UIView *_lockoutView;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) UITextView *headerTextView;
@property (nonatomic) _Bool isShowingLockoutView;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (retain, nonatomic) STConversationContext *conversationContext;
@property (retain, nonatomic) UIView *lockoutView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithConversation:(id)arg1;
- (id)_conversationList;
- (void)updateScreenTimeShieldIfNeededForChat:(id)arg1;
- (_Bool)isChatAllowedByScreenTime:(id)arg1;
- (void)removeLockoutControllerIfNeeded;
- (void)showScreenTimeShieldIfNeeded;
- (void)chatAllowedByScreenTimeChanged:(id)arg1;
- (_Bool)shouldPresentBlockingDowntimeViewController;
- (id)_handleIDsForCurrentConversation;
- (void)layoutLockoutView;
- (void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_alertTitleForDelete;
- (void)_deleteConversation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTranscriptHistory;
- (id)generateHeader;

@end
