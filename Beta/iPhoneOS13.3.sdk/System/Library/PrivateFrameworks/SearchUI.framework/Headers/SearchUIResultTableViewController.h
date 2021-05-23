/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewController.h>

@class NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface SearchUIResultTableViewController : SearchUITableViewController

{
    _Bool _shortenTopFloatingHeader;
    NSString *_queryString;
    NSMutableSet *_expandedSections;
    NSMutableSet *_sectionsThatHaveBeenExpanded;
    NSMutableOrderedSet *_potentiallyVisibleCells;
    NSMutableOrderedSet *_latestVisibleResultsAccountedForInFeedback;
    unsigned long long _lastVisibleResultsFeedbackEvent;
    NSMutableOrderedSet *_potentiallyVisibleHeaders;
    NSArray *_latestVisibleHeadersAccountedForInFeedback;
    double _cachedHeaderHeight;
}

@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleCells;
@property (retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property (nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;
@property (retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleHeaders;
@property (retain, nonatomic) NSArray *latestVisibleHeadersAccountedForInFeedback;
@property (nonatomic) double cachedHeaderHeight;
@property (nonatomic, readonly) double headerHeight;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) _Bool shortenTopFloatingHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)fetchContactsIfNeededForTableModel:(id)arg1;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (void)didEngageResult:(id)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (double)offScreenContentScrollDistance;
- (_Bool)sectionIsClearable:(id)arg1;
- (void)clearResultsFromSection:(id)arg1;
- (void)toggleExpansionForSection:(id)arg1;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(_Bool)arg2;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(_Bool)arg2;
- (_Bool)updateMustAccountForLayout;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (void)purgeMemory;
- (void)modalViewControllerClosed;
- (void)purgeAndResetTable;
- (void)expandCellsIfNeeded;
- (void)sendVisibleFeedbackIfNecessary;
- (void)scrollTableToTop;
- (_Bool)sectionShouldBeExpanded:(id)arg1;
- (void)scrollSectionToTop:(unsigned long long)arg1 animate:(_Bool)arg2;
- (unsigned long long)handleSelectionOfResult:(id)arg1;
- (_Bool)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(_Bool)arg2;
- (_Bool)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1;
- (void)performExpansion:(_Bool)arg1 withSectionIndex:(unsigned long long)arg2;
- (_Bool)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (_Bool)view:(id)arg1 isVisibleInBounds:(struct CGRect)arg2;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(_Bool)arg2;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;

@end
