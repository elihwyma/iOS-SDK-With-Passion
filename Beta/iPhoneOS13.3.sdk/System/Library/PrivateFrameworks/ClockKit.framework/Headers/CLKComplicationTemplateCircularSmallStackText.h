/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate

{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
}

@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
