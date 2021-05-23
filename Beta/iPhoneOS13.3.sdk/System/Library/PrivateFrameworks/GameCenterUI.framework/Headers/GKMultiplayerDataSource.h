/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKMultiplayerButtonHeaderView, GKMultiplayerFooterView, GKMultiplayerHeaderView, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource

{
    _Bool _automatchAddedToMinInHeader;
    _Bool _removingEnabled;
    _Bool _autoMatching;
    long long _minPlayers;
    long long _maxPlayers;
    long long _automatchPlayerCount;
    NSString *_footerStatus;
    GKMultiplayerFooterView *_footerView;
    NSMutableOrderedSet *_players;
    GKMultiplayerButtonHeaderView *_buttonHeaderView;
    NSMutableDictionary *_playerStatus;
    GKMultiplayerHeaderView *_headerView;
    NSMutableOrderedSet *_orderedPlayerIDList;
}

@property (retain, nonatomic) NSMutableDictionary *playerStatus;
@property (retain, nonatomic) GKMultiplayerHeaderView *headerView;
@property (retain, nonatomic) NSMutableOrderedSet *players;
@property (nonatomic) _Bool autoMatching;
@property (retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long automatchPlayerCount;
@property (nonatomic) _Bool automatchAddedToMinInHeader;
@property (nonatomic) _Bool removingEnabled;
@property (copy, nonatomic) NSString *footerStatus;
@property (retain, nonatomic) GKMultiplayerFooterView *footerView;
@property (nonatomic) GKMultiplayerButtonHeaderView *buttonHeaderView;

- (id)init;
- (void)dealloc;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)configureCollectionView:(id)arg1;
- (id)currentPlayers;
- (void)restoreOrderOfPlayers;
- (id)participantForPlayer:(id)arg1;
- (long long)statusForPlayer:(id)arg1;
- (id)participantForAutoMatchNumber:(long long)arg1;
- (void)updateHeaderText;
- (void)updateParticipants;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setAutoMatching:(_Bool)arg1 withVisibleCells:(id)arg2;
- (id)playersInvited;
- (_Bool)havePendingPlayers;
- (void)setAutomatchPlayerCount:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)replaceContactPlayers:(id)arg1 withNormalPlayers:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)firstInvitedContactPlayer;
- (void)setStatus:(long long)arg1 forPlayers:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)failedToInvitePlayers;
- (id)guestPlayers;
- (struct _NSRange)playerRange;
- (void)removePlayers:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (_Bool)participantShouldBeRemovable:(id)arg1 atIndexPath:(id)arg2;
- (long long)maxAvailablePlayers;
- (void)finishRevertingPlayers;
- (id)playersToBeInvited;
- (_Bool)shouldRevertStatus:(long long)arg1;
- (id)playersWithStatus:(long long)arg1;
- (id)readyPlayers;

@end
