/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)

+ (id)_gkArrayWithIndexSet:(id)arg1;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkNonGuestPlayersFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFirstObject;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_gkOrderedSet;
- (id)_gkInternalsFromPlayers;
- (id)_gkPlayersFromInternals;
- (void)_gkValidatePlayersForReturnFromAPI;

@end
