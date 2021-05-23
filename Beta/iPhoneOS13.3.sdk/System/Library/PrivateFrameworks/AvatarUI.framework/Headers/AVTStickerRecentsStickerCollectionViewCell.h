/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSUUID, UIImageView;

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell

{
    UIImageView *_imageView;
    NSString *_title;
    NSUUID *_displaySessionUUID;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSUUID *displaySessionUUID;

+ (id)identifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentBounds;
- (void)updateWithImage:(id)arg1;
- (void)updateWithDefaultImage;

@end
