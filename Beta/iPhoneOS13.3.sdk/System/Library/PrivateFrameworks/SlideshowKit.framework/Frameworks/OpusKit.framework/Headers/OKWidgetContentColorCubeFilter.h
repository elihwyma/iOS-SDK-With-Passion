/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSData, NSNumber, UIColor;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter

{
    NSNumber *_inputMinHueAngle;
    NSNumber *_inputMaxHueAngle;
    UIColor *_inputReplaceColor;
    NSData *_cubeData;
}

@property (retain, nonatomic) NSNumber *inputMinHueAngle;
@property (retain, nonatomic) NSNumber *inputMaxHueAngle;
@property (retain, nonatomic) UIColor *inputReplaceColor;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithMinHueAngle:(id)arg1 inputMaxHueAngle:(id)arg2 inputReplaceColor:(id)arg3;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (void)createCubeWithMinHueAngle:(double)arg1 maxHueAngle:(double)arg2;
- (void)rgbToHSV:(float *)arg1 hsv:(float *)arg2;
- (void)setSettingInputReplaceColor:(id)arg1;
- (void)setSettingInputMinHueAngle:(id)arg1;
- (void)setSettingInputMaxHueAngle:(id)arg1;

@end
