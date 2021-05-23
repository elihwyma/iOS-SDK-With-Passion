/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UIImageView.h>

@class UIImage;

@interface MCLImageView : UIImageView

{
    UIImage *_image;
}

+ (id)bitmapImage:(id)arg1;

- (void)setImage:(id)arg1;
- (void)didMoveToWindow;
- (void)setImageDelayed:(id)arg1;
- (void)backgroundDecompressImage;

@end
