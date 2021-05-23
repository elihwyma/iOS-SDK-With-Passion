/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianSmallSquare : CLKComplicationTemplate

{
    CLKImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKImageProvider *imageProvider;

- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
