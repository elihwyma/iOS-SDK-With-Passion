/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeRingText : CLKComplicationTemplate

{
    float _fillFraction;
    CLKTextProvider *_textProvider;
    long long _ringStyle;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
