/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate

{
    CLKImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
}

@property (copy, nonatomic) CLKImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

+ (struct CGSize)_imageSize;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
