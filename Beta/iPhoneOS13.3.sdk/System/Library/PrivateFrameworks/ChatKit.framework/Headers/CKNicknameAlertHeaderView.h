/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKAvatarView, IMNickname, UILabel;

__attribute__((visibility("hidden")))
@interface CKNicknameAlertHeaderView : UIView

{
    IMNickname *_nickname;
    CKAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_handleLabel;
}

@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *handleLabel;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)_updateAvatarView;
- (id)nameText;
- (id)handleText;
- (id)initWithFrame:(struct CGRect)arg1 nickname:(id)arg2;

@end
