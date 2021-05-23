/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeText : CLKComplicationTemplate

{
    CLKFullColorImageProvider *_headerImageProvider;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_bodyTextProvider;
}

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
