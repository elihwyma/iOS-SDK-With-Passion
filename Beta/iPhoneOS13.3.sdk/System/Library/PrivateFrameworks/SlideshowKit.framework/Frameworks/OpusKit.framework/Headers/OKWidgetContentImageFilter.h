/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetBasicFilter.h>

@class CIImage, NSURL;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter

{
    NSURL *_inputImageURL;
    CIImage *_imageOutput;
}

@property (retain, nonatomic) NSURL *inputImageURL;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)filterWithImageURL:(id)arg1;

- (void)dealloc;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputImageURL:(id)arg1;

@end
