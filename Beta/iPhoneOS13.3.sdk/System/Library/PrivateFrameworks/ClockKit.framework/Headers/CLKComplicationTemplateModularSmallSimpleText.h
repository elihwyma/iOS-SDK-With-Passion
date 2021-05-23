/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallSimpleText : CLKComplicationTemplate

{
    CLKTextProvider *_textProvider;
    long long _maxDynamicFontSize;
}

@property (nonatomic) long long maxDynamicFontSize;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (id)init;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
