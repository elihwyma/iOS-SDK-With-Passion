/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView

{
    long long _hour;
    unsigned long long _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
    _Bool _isLoaded;
}

@property (readonly) _Bool isLoaded;

- (void)load;
- (void)layoutSubviews;
- (id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3;
- (void)_applyTintColor:(id)arg1;
- (id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;

@end
