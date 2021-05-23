/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class CNAvatarViewController, GKPlayer, NSObject, UIImageView;

@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView

{
    _Bool _useDarkerPlaceholder;
    _Bool _usingPlaceholder;
    _Bool _selected;
    GKPlayer *_player;
    NSObject<GKPlayerAvatarViewDelegate> *_delegate;
    long long _avatarSize;
    CNAvatarViewController *_avatarViewController;
    UIImageView *_avatarImageView;
}

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) _Bool useDarkerPlaceholder;
@property (nonatomic, getter=isUsingPlaceholder) _Bool usingPlaceholder;
@property (nonatomic, readonly) _Bool hasImage;
@property (nonatomic) _Bool selected;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setContactOnAvatarViewController:(id)arg1;
- (void)refreshImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidatePhoto;

@end
