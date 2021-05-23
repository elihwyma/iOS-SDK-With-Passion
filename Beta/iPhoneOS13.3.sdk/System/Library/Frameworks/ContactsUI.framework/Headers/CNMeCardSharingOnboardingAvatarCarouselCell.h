/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSUUID, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell

{
    NSUUID *_displaySessionUUID;
    double _imageInsetPercentage;
    UIImageView *_imageView;
    UILabel *_label;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double imageInsetPercentage;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
