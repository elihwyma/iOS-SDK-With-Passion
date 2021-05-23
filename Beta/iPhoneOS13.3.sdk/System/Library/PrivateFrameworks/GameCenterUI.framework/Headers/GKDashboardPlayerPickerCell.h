/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class NSLayoutConstraint, UIButton, UIImageView;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell

{
    _Bool _selectable;
    _Bool _showsLastPlayedStatusText;
    UIImageView *_selectionView;
    UIButton *_selectionButton;
    NSLayoutConstraint *_nameConstraint;
    NSLayoutConstraint *_selectionHorizontalConstraint;
    NSLayoutConstraint *_selectionVerticalConstraint;
    NSLayoutConstraint *_statusHeightConstraint;
    double _nameInitialConstant;
    double _selectionInitialHorizontalConstant;
    double _selectionInitialVerticalConstant;
    double _statusInitialConstant;
}

@property (nonatomic) UIImageView *selectionView;
@property (nonatomic) UIButton *selectionButton;
@property (nonatomic) NSLayoutConstraint *nameConstraint;
@property (nonatomic) NSLayoutConstraint *selectionHorizontalConstraint;
@property (nonatomic) NSLayoutConstraint *selectionVerticalConstraint;
@property (nonatomic) NSLayoutConstraint *statusHeightConstraint;
@property (nonatomic) double nameInitialConstant;
@property (nonatomic) double selectionInitialHorizontalConstant;
@property (nonatomic) double selectionInitialVerticalConstant;
@property (nonatomic) double statusInitialConstant;
@property (nonatomic, getter=isSelectable) _Bool selectable;
@property (nonatomic) _Bool showsLastPlayedStatusText;

- (void)setSelected:(_Bool)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)awakeFromNib;
- (void)setPlayer:(id)arg1;
- (void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2;

@end
