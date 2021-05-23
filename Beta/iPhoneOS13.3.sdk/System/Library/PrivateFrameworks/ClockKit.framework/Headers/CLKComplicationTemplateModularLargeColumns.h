/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate

{
    _Bool _useNoColumnPadding;
    CLKTextProvider *_row1Column1TextProvider;
    CLKTextProvider *_row1Column2TextProvider;
    CLKTextProvider *_row2Column1TextProvider;
    CLKTextProvider *_row2Column2TextProvider;
    CLKTextProvider *_row3Column1TextProvider;
    CLKTextProvider *_row3Column2TextProvider;
    CLKImageProvider *_row1ImageProvider;
    CLKImageProvider *_row2ImageProvider;
    CLKImageProvider *_row3ImageProvider;
    long long _column2Alignment;
}

@property (nonatomic) _Bool useNoColumnPadding;
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row3Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row3Column2TextProvider;
@property (copy, nonatomic) CLKImageProvider *row1ImageProvider;
@property (copy, nonatomic) CLKImageProvider *row2ImageProvider;
@property (copy, nonatomic) CLKImageProvider *row3ImageProvider;
@property (nonatomic) long long column2Alignment;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
