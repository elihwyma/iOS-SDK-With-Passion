/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell

{
    GKGameRecord *_localPlayerGameRecord;
}

@property (retain, nonatomic) GKGameRecord *localPlayerGameRecord;

- (void)dealloc;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (id)leaderboardStringWithGameRecord:(id)arg1;

@end
