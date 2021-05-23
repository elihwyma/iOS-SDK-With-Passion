/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HFUserHandle, HULayoutContainerView, HUTitleDescriptionContentView, NSString, UIImageView;

@protocol CNAvatarViewController;

@interface HUPresenceUserCell : UITableViewCell

{
    _Bool _disabled;
    _Bool _checked;
    _Bool _locationUnavailable;
    NSString *_userName;
    NSString *_deviceName;
    HFUserHandle *_userHandle;
    UIImageView *_checkmarkImageView;
    HUTitleDescriptionContentView *_titleDescriptionView;
    id <CNAvatarViewController> _avatarViewController;
    HULayoutContainerView *_avatarContainerView;
}

@property (nonatomic, readonly) UIImageView *checkmarkImageView;
@property (nonatomic, readonly) HUTitleDescriptionContentView *titleDescriptionView;
@property (nonatomic, readonly) id <CNAvatarViewController> avatarViewController;
@property (nonatomic, readonly) HULayoutContainerView *avatarContainerView;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) HFUserHandle *userHandle;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (nonatomic, getter=isLocationUnavailable) _Bool locationUnavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;
- (void)_updateCustomSeparatorInset;
- (void)_updateDescriptionText;

@end
