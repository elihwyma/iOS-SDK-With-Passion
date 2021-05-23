/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface AVTAvatarLibraryCollectionViewCell : UICollectionViewCell

{
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateAvatarImage:(id)arg1;

@end
