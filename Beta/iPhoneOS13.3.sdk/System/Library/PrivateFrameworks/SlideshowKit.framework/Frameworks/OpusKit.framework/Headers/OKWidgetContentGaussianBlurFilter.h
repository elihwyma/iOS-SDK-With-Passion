/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter

{
    NSNumber *_inputRadius;
}

@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithInputRadius:(id)arg1;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (id)settingInputRadius;
- (void)setSettingInputRadius:(id)arg1;

@end
