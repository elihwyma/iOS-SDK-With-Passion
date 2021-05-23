/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackImage : CLKComplicationTemplateGraphicCircular

{
    CLKFullColorImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
