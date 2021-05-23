/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface GKDashboardTurnCell : GKDashboardPlayerCell

{
    long long _displayIndex;
    UILabel *_dateLabel;
    UILabel *_turnLabel;
    UIImageView *_actionIndicatorView;
    NSLayoutConstraint *_dateToNameConstraint;
    NSLayoutConstraint *_turnToNameConstraint;
    UIColor *_dateColor;
    UIColor *_turnColor;
    double _dateToNameConstant;
    double _turnToNameConstant;
}

@property (nonatomic) UILabel *dateLabel;
@property (nonatomic) UILabel *turnLabel;
@property (nonatomic) UIImageView *actionIndicatorView;
@property (nonatomic) NSLayoutConstraint *dateToNameConstraint;
@property (nonatomic) NSLayoutConstraint *turnToNameConstraint;
@property (retain, nonatomic) UIColor *dateColor;
@property (retain, nonatomic) UIColor *turnColor;
@property (nonatomic) double dateToNameConstant;
@property (nonatomic) double turnToNameConstant;
@property (nonatomic) long long displayIndex;

+ (struct CGSize)defaultSizeForTurnDetail;

- (void)dealloc;
- (void)awakeFromNib;
- (void)setOnDarkBackground:(_Bool)arg1;
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;
- (_Bool)wantsLocalPlayerAction:(id)arg1;
- (void)configureForMatch:(id)arg1;

@end
