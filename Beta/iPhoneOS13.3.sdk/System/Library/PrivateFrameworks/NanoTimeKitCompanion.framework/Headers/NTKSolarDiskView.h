/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice;

@interface NTKSolarDiskView : UIView

{
    double _horizonLine;
    CLKDevice *_device;
    UIView *_sunUpView;
    UIView *_sunDownView;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIView *sunUpView;
@property (retain, nonatomic) UIView *sunDownView;
@property (nonatomic) double horizonLine;

- (void)setCenter:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end
