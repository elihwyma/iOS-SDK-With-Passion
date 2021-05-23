/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewCell.h>

@class GKDashboardPlayerPhotoView, GKPlayer, NSDictionary, UILabel;

@interface GKBasePlayerCell : GKCollectionViewCell

{
    UILabel *_nameLabel;
    GKDashboardPlayerPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView;
@property (retain, nonatomic) NSDictionary *metricsOverrides;

+ (void)initialize;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)itemHeightList;
+ (id)phoneMetrics;
+ (id)itemHeightListForIdiom:(long long)arg1;
+ (id)padMetrics;
+ (double)defaultRowHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)popoverSourceView;
- (void)didUpdateModel;
- (struct CGRect)alignmentRectForText;
- (void)setRepresentedItem:(id)arg1;
- (_Bool)canRemoveItem;

@end
