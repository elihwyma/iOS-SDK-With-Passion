/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView

{
    UIImageView *_shadowView;
}

@property (readonly) UIImageView *shadowView;

+ (id)backgroundImage;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;

- (void)setOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;

@end
