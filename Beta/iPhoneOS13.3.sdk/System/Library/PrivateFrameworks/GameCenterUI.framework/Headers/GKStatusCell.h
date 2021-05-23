/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell

{
    UILabel *_statusLabel;
}

@property (retain, nonatomic) UILabel *statusLabel;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setStatus:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canRemoveItem;

@end
