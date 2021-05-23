/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate

{
    float _fillFraction;
    CLKImageProvider *_imageProvider;
    long long _ringStyle;
}

@property (copy, nonatomic) CLKImageProvider *imageProvider;
@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;

+ (struct CGSize)_imageSize;

- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
