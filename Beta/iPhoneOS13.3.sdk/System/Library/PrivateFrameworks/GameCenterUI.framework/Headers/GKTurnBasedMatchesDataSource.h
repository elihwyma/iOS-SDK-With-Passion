/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame, NSObject;

@protocol GKTurnBasedMatchesDataSourceDelegate;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource

{
    NSObject<GKTurnBasedMatchesDataSourceDelegate> *_delegateWeak;
    GKGame *_game;
    SEL _detailPressedAction;
    struct UIEdgeInsets _cellMarginInsets;
}

@property (retain, nonatomic) GKGame *game;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) struct UIEdgeInsets cellMarginInsets;
@property (nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate;

- (void)dealloc;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureDataSource;

@end
