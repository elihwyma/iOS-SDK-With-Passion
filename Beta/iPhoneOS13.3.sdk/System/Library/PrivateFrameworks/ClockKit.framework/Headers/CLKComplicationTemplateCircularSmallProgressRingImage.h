/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateCircularSmallProgressRingImage : CLKComplicationTemplate

{
    CLKImageProvider *_imageProvider;
    CLKProgressProvider *_progressProvider;
    long long _ringStyle;
}

@property (copy, nonatomic) CLKImageProvider *imageProvider;
@property (copy, nonatomic) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

- (struct CGSize)_imageSize;
- (void)_enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
