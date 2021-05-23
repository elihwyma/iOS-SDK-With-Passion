/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView

{
    long long _badgeCount;
    UIView *_badgeContainerView;
    UIImageView *_badgeImageView;
    UILabel *_badgeLabel;
    UIImageView *_disclosureImageView;
}

@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UIImageView *disclosureImageView;
@property (nonatomic) long long badgeCount;

+ (id)_disclosureImage;

- (id)initWithFrame:(struct CGRect)arg1;

@end
