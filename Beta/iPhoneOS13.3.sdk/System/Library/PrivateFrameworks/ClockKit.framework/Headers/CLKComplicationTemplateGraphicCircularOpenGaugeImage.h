/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeImage : CLKComplicationTemplateGraphicCircular

{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_bottomImageProvider;
    CLKTextProvider *_centerTextProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *bottomImageProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
