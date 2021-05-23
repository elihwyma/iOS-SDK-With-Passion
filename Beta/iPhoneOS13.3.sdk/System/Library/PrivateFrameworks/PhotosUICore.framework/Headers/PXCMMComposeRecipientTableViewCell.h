/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class CNAvatarViewController, CNContact, NSString, PXRoundImageView, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell

{
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_transportLabel;
    UIImageView *_accessoryImageView;
    _Bool _emphasizeLocalizedName;
    _Bool _checked;
    int _currentRequestID;
    NSString *_localizedName;
    NSString *_transport;
    UIImage *_faceImage;
    UIColor *_textColor;
    CNContact *_contact;
    double _inset;
    UIView *_popoverSourceView;
    struct CGSize _faceImageViewSize;
}

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) _Bool emphasizeLocalizedName;
@property (copy, nonatomic) NSString *transport;
@property (retain, nonatomic) UIImage *faceImage;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) double inset;
@property (nonatomic) struct CGSize faceImageViewSize;
@property (retain, nonatomic) UIView *popoverSourceView;
@property (nonatomic) int currentRequestID;
@property (nonatomic, getter=isChecked) _Bool checked;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateLayout;
- (void)_updateAvatarView;
- (void)_updateLocalizedNameLabel;
- (void)_updateTransportLabel;
- (void)_updateAccessoryImageView;

@end
