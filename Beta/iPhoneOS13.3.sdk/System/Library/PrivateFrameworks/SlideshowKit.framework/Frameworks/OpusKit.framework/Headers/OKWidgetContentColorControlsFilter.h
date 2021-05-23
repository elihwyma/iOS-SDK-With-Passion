/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter

{
    NSNumber *_inputSaturation;
    NSNumber *_inputBrightness;
    NSNumber *_inputContrast;
}

@property (retain, nonatomic) NSNumber *inputSaturation;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputContrast;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithInputSaturation:(id)arg1 inputBrightness:(id)arg2 inputContrast:(id)arg3;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (id)settingInputSaturation;
- (void)setSettingInputSaturation:(id)arg1;
- (id)setttingInputBrightness;
- (void)setSettingInputBrightness:(id)arg1;
- (id)settingInputContrast;
- (void)setSettingInputContrast:(id)arg1;

@end
