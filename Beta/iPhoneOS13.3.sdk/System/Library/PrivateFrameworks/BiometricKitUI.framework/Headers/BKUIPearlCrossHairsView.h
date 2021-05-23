/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class BKUIPearlCrossHairsRenderingView, UIImageView;

@interface BKUIPearlCrossHairsView : UIView

{
    BKUIPearlCrossHairsRenderingView *_renderingView;
    UIImageView *_arrowView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setPitch:(double)arg1 yaw:(double)arg2 animated:(_Bool)arg3;
- (double)angleFromDirection:(unsigned long long)arg1;
- (void)nudgeCrossHairsAtAngle:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPitch:(double)arg1 yaw:(double)arg2;
- (void)nudgeInDirection:(unsigned long long)arg1 smallNudgePeak:(CDUnknownBlockType)arg2 largeNudgePeak:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
