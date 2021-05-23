/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate

{
    CLKImageProvider *_imageProvider;
}

@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (struct CGSize)_imageSize;

- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
