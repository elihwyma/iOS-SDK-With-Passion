/*
 Image: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface HIDAnalyticsEvent : NSObject

{
    NSMutableDictionary *_fields;
    _Bool _isUpdated;
    NSString *_name;
    NSDictionary *_desc;
}

@property (retain) NSString *name;
@property (retain) NSDictionary *desc;

- (id)description;
- (void)cancel;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)addField:(id)arg1;
- (void)activate;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;

@end
