/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView;

@interface PXPersonTableViewCell : UITableViewCell

{
    UIImage *_personIcon;
    NSString *_personFirstName;
    NSString *_personLastName;
    UIImageView *__personIconImageView;
    UIImage *__personMonogramImage;
}

@property (retain, nonatomic, setter=_setPersonIconImageView:) UIImageView *_personIconImageView;
@property (retain, nonatomic, setter=_setPersonMonogramImage:) UIImage *_personMonogramImage;
@property (retain, nonatomic) UIImage *personIcon;
@property (copy, nonatomic) NSString *personFirstName;
@property (copy, nonatomic) NSString *personLastName;

- (void)layoutSubviews;
- (void)_updatePersonIconImageView;

@end
