/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeImage : CLKComplicationTemplate

{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKFullColorImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
