/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBasePlayerCell.h>

@class GKContiguousContainerView, GKLabel, GKTurnBasedMatch, GKTurnBasedParticipant, NSLayoutConstraint, UIButton, UIImageView;

@interface GKTurnParticipantCell : GKBasePlayerCell

{
    _Bool _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    SEL _detailPressedAction;
    GKLabel *_topLabel;
    GKLabel *_bottomLabel;
    UIButton *_detailButton;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_statusImageTrailingConstraint;
    NSLayoutConstraint *_textContainerTrailingConstraint;
    NSLayoutConstraint *_detailButtonConstraint;
    struct UIEdgeInsets _insets;
}

@property (retain, nonatomic) GKLabel *topLabel;
@property (retain, nonatomic) GKLabel *bottomLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) GKContiguousContainerView *textContainerView;
@property (retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailButtonConstraint;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKTurnBasedParticipant *participant;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) _Bool isDetail;
@property (nonatomic) struct UIEdgeInsets insets;

+ (void)registerCellClassesForCollectionView:(id)arg1;
+ (id)itemHeightList;
+ (double)defaultRowHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateModel;
- (void)establishConstraints;
- (void)updateMarginConstraints;
- (void)detailPressed:(id)arg1;
- (void)configureForDetail;
- (void)configureForMatch;
- (_Bool)matchWantsLocalPlayerAttention;
- (id)viewForPopover;

@end
