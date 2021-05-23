/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeImage : CLKComplicationTemplate

{
    CLKFullColorImageProvider *_imageProvider;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
