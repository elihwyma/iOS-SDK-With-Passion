/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerTextImage : CLKComplicationTemplate

{
    CLKTextProvider *_textProvider;
    CLKFullColorImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
