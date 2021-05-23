/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKConversationListController, NSMutableArray, NSString, UITableView, UITableViewDiffableDataSource, UITextView;

@interface CKInboxViewController : UIViewController <Swift>

{
    CKConversationListController *_conversationListController;
    UITableViewDiffableDataSource *_tableViewDataSource;
    UITableView *_tableView;
    NSMutableArray *_tableCellDataArray;
    NSMutableArray *_junkCellDataArray;
    NSMutableArray *_footerCellDataArray;
    UITextView *_stickyFooterTextView;
    long long _junkIndexSection;
    long long _footerIndexSection;
}

@property (retain, nonatomic) CKConversationListController *conversationListController;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *tableCellDataArray;
@property (retain, nonatomic) NSMutableArray *junkCellDataArray;
@property (retain, nonatomic) NSMutableArray *footerCellDataArray;
@property (retain, nonatomic) UITextView *stickyFooterTextView;
@property (nonatomic) long long junkIndexSection;
@property (nonatomic) long long footerIndexSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)footerTextView;
- (id)_conversationList;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_spamFilteringStateChanged;
- (id)_unreadCountStringForIndexPath:(id)arg1;
- (void)reloadTableViewData;
- (void)reloadTableViewDataWithConversationListUpdate:(_Bool)arg1;
- (unsigned long long)_filterModeForIndexPath:(id)arg1;
- (_Bool)_spamFilteringEnabled;
- (id)initWithConversationListController:(id)arg1;

@end
