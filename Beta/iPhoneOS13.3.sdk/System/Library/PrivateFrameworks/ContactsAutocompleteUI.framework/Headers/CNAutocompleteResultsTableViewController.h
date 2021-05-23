/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, _CNAutocompleteResultsTableViewModel;

@protocol CNAutocompleteResultsTableViewControllerDelegate;

@interface CNAutocompleteResultsTableViewController : UITableViewController

{
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _CNAutocompleteResultsTableViewModel *_tableViewModel;
    _Bool _tableViewNeedsReload;
    _Bool _deferTableViewUpdates;
    _Bool _inDisambiguationMode;
    _Bool _hasPerformedRecipientExpansion;
    _Bool _isDeviceLocked;
    id <CNAutocompleteResultsTableViewControllerDelegate> _delegate;
    NSArray *_recipients;
    double _trailingButtonMidlineInsetFromLayoutMargin;
    NSMutableSet *_expandedIdentifiers;
}

@property (retain, nonatomic) NSMutableSet *expandedIdentifiers;
@property (nonatomic) _Bool inDisambiguationMode;
@property (nonatomic) _Bool hasPerformedRecipientExpansion;
@property (nonatomic) _Bool isDeviceLocked;
@property (weak, nonatomic) id <CNAutocompleteResultsTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isDeferringTableViewUpdates) _Bool deferTableViewUpdates;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewLayoutMarginsDidChange;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)invalidatePreferredRecipients;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)invalidateAddressTintColors;
- (void)updateRecipients:(id)arg1 disambiguatingRecipient:(id)arg2;
- (void)_updateTableViewModelAnimated:(_Bool)arg1;
- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (id)_indexPathForRecipient:(id)arg1;
- (double)_tableViewHeaderHeight;
- (_Bool)confirmSelectedRecipient;
- (_Bool)_deviceIsLockedWithPassword;
- (id)unificationIdentifierForRecipient:(id)arg1;
- (id)_unifiedRecipientForRecipientAtIndexPath:(id)arg1;
- (_Bool)recipientIsExpanded:(id)arg1;
- (_Bool)recipientIsDisambiguationRecipient:(id)arg1;
- (void)updateBackgroundAndSeparatorsForCell:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)recipientIsExpandedParent:(id)arg1;
- (_Bool)recipientIsExpandedChild:(id)arg1;
- (_Bool)updatePreferredRecipientForCell:(id)arg1 isInvalidation:(_Bool)arg2;
- (void)updateLabelColorForCell:(id)arg1;
- (_Bool)shouldShowCheckmarkForRecipient:(id)arg1 preferredRecipient:(id)arg2;
- (void)didTapDisambiguationChevronForCell:(id)arg1;
- (void)didTapInfoButtonForCell:(id)arg1;

@end
