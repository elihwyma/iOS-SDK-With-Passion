/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (Camera)

+ (_Bool)cui_usesSFCamera;
+ (id)cui_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cui_cameraKerningForFont:(id)arg1;
+ (id)cui_cameraFontOfSize:(double)arg1;
+ (id)cui_cameraMonospacedFontOfSize:(double)arg1;
+ (id)cui_cameraTimerFontForContentSize:(id)arg1 layoutStyle:(long long)arg2;
+ (id)cui_cameraFontForContentSize:(id)arg1;
+ (id)cui_cameraModeDialFontForContentSize:(id)arg1 weight:(double)arg2;
+ (id)cui_cameraMonospacedFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)cui_cameraFontOfSize:(double)arg1 weight:(double)arg2;
+ (double)cui_interpolatedAdditionalFontSizeForMainScreen;
+ (double)cui_cameraModeDialFontSizeForContentSize:(id)arg1;
+ (id)cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cui_cameraPadModeDialFontForContentSize:(id)arg1;

@end
