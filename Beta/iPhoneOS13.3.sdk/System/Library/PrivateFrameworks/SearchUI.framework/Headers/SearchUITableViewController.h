/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SearchUIPeekDelegate, SearchUITableModel, SearchUITableView, TLKTableViewScrollTester, UIContextMenuInteraction;

@protocol SFFeedbackListener, SearchUIResultsViewDelegate;

@interface SearchUITableViewController

{
    _Bool _shouldUseInsetRoundedSections;
    _Bool _shouldUseStandardSectionInsets;
    CDUnknownBlockType tableViewWillUpdateHandler;
    CDUnknownBlockType tableViewDidUpdateHandler;
    CDUnknownBlockType cellWillDisplayHandler;
    id <SFFeedbackListener> _feedbackListener;
    id <SearchUIResultsViewDelegate> _resultsViewDelegate;
    SearchUITableModel *_tableModel;
    SearchUIPeekDelegate *_peekDelegate;
    UIContextMenuInteraction *_contextInteraction;
    long long _preferredPunchoutIndex;
    SearchUITableModel *_stateRestoredTableModel;
    TLKTableViewScrollTester *_scrollTester;
    struct CGPoint _stateRestoredScrollPoint;
}

@property (retain, nonatomic) SearchUITableView *tableView;
@property (retain, nonatomic) SearchUIPeekDelegate *peekDelegate;
@property (retain, nonatomic) UIContextMenuInteraction *contextInteraction;
@property (nonatomic) long long preferredPunchoutIndex;
@property (retain, nonatomic) SearchUITableModel *stateRestoredTableModel;
@property (nonatomic) struct CGPoint stateRestoredScrollPoint;
@property (retain, nonatomic) TLKTableViewScrollTester *scrollTester;
@property (weak, nonatomic) id <SFFeedbackListener> feedbackListener;
@property (weak) id <SearchUIResultsViewDelegate> resultsViewDelegate;
@property (nonatomic) _Bool shouldUseInsetRoundedSections;
@property (nonatomic) _Bool shouldUseStandardSectionInsets;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (nonatomic) _Bool threeDTouchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler;
@property (copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler;
@property (copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler;

+ (void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3;

- (id)init;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)presentViewController:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)willDismissViewController:(id)arg1;
- (void)updateViewControllerTitle:(id)arg1;
- (void)removeRowModel:(id)arg1;
- (id)resultForIndexPath:(id)arg1;
- (id)cardSectionForIndexPath:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (void)showViewController:(id)arg1;
- (double)offScreenContentScrollDistance;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(_Bool)arg2;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(_Bool)arg2;
- (void)dismissIfNecessaryForIconDrag;
- (void)addOrbInteractionIfNeeded;
- (void)deselectSelectedRows;
- (void)updateLayoutMarginsWithSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (void)updateLayoutMargins;
- (_Bool)updateMustAccountForLayout;
- (id)nextCardForIndexPath:(id)arg1;
- (id)punchoutsForIndexPath:(id)arg1;
- (void)sendFeedbackForCardSectionEngagement:(id)arg1 atIndexPath:(id)arg2 withTriggerEvent:(unsigned long long)arg3;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(_Bool)arg2 forceModalPresentation:(_Bool)arg3;
- (id)punchoutPickerTitleForIndexPath:(id)arg1;
- (id)punchoutPickerDismissText:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 forceModalPresentation:(_Bool)arg3;
- (void)resignTextField;
- (void)updateTableForNewCellHeightAnimated:(_Bool)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)updateContentScrolledOffScreenStatus;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardFeedbackForSelector:(SEL)arg1;
- (void)performScrollTestWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentTableModel;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (struct CGRect)scrollToIndexPath:(id)arg1;
- (void)tapAtIndexPath:(id)arg1;
- (void)purgeMemory;
- (void)restoreResultsIfNeeded;

@end
