/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter

{
    NSNumber *_inputLevels;
}

@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithInputLevels:(id)arg1;

- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputLevels:(id)arg1;

@end
