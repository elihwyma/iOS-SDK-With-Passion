/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKTurnBasedMatch;

@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource

{
    GKTurnBasedMatch *_match;
}

@property (retain, nonatomic) GKTurnBasedMatch *match;

- (void)dealloc;
- (id)sectionTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)configureCollectionView:(id)arg1;

@end
