/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface PRImageView : UIView

{
    _Bool _circular;
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isCircular) _Bool circular;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
