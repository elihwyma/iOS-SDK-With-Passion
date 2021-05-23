/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate

{
    CLKDateTextProvider *_weekdayTextProvider;
    CLKDateTextProvider *_dayTextProvider;
    unsigned long long _highlightMode;
}

@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider;
@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider;
@property (nonatomic) unsigned long long highlightMode;

- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (void)setHighlightLine2:(_Bool)arg1;
- (_Bool)highlightLine2;

@end
