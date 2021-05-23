/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice;

@interface NTKWhistlerAnalogColorPalette : NSObject

{
    CLKDevice *_device;
    _Bool _canShowMonochrome;
}

+ (id)swatchColorForColor:(unsigned long long)arg1;

- (id)initWithDevice:(id)arg1;
- (id)handStrokeColorForColor:(unsigned long long)arg1;
- (id)handFillColorForColor:(unsigned long long)arg1;
- (id)secondHandColorForColor:(unsigned long long)arg1;
- (id)hourTicksColorForColor:(unsigned long long)arg1;
- (id)complicationForegroundColor:(unsigned long long)arg1;
- (id)bezelTextColorForColor:(unsigned long long)arg1;
- (id)platterTextColorForColor:(unsigned long long)arg1;
- (id)dialFillColorForColor:(unsigned long long)arg1;
- (id)minuteTicksColorForColor:(unsigned long long)arg1;
- (id)mainColorForColor:(unsigned long long)arg1;

@end
