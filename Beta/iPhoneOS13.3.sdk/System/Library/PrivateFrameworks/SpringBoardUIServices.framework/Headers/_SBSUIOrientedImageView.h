/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIImage, UIImageView;

@interface _SBSUIOrientedImageView : SBFTouchPassThroughView

{
    UIImageView *_imageView;
    UIImage *_portraitImage;
    UIImage *_landscapeImage;
}

@property (retain, nonatomic) UIImage *portraitImage;
@property (retain, nonatomic) UIImage *landscapeImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
