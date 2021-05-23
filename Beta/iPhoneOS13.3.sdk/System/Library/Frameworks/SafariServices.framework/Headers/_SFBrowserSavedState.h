/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSMutableArray, SFBrowserStateSQLiteStore;

@interface _SFBrowserSavedState : NSObject

{
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    NSMutableArray *_recentlyClosedTabs;
    _Bool _checkPointWriteAheadLogOnNextUpdate;
    NSCountedSet *_tabCountByWindowUUID;
    _Bool _haveLoadedRecentlyClosedTabs;
    _Bool _secureDeleteEnabled;
    NSArray *_browserWindows;
}

@property (copy, nonatomic) NSArray *browserWindows;
@property (retain, nonatomic) NSArray *recentlyClosedTabs;
@property (nonatomic) _Bool secureDeleteEnabled;

+ (_Bool)shouldMergeAllWindowsIfNeeded;
+ (id)sharedBrowserSavedState;
+ (void)setSharedBrowserSavedState:(id)arg1;
+ (id)ephemeralSavedState;
+ (void)setShouldMergeAllWindowsIfNeeded:(_Bool)arg1;

- (void)dealloc;
- (id)initWithInMemoryDatabase;
- (id)initWithDatabaseURL:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)updateSceneID:(id)arg1;
- (id)tabStateDataForUUID:(id)arg1;
- (id)initWithDefaultBrowserStateDatabase;
- (void)_readBrowserControllersSavedState;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)clearAllSavedStatesClosingDatabase:(_Bool)arg1;
- (void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2;
- (void)_removeRecentlyClosedTabStateData:(id)arg1;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)arg1;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(_Bool)arg2;
- (void)removeTabStateWithTabData:(id)arg1;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;
- (void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActiveDocumentIsValid:(_Bool)arg1 forBrowserControllerWithUUID:(id)arg2;
- (_Bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;
- (void)saveTabStateData:(id)arg1;
- (void)clearAllSavedStatesAndCloseDatabase;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)addRecentlyClosedTabs:(id)arg1;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)arg1;
- (void)clearRecentlyClosedTabs;
- (void)removeRecentlyClosedTabWithStateData:(id)arg1;

@end
