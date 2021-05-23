/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewController.h>

@class CKSpotlightQuery, CSSearchQuery, NSArray, NSString;

@protocol CKConversationResultsControllerDelegate;

@interface CKConversationSearchResultsController : UITableViewController

{
    _Bool _gotTopConversationResults;
    id <CKConversationResultsControllerDelegate> _delegate;
    NSArray *_topConversationsResults;
    NSArray *_messageResults;
    CKSpotlightQuery *_currentQuery;
    CSSearchQuery *_topConversationsQuery;
    NSString *_selectedChatGUID;
}

@property (nonatomic, readonly) NSArray *searchResults;
@property (retain, nonatomic) NSArray *topConversationsResults;
@property (retain, nonatomic) NSArray *messageResults;
@property (retain, nonatomic) CKSpotlightQuery *currentQuery;
@property (retain, nonatomic) CSSearchQuery *topConversationsQuery;
@property (retain, nonatomic) NSString *selectedChatGUID;
@property (nonatomic) _Bool gotTopConversationResults;
@property (weak, nonatomic) id <CKConversationResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)cancelCurrentQuery;
- (void)_updateTableViewRowHeights;
- (Class)_conversationListCellClass;
- (id)_topConversationsQueryForText:(id)arg1;
- (void)_reloadDataForNewResults;
- (void)topConversationsQueryCompletedWithResults:(id)arg1;
- (void)_selectChatGUID:(id)arg1;
- (void)setCurrentSearchResultSelected:(_Bool)arg1;
- (void)searchEnded;

@end
