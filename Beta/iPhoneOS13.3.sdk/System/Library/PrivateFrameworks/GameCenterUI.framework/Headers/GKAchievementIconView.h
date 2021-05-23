/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView

{
    _Bool _isDetail;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) _Bool isDetail;

+ (id)progressSourceDetail;
+ (id)progressSource;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;
- (void)configureImage;
- (double)progressForAchievement:(id)arg1;
- (id)processProgressImage:(id)arg1 forAchievement:(id)arg2;
- (id)progressIdentifierForAchievement:(id)arg1;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
