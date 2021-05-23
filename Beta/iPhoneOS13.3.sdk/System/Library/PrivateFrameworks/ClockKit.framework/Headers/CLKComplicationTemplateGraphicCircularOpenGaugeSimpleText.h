/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular

{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_bottomTextProvider;
    CLKTextProvider *_centerTextProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *bottomTextProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
