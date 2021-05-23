/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateUtilitarianSmallFlat : CLKComplicationTemplate

{
    CLKTextProvider *_textProvider;
    CLKImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (copy, nonatomic) CLKImageProvider *imageProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
