/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKDualTimeView.h>

@class NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView

{
    NTKWhistlerAnalogColorPalette *_palette;
}

@property (retain, nonatomic) NTKWhistlerAnalogColorPalette *palette;

- (double)_analogTickInset;
- (struct CGSize)_hourTickSize;
- (struct CGSize)_minuteTickSize;
- (unsigned long long)_hourTickCount;
- (unsigned long long)_minuteTickCount;
- (id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1;
- (id)_digitalTimeLabelColorForColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 andDevice:(id)arg3;
- (id)_secondHandColorForColor:(unsigned long long)arg1;

@end
