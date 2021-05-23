/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@interface NTKSiderealDialView : UIView

{
    UIView *_hourContainerView;
}

- (id)_replicatorLayerWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 dialDiameter:(double)arg3 instanceCount:(long long)arg4 instanceRotation:(double)arg5 tickOpacity:(double)arg6 tickSize:(struct CGSize)arg7 tickCornerRadius:(double)arg8;
- (id)initWithFrame:(struct CGRect)arg1 dialDiameter:(double)arg2 device:(id)arg3;

@end
