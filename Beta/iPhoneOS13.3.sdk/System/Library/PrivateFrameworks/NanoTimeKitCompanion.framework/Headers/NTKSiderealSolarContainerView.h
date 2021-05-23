/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, CLKDevice, NTKSiderealColorManager, UIImageView;

@interface NTKSiderealSolarContainerView : UIView

{
    CLKDevice *_device;
    UIImageView *_dayPathGlow;
    UIImageView *_dayDiskBloom;
    CAGradientLayer *_dayDiskGnomon;
    CAGradientLayer *_nightDiskGnomon;
    double _orbitDiameter;
    NTKSiderealColorManager *_colorManager;
    UIView *_dayContainerView;
    UIView *_nightContainerView;
    UIView *_dayDisk;
    UIView *_dayAccessoryContainerView;
    UIView *_nightDisk;
    UIView *_nightRing;
    UIView *_nightAccessoryContainerView;
}

@property (retain, nonatomic) UIView *dayContainerView;
@property (retain, nonatomic) UIView *dayDisk;
@property (retain, nonatomic) UIView *dayAccessoryContainerView;
@property (retain, nonatomic) UIView *nightContainerView;
@property (retain, nonatomic) UIView *nightDisk;
@property (retain, nonatomic) UIView *nightRing;
@property (retain, nonatomic) UIView *nightAccessoryContainerView;

- (id)_newGnomonView;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2 device:(id)arg3;
- (double)poseForDayGnomonImage;
- (double)poseForDayDiskBloomImage;
- (double)poseForDayDiskImage;
- (double)poseForNightGnomonImage;
- (double)poseForNightDiskImage;
- (double)poseForNightRingImage;
- (void)setSolarDayProgress:(double)arg1;

@end
