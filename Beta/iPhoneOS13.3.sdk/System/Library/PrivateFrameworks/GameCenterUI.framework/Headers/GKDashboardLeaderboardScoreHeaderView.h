/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKTimeScopeButton, NSString, UILabel;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView

{
    id _timeScopeTarget;
    SEL _timeScopeAction;
    UILabel *_titleLabel;
    GKTimeScopeButton *_timeScopeButton;
}

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) GKTimeScopeButton *timeScopeButton;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long timeScope;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

+ (double)defaultHeight;

- (void)awakeFromNib;
- (void)timeScopePressed:(id)arg1;

@end
