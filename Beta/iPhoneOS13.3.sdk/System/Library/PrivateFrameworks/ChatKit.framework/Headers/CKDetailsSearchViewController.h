/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSearchViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKConversation, CKDetailsSearchResultsFooterCell, CKDetailsSearchResultsTitleHeaderCell, CKQLPreviewController, CKSearchIndexingFooterCell, NSArray, NSString, UIBarButtonItem;

@protocol CKDetailsSearchControllerDelegate;

@interface CKDetailsSearchViewController : CKSearchViewController <Swift>

{
    _Bool _searchComplete;
    id <CKDetailsSearchControllerDelegate> _detailsDelegate;
    CKConversation *_conversation;
    NSArray *_chatGUIDs;
    CKQLPreviewController *_previewController;
    CKDetailsSearchResultsTitleHeaderCell *_titleSizingCell;
    CKDetailsSearchResultsFooterCell *_footerSizingCell;
    CKSearchIndexingFooterCell *_sizingIndexingFooterCell;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_flexibleItem;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_deleteButton;
}

@property (retain, nonatomic) NSArray *chatGUIDs;
@property (retain, nonatomic) CKQLPreviewController *previewController;
@property (retain, nonatomic) CKDetailsSearchResultsTitleHeaderCell *titleSizingCell;
@property (retain, nonatomic) CKDetailsSearchResultsFooterCell *footerSizingCell;
@property (retain, nonatomic) CKSearchIndexingFooterCell *sizingIndexingFooterCell;
@property (nonatomic) _Bool searchComplete;
@property (retain, nonatomic) UIBarButtonItem *selectButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *flexibleItem;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *deleteButton;
@property (weak, nonatomic) id <CKDetailsSearchControllerDelegate> detailsDelegate;
@property (retain, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)setEditing:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)_selectedIndexPaths;
- (void)searchWithText:(id)arg1;
- (void)_updateToolbar;
- (void)_saveSelectedAttachments:(id)arg1;
- (void)_deleteSelectedAttachments:(id)arg1;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchControllerContentsDidChange:(id)arg1;
- (void)deleteMessageItem:(id)arg1;
- (void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
- (void)deleteTransferGUID:(id)arg1;
- (id)initWithSearchControllerClasses:(id)arg1;
- (void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3;
- (void)searchControllerDidBeginDragging:(id)arg1;
- (void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (void)rekickZKWSearchForAttachmentBatchUpdate;
- (void)searchDetailsFooterCellShowAllTapped:(id)arg1;
- (id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;
- (void)_selectButtonTapped:(id)arg1;
- (id)globalLayoutConfiguration;
- (void)_registerCells;
- (Class)_searchResultsHeaderClass;
- (void)_configureIndexingCell:(id)arg1;
- (void)_deleteAttachmentsAtIndexPaths:(id)arg1;
- (void)_cancelEditing:(id)arg1;
- (id)_searchControllerForIndexPath:(id)arg1;
- (id)_newSnapshotForCurrentControllerState;
- (id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;

@end
