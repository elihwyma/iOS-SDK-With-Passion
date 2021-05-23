/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate

{
    CLKComplicationTemplateGraphicCircular *_circularTemplate;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKComplicationTemplateGraphicCircular *circularTemplate;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
