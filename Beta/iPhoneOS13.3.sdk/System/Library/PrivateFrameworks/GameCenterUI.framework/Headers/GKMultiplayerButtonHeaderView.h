/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UITapGestureRecognizer;

@interface GKMultiplayerButtonHeaderView : UIView

{
    _Bool _mayChangeCount;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_iconImageView;
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_nextImageView;
    NSLayoutConstraint *_iconImageViewLeading;
    NSLayoutConstraint *_nextImageViewTrailing;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImageView *nextImageView;
@property (retain, nonatomic) NSLayoutConstraint *iconImageViewLeading;
@property (retain, nonatomic) NSLayoutConstraint *nextImageViewTrailing;
@property (nonatomic) _Bool mayChangeCount;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (void)setAction:(SEL)arg1 forTarget:(id)arg2;
- (void)setGameIcon:(id)arg1;
- (void)setButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayerCount:(long long)arg1;

@end
