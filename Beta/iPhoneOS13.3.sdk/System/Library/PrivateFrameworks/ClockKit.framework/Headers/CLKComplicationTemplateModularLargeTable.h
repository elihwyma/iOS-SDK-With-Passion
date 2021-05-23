/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate

{
    _Bool _useNoColumnPadding;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_row1Column1TextProvider;
    CLKTextProvider *_row1Column2TextProvider;
    CLKTextProvider *_row2Column1TextProvider;
    CLKTextProvider *_row2Column2TextProvider;
    CLKImageProvider *_headerImageProvider;
    long long _column2Alignment;
}

@property (nonatomic) _Bool useNoColumnPadding;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (nonatomic) long long column2Alignment;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
