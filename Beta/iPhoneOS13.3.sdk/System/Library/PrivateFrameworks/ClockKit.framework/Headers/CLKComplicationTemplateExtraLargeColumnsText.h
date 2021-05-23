/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeColumnsText : CLKComplicationTemplate

{
    _Bool _highlightColumn2;
    CLKTextProvider *_row1Column1TextProvider;
    CLKTextProvider *_row1Column2TextProvider;
    CLKTextProvider *_row2Column1TextProvider;
    CLKTextProvider *_row2Column2TextProvider;
    long long _column2Alignment;
}

@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic) long long column2Alignment;
@property (nonatomic) _Bool highlightColumn2;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
