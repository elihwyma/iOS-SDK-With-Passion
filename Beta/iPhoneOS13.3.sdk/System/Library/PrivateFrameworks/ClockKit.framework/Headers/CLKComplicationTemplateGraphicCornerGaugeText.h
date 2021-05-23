/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeText : CLKComplicationTemplate

{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKTextProvider *_outerTextProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
