/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPBrightnessContrastEffect : MFPEffect

{
    int mBrightness;
    int mContrast;
}

+ (id)GUID;

- (id)initWithBrightness:(int)arg1 contrast:(int)arg2;

@end
