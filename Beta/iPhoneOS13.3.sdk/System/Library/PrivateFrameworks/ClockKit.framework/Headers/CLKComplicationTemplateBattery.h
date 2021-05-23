/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate

{
    long long _family;
    _Bool _charging;
    CLKTextProvider *_textProvider;
    double _level;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (nonatomic) double level;
@property (nonatomic) _Bool charging;

+ (id)batteryTemplateWithFamily:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
