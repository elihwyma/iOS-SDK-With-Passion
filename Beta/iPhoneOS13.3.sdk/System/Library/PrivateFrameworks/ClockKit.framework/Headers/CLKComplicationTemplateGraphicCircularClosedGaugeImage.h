/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeImage : CLKComplicationTemplateGraphicCircular

{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
