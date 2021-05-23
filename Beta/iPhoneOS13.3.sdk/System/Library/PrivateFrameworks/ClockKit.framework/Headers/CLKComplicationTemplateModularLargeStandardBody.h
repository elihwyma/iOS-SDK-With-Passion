/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate

{
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKTextProvider *_body2TextProvider;
    CLKImageProvider *_headerImageProvider;
    CLKImageProvider *_body1ImageProvider;
    CLKTextProvider *_headerTrailingTextProvider;
}

@property (copy, nonatomic) CLKImageProvider *body1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider;
@property (nonatomic) _Bool shouldTruncateHeaderLeadingLabelFirst;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKTextProvider *body2TextProvider;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
