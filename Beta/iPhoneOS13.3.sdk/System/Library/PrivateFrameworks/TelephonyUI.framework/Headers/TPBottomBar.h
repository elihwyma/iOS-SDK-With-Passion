/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@interface TPBottomBar : UIView

{
    long long _orientation;
    long long _style;
}

+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (long long)fullscreenStyle;
+ (long long)overlayStyle;

- (id)init;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;

@end
