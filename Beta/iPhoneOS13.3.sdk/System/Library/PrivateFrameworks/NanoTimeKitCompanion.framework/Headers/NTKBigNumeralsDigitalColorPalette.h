/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKBigNumeralsDigitalColorPalette : NSObject

+ (id)swatchColorForColor:(unsigned long long)arg1 device:(id)arg2;
+ (id)swatchImageForColor:(unsigned long long)arg1 device:(id)arg2;
+ (id)standardHourColorForColor:(unsigned long long)arg1 shifted:(_Bool)arg2 device:(id)arg3;
+ (id)minuteColorForColor:(unsigned long long)arg1 device:(id)arg2;
+ (_Bool)_needTwoToneSwatchForColor:(unsigned long long)arg1;
+ (id)hourColorForColor:(unsigned long long)arg1 device:(id)arg2;

@end
