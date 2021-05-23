/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter

{
    NSNumber *_inputIntensity;
}

@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithIntensity:(id)arg1;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputIntensity:(id)arg1;
- (id)settingInputIntensity;

@end
