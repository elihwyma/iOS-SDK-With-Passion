/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXImageView.h>

@class UIImage;

@interface SXRepeatableImageView : SXImageView

{
    UIImage *_repeatingImage;
}

@property (retain, nonatomic) UIImage *repeatingImage;

- (id)image;
- (void)setImage:(id)arg1;
- (_Bool)isAccessibilityElement;

@end
