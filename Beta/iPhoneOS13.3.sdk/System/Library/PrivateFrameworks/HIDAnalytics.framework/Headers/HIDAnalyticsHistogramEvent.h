/*
 Image: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
 */

#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent

{
    HIDAnalyticsHistogramEventField *_field;
    _Bool _isUpdated;
}

- (id)value;
- (void)setValue:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)addField:(id)arg1;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;

@end
