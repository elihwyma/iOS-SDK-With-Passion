/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerPhotoView, GKMultiplayerParticipant, NSLayoutConstraint, UILabel, UIView;

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell

{
    _Bool _removable;
    GKMultiplayerParticipant *_participant;
    long long _number;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIView *_accessoryContainerView;
    GKDashboardPlayerPhotoView *_iconView;
    NSLayoutConstraint *_cellLeadingConstraint;
    NSLayoutConstraint *_nameLabelBaselineConstraintToCenterLine;
    NSLayoutConstraint *_statusLabelTopConstraintToNameBaseline;
    NSLayoutConstraint *_statusLabelBaselineConstraintToNameBaseline;
    NSLayoutConstraint *_nameLabelCenterlineConstraintToCenterline;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *accessoryContainerView;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView;
@property (retain, nonatomic) NSLayoutConstraint *cellLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nameLabelBaselineConstraintToCenterLine;
@property (retain, nonatomic) NSLayoutConstraint *statusLabelTopConstraintToNameBaseline;
@property (retain, nonatomic) NSLayoutConstraint *statusLabelBaselineConstraintToNameBaseline;
@property (retain, nonatomic) NSLayoutConstraint *nameLabelCenterlineConstraintToCenterline;
@property (copy, nonatomic) GKMultiplayerParticipant *participant;
@property (nonatomic) _Bool removable;
@property (nonatomic) long long number;

+ (id)reuseIdentifier;

- (void)dealloc;
- (id)description;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)configureConstraintsForCurrentTraitCollection;
- (void)participantChanged;
- (void)updateAccessoryViewForType:(long long)arg1;
- (void)removeAccessorySubviews;

@end
