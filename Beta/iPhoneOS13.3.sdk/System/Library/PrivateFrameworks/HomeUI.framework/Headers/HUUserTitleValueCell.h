/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTitleValueCell.h>

@class HFUserHandle, UIView;

@protocol CNAvatarViewController;

@interface HUUserTitleValueCell : HUTitleValueCell

{
    HFUserHandle *_userHandle;
    id <CNAvatarViewController> _avatarViewController;
    UIView *_avatarView;
}

@property (nonatomic, readonly) id <CNAvatarViewController> avatarViewController;
@property (nonatomic, readonly) UIView *avatarView;
@property (retain, nonatomic) HFUserHandle *userHandle;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;

@end
