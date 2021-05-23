/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDetailViewController.h>

@class GKTurnBasedMatch, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface GKDashboardTurnDetailViewController : GKDetailViewController

{
    _Bool _shouldShowPlay;
    _Bool _shouldShowQuit;
    GKTurnBasedMatch *_match;
    UIView *_contentVerticalCenteringView;
    UIView *_turnDetailContentView;
    UILabel *_playingWithLabel;
    UILabel *_createdLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    NSLayoutConstraint *_secondButtonCenteringConstraint;
}

@property (nonatomic) UIView *contentVerticalCenteringView;
@property (nonatomic) UIView *turnDetailContentView;
@property (nonatomic) UILabel *playingWithLabel;
@property (nonatomic) UILabel *createdLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) _Bool shouldShowPlay;
@property (nonatomic) _Bool shouldShowQuit;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)acceptInvitation:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (id)playingWithString;
- (void)chooseMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)disableButtons;
- (void)refreshPresenter;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)initWithTurnBasedMatch:(id)arg1;
- (void)turnOK:(id)arg1;

@end
