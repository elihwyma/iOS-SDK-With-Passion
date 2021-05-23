/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBasicCollectionViewController.h>

@class GKGame, GKTurnBasedMatch, GKTurnBasedMatchDetailHeaderView, GKTurnBasedParticipantsDataSource, NSObject;

@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController

{
    _Bool _isInGame;
    _Bool _shouldShowPlay;
    _Bool _shouldShowQuit;
    _Bool _didFloatInBubbles;
    _Bool _isCompactHeader;
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *_delegateWeak;
    GKTurnBasedMatch *_match;
    GKGame *_game;
    GKTurnBasedParticipantsDataSource *_participantsDataSource;
    GKTurnBasedMatchDetailHeaderView *_headerView;
}

@property (retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource;
@property (retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView;
@property (nonatomic) _Bool didFloatInBubbles;
@property (nonatomic) _Bool isCompactHeader;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) _Bool isInGame;
@property (nonatomic) _Bool shouldShowPlay;
@property (nonatomic) _Bool shouldShowQuit;
@property (nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)acceptInvitation:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)setActionButtonEnabled:(_Bool)arg1;
- (void)didEnterNoContentState;
- (void)didUpdateModel;
- (void)configureDataSource;
- (void)floatInBubbles;
- (void)chooseMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)configureViewFactories;
- (void)configureMatchDetailHeader:(id)arg1;
- (void)setNeedsFloatInBubbles;
- (void)updateHeader;
- (void)buyButtonPressed:(id)arg1;
- (void)setupActionButton;
- (void)animateOutBubbleWithFocus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_gkRepresentedObject;

@end
