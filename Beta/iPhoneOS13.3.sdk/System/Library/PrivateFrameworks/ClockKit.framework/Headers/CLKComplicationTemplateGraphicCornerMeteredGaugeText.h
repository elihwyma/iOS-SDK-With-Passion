/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate

{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKTextProvider *_outerTextProvider;
    CLKFullColorImageProvider *_outerImageProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *outerImageProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
