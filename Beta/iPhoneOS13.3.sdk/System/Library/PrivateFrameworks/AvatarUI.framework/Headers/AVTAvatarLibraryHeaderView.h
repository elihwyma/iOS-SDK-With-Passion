/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface AVTAvatarLibraryHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;

@end
