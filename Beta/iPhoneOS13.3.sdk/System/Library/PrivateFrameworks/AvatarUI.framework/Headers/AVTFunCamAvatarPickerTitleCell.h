/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface AVTFunCamAvatarPickerTitleCell : UICollectionViewCell

{
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithTitle:(id)arg1;

@end
