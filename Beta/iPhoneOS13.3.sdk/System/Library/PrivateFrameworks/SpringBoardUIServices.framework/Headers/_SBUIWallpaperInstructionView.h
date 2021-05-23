/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _SBUIWallpaperInstructionView : UIView

{
    UIImageView *_imageView;
    UILabel *_textLabel;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (id)initWithImage:(id)arg1 text:(id)arg2 font:(id)arg3;

@end
