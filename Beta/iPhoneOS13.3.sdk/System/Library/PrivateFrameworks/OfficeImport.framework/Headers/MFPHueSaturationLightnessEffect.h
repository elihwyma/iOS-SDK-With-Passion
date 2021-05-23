/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPHueSaturationLightnessEffect : MFPEffect

{
    int mHueChange;
    int mSaturationChange;
    int mLightnessChange;
}

+ (id)GUID;

- (id)initWithHueChange:(int)arg1 saturationChange:(int)arg2 lightnessChange:(int)arg3;

@end
