/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

{
    CIColor *_inputColor;
}

@property (retain, nonatomic) CIColor *inputColor;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputColor:(id)arg1;

@end
