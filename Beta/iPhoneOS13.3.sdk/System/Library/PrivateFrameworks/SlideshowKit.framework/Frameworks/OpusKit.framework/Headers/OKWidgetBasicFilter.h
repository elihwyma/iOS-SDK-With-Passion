/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, OKPresentation;

@interface OKWidgetBasicFilter : CIFilter

{
    CIImage *_inputImage;
    OKPresentation *_inputPresentation;
}

@property (nonatomic) OKPresentation *inputPresentation;
@property (retain, nonatomic) CIImage *inputImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)outputImage;
- (id)inputKeys;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;

@end
