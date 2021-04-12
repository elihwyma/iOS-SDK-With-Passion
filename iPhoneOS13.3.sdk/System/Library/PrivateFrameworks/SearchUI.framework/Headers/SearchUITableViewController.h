//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIKeyboardableTableViewController.h>

#import <SearchUI/SearchUIFeedbackDelegateInternal-Protocol.h>
#import <SearchUI/SearchUITableViewTesting-Protocol.h>

@class SearchUIPeekDelegate, SearchUITableModel, TLKTableViewScrollTester, UIContextMenuInteraction;
@protocol SFFeedbackListener, SearchUIResultsViewDelegate;

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUITableViewTesting, SearchUIFeedbackDelegateInternal>
{
    BOOL _shouldUseInsetRoundedSections;
    BOOL _shouldUseStandardSectionInsets;
    id /* CDUnknownBlockType */ tableViewWillUpdateHandler;
    id /* CDUnknownBlockType */ tableViewDidUpdateHandler;
    id /* CDUnknownBlockType */ cellWillDisplayHandler;
    id <SFFeedbackListener> _feedbackListener;
    id <SearchUIResultsViewDelegate> _resultsViewDelegate;
    SearchUITableModel *_tableModel;
    SearchUIPeekDelegate *_peekDelegate;
    UIContextMenuInteraction *_contextInteraction;
    long long _preferredPunchoutIndex;
    SearchUITableModel *_stateRestoredTableModel;
    TLKTableViewScrollTester *_scrollTester;
    CGPoint _stateRestoredScrollPoint;
}

+ (void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3;
@property(retain, nonatomic) TLKTableViewScrollTester *scrollTester; // @synthesize scrollTester=_scrollTester;
@property(nonatomic) CGPoint stateRestoredScrollPoint; // @synthesize stateRestoredScrollPoint=_stateRestoredScrollPoint;
@property(retain, nonatomic) SearchUITableModel *stateRestoredTableModel; // @synthesize stateRestoredTableModel=_stateRestoredTableModel;
@property(nonatomic) long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(retain, nonatomic) UIContextMenuInteraction *contextInteraction; // @synthesize contextInteraction=_contextInteraction;
@property(retain, nonatomic) SearchUIPeekDelegate *peekDelegate; // @synthesize peekDelegate=_peekDelegate;
@property(retain, nonatomic) SearchUITableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) BOOL shouldUseStandardSectionInsets; // @synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets;
@property(nonatomic) BOOL shouldUseInsetRoundedSections; // @synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections;
@property __weak id <SearchUIResultsViewDelegate> resultsViewDelegate; // @synthesize resultsViewDelegate=_resultsViewDelegate;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cellWillDisplayHandler; // @synthesize cellWillDisplayHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tableViewDidUpdateHandler; // @synthesize tableViewDidUpdateHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tableViewWillUpdateHandler; // @synthesize tableViewWillUpdateHandler;
// - (void).cxx_destruct;
- (void)dismissIfNecessaryForIconDrag;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)forwardFeedbackForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)toggleShowMoreForSection:(NSUInteger)arg1;
- (CGRect)scrollToIndexPath:(id)arg1;
- (void)tapAtIndexPath:(id)arg1;
- (id)currentTableModel;
- (BOOL)updateMustAccountForLayout;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)performScrollTestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_canShowWhileLocked;
- (void)updateContentScrolledOffScreenStatus;
- (double)offScreenContentScrollDistance;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)deselectSelectedRows;
- (void)restoreResultsIfNeeded;
- (void)purgeMemory;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateViewControllerTitle:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)removeRowModel:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateTableForNewCellHeightAnimated:(BOOL)arg1;
- (id)punchoutPickerDismissText:(id)arg1;
- (id)punchoutPickerTitleForIndexPath:(id)arg1;
- (id)punchoutsForIndexPath:(id)arg1;
- (id)nextCardForIndexPath:(id)arg1;
- (void)resignTextField;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)willDismissViewController:(id)arg1;
- (void)showViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 forceModalPresentation:(BOOL)arg3;
- (void)presentViewController:(id)arg1;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2 forceModalPresentation:(BOOL)arg3;
- (NSUInteger)handleSelectionAtIndexPath:(id)arg1 wasPop:(BOOL)arg2;
- (void)sendFeedbackForCardSectionEngagement:(id)arg1 atIndexPath:(id)arg2 withTriggerEvent:(NSUInteger)arg3;
- (id)cardSectionForIndexPath:(id)arg1;
- (id)resultForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(BOOL)arg2;
@property(nonatomic) BOOL threeDTouchEnabled;
- (void)updateLayoutMarginsWithSize:(CGSize)arg1 orientation:(long long)arg2;
- (void)updateLayoutMargins;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)addOrbInteractionIfNeeded;
- (void)sceneDidActivate:(id)arg1;
- (id)init;

@end

