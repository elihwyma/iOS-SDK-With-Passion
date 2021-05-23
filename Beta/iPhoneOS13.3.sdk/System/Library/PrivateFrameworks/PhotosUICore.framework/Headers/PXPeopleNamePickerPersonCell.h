/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleNamePickerCell.h>

@class UIImageView;

@interface PXPeopleNamePickerPersonCell : PXPeopleNamePickerCell

{
    UIImageView *_personAvatarView;
}

@property (weak, nonatomic, readonly) UIImageView *personAvatarView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
