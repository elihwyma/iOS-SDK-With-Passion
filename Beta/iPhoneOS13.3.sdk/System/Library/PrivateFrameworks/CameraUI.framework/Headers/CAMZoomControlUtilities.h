/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMZoomControlUtilities : NSObject

+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(struct CGRect)arg3 bottomBarTransparent:(_Bool)arg4 shutterButtonAlignmentRect:(struct CGRect)arg5 previewViewAlignmentRect:(struct CGRect)arg6;
+ (double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3;
+ (double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(_Bool)arg6;
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4;
+ (double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4;

@end
