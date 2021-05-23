/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView

@property (nonatomic, readonly) HFTemperatureIconDescriptor *iconDescriptor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)shouldFlipForRTL;

@end
