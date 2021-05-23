/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseGameCell.h>

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell

{
    UILabel *_statsLabel;
    UILabel *_dateLabel;
}

@property (retain, nonatomic) UILabel *statsLabel;
@property (retain, nonatomic) UILabel *dateLabel;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateModel;
- (id)achievementsStringWithGameRecord:(id)arg1;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (id)statText;

@end
