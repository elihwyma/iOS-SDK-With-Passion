/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate

{
    CLKTextProvider *_innerTextProvider;
    CLKTextProvider *_outerTextProvider;
}

@property (copy, nonatomic) CLKTextProvider *innerTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
