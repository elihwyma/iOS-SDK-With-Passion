/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface TPLCDSubImageView : UIView

{
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithDefaultSize;

@end
