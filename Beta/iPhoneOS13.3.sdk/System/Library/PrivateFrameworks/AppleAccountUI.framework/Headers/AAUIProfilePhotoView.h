/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface AAUIProfilePhotoView : UIView

{
    UIImageView *_photoView;
    UIButton *_editButton;
    _Bool _isEditing;
}

@property (retain, nonatomic) UIImage *photo;
@property (nonatomic, setter=setEditing:) _Bool isEditing;

- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end
