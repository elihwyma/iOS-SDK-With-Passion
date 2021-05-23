/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewCell.h>

@class GKGame, GKGameRecord, UIImageView, UILabel;

@interface GKBaseGameCell : GKCollectionViewCell

{
    UIImageView *_iconView;
    UILabel *_nameLabel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKGameRecord *gameRecord;

+ (id)itemHeightList;
+ (double)defaultRowHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateModel;
- (struct CGRect)alignmentRectForText;
- (void)setRepresentedItem:(id)arg1;

@end
