/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenMeteredGaugeImage : CLKComplicationTemplateGraphicCircular

{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_imageProvider;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
