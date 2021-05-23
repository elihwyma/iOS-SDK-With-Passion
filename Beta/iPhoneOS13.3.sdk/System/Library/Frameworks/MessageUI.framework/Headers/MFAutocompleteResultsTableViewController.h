/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, UIColor, _MFAutocompleteResultsTableViewModel;

@protocol MFAutocompleteResultsTableViewControllerDelegate;

@interface MFAutocompleteResultsTableViewController : UITableViewController

{
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _MFAutocompleteResultsTableViewModel *_tableViewModel;
    _Bool _tableViewNeedsReload;
    _Bool _cellAnimationsEnabled;
    _Bool _deferTableViewUpdates;
    _Bool _shouldHighlightCompleteMatches;
    _Bool _shouldDimIrrelevantInformation;
    UIColor *_cellBackgroundColor;
    id <MFAutocompleteResultsTableViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <MFAutocompleteResultsTableViewControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *contactRecipients;
@property (nonatomic, readonly) NSArray *suggestedRecipients;
@property (nonatomic, readonly) NSArray *directoryServerRecipients;
@property (nonatomic, readonly) NSArray *allRecipients;
@property (retain, nonatomic) UIColor *cellBackgroundColor;
@property (nonatomic, getter=areCellAnimationsEnabled) _Bool cellAnimationsEnabled;
@property (nonatomic, getter=isDeferringTableViewUpdates) _Bool deferTableViewUpdates;
@property (nonatomic) _Bool shouldHighlightCompleteMatches;
@property (nonatomic) _Bool shouldDimIrrelevantInformation;

- (void)dealloc;
- (void)clear;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)numberOfResults;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)resetScrollPosition;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)_updateTableViewModelAnimated:(_Bool)arg1;
- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (id)_indexPathForRecipient:(id)arg1;
- (double)_tableViewHeaderHeight;
- (Class)recipientTableViewCellClass;
- (void)presentSearchResults:(id)arg1;
- (_Bool)confirmSelectedRecipient;
- (_Bool)containsRecipient:(id)arg1;

@end
