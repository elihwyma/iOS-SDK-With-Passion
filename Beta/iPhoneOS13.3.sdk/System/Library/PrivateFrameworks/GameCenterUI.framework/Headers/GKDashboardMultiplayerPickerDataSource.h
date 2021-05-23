/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKContactDataSource, GKTournament, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource

{
    _Bool _showsAllFriends;
    _Bool _searching;
    _Bool _supportsNearby;
    _Bool _excludesContacts;
    _Bool _isSegmented;
    _Bool _browsingForNearbyPlayers;
    _Bool _didLoad;
    NSMutableDictionary *_playerStates;
    long long _maxSelectable;
    GKTournament *_tournament;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    CDUnknownBlockType _nearbyPlayersChangedHandler;
    long long _currentSegment;
    NSArray *_contactPlayers;
    NSArray *_friendPlayers;
    NSArray *_recentPlayers;
    NSMutableArray *_nearbyPlayers;
    NSArray *_searchPlayers;
    long long _maxFriendsVisible;
    NSArray *_hiddenPlayers;
    GKContactDataSource *_contactSource;
}

@property (retain, nonatomic) NSArray *contactPlayers;
@property (retain, nonatomic) NSArray *friendPlayers;
@property (retain, nonatomic) NSArray *recentPlayers;
@property (retain, nonatomic) NSMutableArray *nearbyPlayers;
@property (retain, nonatomic) NSArray *searchPlayers;
@property (nonatomic) long long maxSelectable;
@property (nonatomic) long long maxFriendsVisible;
@property (retain, nonatomic) NSArray *hiddenPlayers;
@property (nonatomic) _Bool browsingForNearbyPlayers;
@property (nonatomic) _Bool didLoad;
@property (retain, nonatomic) GKContactDataSource *contactSource;
@property (nonatomic, readonly) NSArray *selectedPlayers;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (nonatomic, readonly) long long unmodifiedItemCount;
@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) _Bool showsAllFriends;
@property (nonatomic, getter=isSearching) _Bool searching;
@property (nonatomic) _Bool supportsNearby;
@property (nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (copy, nonatomic) CDUnknownBlockType nearbyPlayersChangedHandler;
@property (nonatomic) _Bool excludesContacts;
@property (nonatomic) _Bool isSegmented;
@property (nonatomic) long long currentSegment;
@property (nonatomic, readonly) long long numberOfContacts;
@property (nonatomic, readonly) NSArray *contactSectionHeaders;
@property (nonatomic, readonly) NSDictionary *contactSectionHeaderIndexes;
@property (nonatomic, readonly) NSArray *contactSkipValues;
@property (nonatomic, readonly) NSDictionary *contactSkipIndexes;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)clearSelection;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)playerForIndexPath:(id)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (void)searchTextHasChanged;
- (id)headerTextForSection:(long long)arg1;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;
- (id)firstIndexPathForPlayer:(id)arg1;
- (id)indexPathForFirstPlayer;
- (id)indexPathsForPlayer:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (id)playersForSection:(long long)arg1 ignoreSearch:(_Bool)arg2;
- (_Bool)cellSelectableStateAtIndexPath:(id)arg1 playerState:(unsigned long long)arg2;
- (long long)numberOfSectionsInCurrentSegment;
- (void)setNearbyPlayerID:(id)arg1 reachable:(_Bool)arg2;
- (id)playerForPlayerID:(id)arg1;
- (_Bool)_canShowMoreFriends;
- (void)updateSelectionStateForCollectionView:(id)arg1 indexPaths:(id)arg2;

@end
