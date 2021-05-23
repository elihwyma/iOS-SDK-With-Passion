/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCornerCircularImage : CLKComplicationTemplate

{
    CLKFullColorImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
