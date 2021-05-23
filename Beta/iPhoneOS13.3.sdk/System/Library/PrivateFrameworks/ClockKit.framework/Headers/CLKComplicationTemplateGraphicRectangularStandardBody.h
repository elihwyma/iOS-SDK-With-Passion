/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate

{
    CLKFullColorImageProvider *_headerImageProvider;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKTextProvider *_body2TextProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKTextProvider *body2TextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
