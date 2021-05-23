/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSCalendar, NSDateComponents, NSLayoutConstraint, NSNumber, NSString, UIFont, UIImage, UIImageView, UILabel, UIStackView;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell

{
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UILabel *_organDonationLabel;
    UIStackView *_mainContainerView;
    UIStackView *_labelContainerView;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_pictureWidthAnchor;
    NSCalendar *_gregorianCalendar;
    _Bool _resetFormatters;
    UIImage *_picture;
    NSString *_name;
    NSDateComponents *_gregorianBirthday;
    NSNumber *_organDonationStatus;
}

@property (retain, nonatomic) UIImage *picture;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDateComponents *gregorianBirthday;
@property (retain, nonatomic) NSNumber *organDonationStatus;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)timeZoneDidChange:(id)arg1;
- (void)updateSubviewsFromData;
- (id)_cachedCalendar;
- (id)organDonorStringWithTemplate:(id)arg1;
- (id)notOrganDonorString;

@end
