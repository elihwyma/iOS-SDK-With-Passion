/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UILabel, UIStackView, VUIAppInstallView, VUITextBadge;

__attribute__((visibility("hidden")))
@interface VUIAppInstallLockup : UIView

{
    VUIAppInstallView *_iconView;
    UILabel *_nameLabel;
    UILabel *_iAPLabel;
    UILabel *_subtitleLabel;
    UIStackView *_nameAndRatingStack;
    UIStackView *_containerStack;
    _Bool _canFocus;
    UIImage *_icon;
    NSString *_name;
    NSString *_ageRating;
    NSString *_iAP;
    NSString *_subtitle;
    UIStackView *_metadataStackView;
    VUITextBadge *_ageRatingBadge;
    UILabel *_ageRatingLabel;
}

@property (retain, nonatomic) VUITextBadge *ageRatingBadge;
@property (retain, nonatomic) UILabel *ageRatingLabel;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ageRating;
@property (copy, nonatomic) NSString *iAP;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) VUIAppInstallView *installView;
@property (retain, nonatomic) UIStackView *metadataStackView;
@property (nonatomic) _Bool canFocus;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (void)_configureLabels;
- (void)_layoutForTvos;
- (void)_layoutForIos;
- (void)_configureAgeRatingBadge;
- (id)_textColorForDarkMode;

@end
