/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCircularImage : CLKComplicationTemplateGraphicCircular

{
    CLKFullColorImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
