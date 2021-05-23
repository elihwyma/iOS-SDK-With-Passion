/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseGameCell.h>

@class GKContiguousContainerView, GKLabel, NSLayoutConstraint, UIImageView;

@interface GKTurnGameCell : GKBaseGameCell

{
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    GKLabel *_activeMatchesLabel;
    GKLabel *_localPlayerTurnsLabel;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_statusImageTrailingConstraint;
    NSLayoutConstraint *_textContainerTrailingConstraint;
    struct UIEdgeInsets _insets;
}

@property (retain, nonatomic) GKLabel *activeMatchesLabel;
@property (retain, nonatomic) GKLabel *localPlayerTurnsLabel;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) GKContiguousContainerView *textContainerView;
@property (retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic) unsigned long long numberOfActiveMatches;
@property (nonatomic) unsigned long long numberOfLocalPlayerTurns;
@property (nonatomic) struct UIEdgeInsets insets;

+ (void)registerCellClassesForCollectionView:(id)arg1;
+ (id)itemHeightList;
+ (double)defaultRowHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateModel;
- (void)establishConstraints;
- (void)updateMarginConstraints;

@end
