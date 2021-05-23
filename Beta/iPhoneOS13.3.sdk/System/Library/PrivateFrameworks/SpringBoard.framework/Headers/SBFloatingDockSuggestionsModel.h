/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, PTSingleTestRecipe, SBAppSuggestionManager, SBApplication, SBApplicationController, SBBestAppSuggestion, SBFAnalyticsClient, SBFloatingDockDefaults, SBIconController, SBIconListModel, SBIconModel, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults;

@protocol SBFloatingDockSuggestionsModelDelegate;

@interface SBFloatingDockSuggestionsModel : NSObject

{
    _Bool _recentsEnabled;
    NSOrderedSet *_currentDisplayItems;
    SBBestAppSuggestion *_currentAppSuggestion;
    SBApplication *_requestedSuggestedApplication;
    id <SBFloatingDockSuggestionsModelDelegate> _delegate;
    unsigned long long _maxSuggestions;
    SBAppSuggestionManager *_appSuggestionManager;
    SBRecentDisplayItemsController *_recentsController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBRecentDisplayItemsDefaults *_recentsDefaults;
    SBIconListModel *_userDockListModel;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBIconModel *_iconModel;
    SBFloatingDockDefaults *_floatingDockDefaults;
    SBFAnalyticsClient *_analyticsClient;
    NSMutableSet *_pendingSuggestionUpdateReasons;
    NSMutableOrderedSet *_currentRecentDisplayItems;
    NSMutableOrderedSet *_currentRecentDisplayItemsSortedByRecency;
    PTSingleTestRecipe *_stressTestRecipe;
}

@property (nonatomic, readonly) unsigned long long maxSuggestions;
@property (nonatomic, readonly) SBAppSuggestionManager *appSuggestionManager;
@property (nonatomic, readonly) SBRecentDisplayItemsController *recentsController;
@property (nonatomic, readonly) SBRecentDisplayItemsDataStore *recentsDataStore;
@property (nonatomic, readonly) SBRecentDisplayItemsDefaults *recentsDefaults;
@property (retain, nonatomic) SBIconListModel *userDockListModel;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBApplicationController *applicationController;
@property (retain, nonatomic) SBIconModel *iconModel;
@property (nonatomic, readonly) SBFloatingDockDefaults *floatingDockDefaults;
@property (nonatomic) _Bool recentsEnabled;
@property (retain, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (nonatomic, readonly) NSMutableSet *pendingSuggestionUpdateReasons;
@property (nonatomic, readonly) NSMutableOrderedSet *currentRecentDisplayItems;
@property (nonatomic, readonly) NSMutableOrderedSet *currentRecentDisplayItemsSortedByRecency;
@property (copy, nonatomic) NSOrderedSet *currentDisplayItems;
@property (nonatomic, readonly) PTSingleTestRecipe *stressTestRecipe;
@property (nonatomic, readonly) SBBestAppSuggestion *currentAppSuggestion;
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication;
@property (weak, nonatomic) id <SBFloatingDockSuggestionsModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_addStateCaptureHandlers;
- (void)dockViewDidResignVisible;
- (void)dockViewDidBecomeVisible;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_initializeAndObserveDefaults;
- (_Bool)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
- (void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2;
- (void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2 andDropItem:(id)arg3;
- (void)recentDisplayItemsController:(id)arg1 didMoveItemToFront:(id)arg2;
- (void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2;
- (void)_iconModelDidChange:(id)arg1;
- (void)beginPendingUpdatesForReason:(id)arg1;
- (void)endPendingUpdatesForReason:(id)arg1;
- (id)persistedDisplayItemsForDataStore:(id)arg1;
- (void)dataStore:(id)arg1 persistDisplayItems:(id)arg2;
- (_Bool)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2;
- (id)initWithMaximumNumberOfSuggestions:(unsigned long long)arg1 iconController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 recentsDefaults:(id)arg5 floatingDockDefaults:(id)arg6 appSuggestionManager:(id)arg7 analyticsClient:(id)arg8 applicationController:(id)arg9;
- (void)_setRecentsEnabled:(_Bool)arg1;
- (id)_dockListModelFromIconController;
- (void)_reloadRecentsAndSuggestions;
- (void)_appSuggestionsChanged:(id)arg1;
- (void)_runStressTest;
- (_Bool)_isPendingAppSuggestionsUpdate;
- (void)_performAppSuggestionChangedWithNewSuggestion:(id)arg1;
- (void)_updateCurrentDisplayItemsAfterContinuityChange:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
- (id)_moveOrAddRecentThenCull:(id)arg1;
- (id)_displayItemForAppSuggestion:(id)arg1;
- (unsigned long long)_indexForAppSuggestion:(id)arg1;
- (id)_oldestRecent;
- (_Bool)_displayItemContainedInUserDock:(id)arg1;
- (void)_handleNewRecentItem:(id)arg1;
- (id)_filterRecentDisplayItems:(id)arg1 filteredOutItems:(id *)arg2;
- (_Bool)_shouldProcessAppSuggestion:(id)arg1;

@end
