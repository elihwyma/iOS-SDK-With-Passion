/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSSet, NSString, SBAppSuggestionManager, SBApplicationController, SBDockIconListView, SBFloatingDockSuggestionsModel, SBFloatingDockViewController, SBIconController, SBIconListModel, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults;

@protocol SBFloatingDockSuggestionsViewControllerDelegate, SBIconViewProviding;

@interface SBFloatingDockSuggestionsViewController : UIViewController <Swift>

{
    NSMutableDictionary *_icons;
    _Bool _visible;
    SBFloatingDockViewController *_floatingDockViewController;
    id <SBFloatingDockSuggestionsViewControllerDelegate> _delegate;
    unsigned long long _numberOfRecents;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBRecentDisplayItemsDefaults *_recentsDefaults;
    SBAppSuggestionManager *_appSuggestionManager;
    SBIconListModel *_suggestionsIconListModel;
    SBFloatingDockSuggestionsModel *_suggestionsModel;
    NSMutableArray *_deferredIconUpdates;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    long long _effectiveEnvironmentMode;
    id <SBIconViewProviding> _iconViewProvider;
}

@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBApplicationController *applicationController;
@property (nonatomic, readonly) SBRecentDisplayItemsDataStore *recentsDataStore;
@property (nonatomic, readonly) SBRecentDisplayItemsDefaults *recentsDefaults;
@property (nonatomic, readonly) SBAppSuggestionManager *appSuggestionManager;
@property (nonatomic, readonly) SBIconListModel *suggestionsIconListModel;
@property (nonatomic, readonly) SBFloatingDockSuggestionsModel *suggestionsModel;
@property (retain, nonatomic) NSMutableArray *deferredIconUpdates;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic) long long effectiveEnvironmentMode;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic, readonly) id <SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) SBDockIconListView *listView;
@property (weak, nonatomic) id <SBFloatingDockSuggestionsViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long numberOfRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *presentedIconLocations;
@property (weak, nonatomic) SBFloatingDockViewController *floatingDockViewController;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dockViewWillBecomeVisible;
- (void)dockViewWillResignVisible;
- (void)dockViewDidResignVisible;
- (void)dockViewDidBecomeVisible;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)recycleIconView:(id)arg1;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1;
- (void)dockFolderWillBeginTransitioning;
- (void)dockFolderDidEndTransitioning;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)_placeholdersDidChange:(id)arg1;
- (void)_iconModelDidChange:(id)arg1;
- (void)_listLayoutDidChange:(id)arg1;
- (id)initWithNumberOfRecents:(unsigned long long)arg1 iconController:(id)arg2 applicationController:(id)arg3 layoutStateTransitionCoordinator:(id)arg4 suggestionsModel:(id)arg5 iconViewProvider:(id)arg6;
- (void)_loadAndPlaceIconsInViewForDisplayItems:(id)arg1;
- (void)_performDeferredIconUpdates;
- (void)_pruneCachedIcons;
- (_Bool)_onHomescreen;
- (_Bool)_shouldDeferUpdateInvolvingContinuity:(_Bool)arg1;
- (void)_emitPresentedEventInvolvingContinuity:(_Bool)arg1 fromModel:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_iconForDisplayItem:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_fadeInIcon:(id)arg1 isReplacing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didChangeNumberOfIcons;
- (void)_performOrDefer:(_Bool)arg1 iconUpdate:(CDUnknownBlockType)arg2;
- (void)_fadeOutIcon:(id)arg1 atIndex:(unsigned long long)arg2 isReplacing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_swapIcon:(_Bool)arg1 forPlaceholders:(id)arg2;
- (void)dockSuggestionsModel:(id)arg1 didInsertItem:(id)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(_Bool)arg4;
- (void)dockSuggestionsModel:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(_Bool)arg4;
- (void)dockSuggestionsModel:(id)arg1 didReplaceItem:(id)arg2 atIndex:(unsigned long long)arg3 withItem:(id)arg4 atIndex:(unsigned long long)arg5 involvesContinuity:(_Bool)arg6;
- (void)dockSuggestionsModel:(id)arg1 didReloadItems:(id)arg2 withItems:(id)arg3;

@end
