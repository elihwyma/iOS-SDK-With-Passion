/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextFieldBorderView : UIView

{
    UIImage *_image;
}

- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)useBlockyMagnificationInClassic;
- (void)_updateViewPropertiesForBackgroundImage;

@end
