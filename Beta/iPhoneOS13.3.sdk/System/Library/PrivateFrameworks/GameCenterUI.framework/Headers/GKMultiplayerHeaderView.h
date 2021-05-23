/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKLabel;

@interface GKMultiplayerHeaderView : UICollectionReusableView

{
    GKLabel *_label;
}

@property (retain, nonatomic) GKLabel *label;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMinPlayers:(long long)arg1 maxPlayers:(long long)arg2;

@end
