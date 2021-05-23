/*
 Image: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HIDAnalyticsHistogramEventField : NSObject

{
    unsigned char _segmentCount;
    struct _HIDAnalyticsHistogramSegment *_segments;
    NSString *_fieldName;
}

@property (readonly) NSString *fieldName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) id value;

- (void)dealloc;
- (void)setIntegerValue:(unsigned long long)arg1;
- (id)initWithAttributes:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)createBuckets:(struct _HIDAnalyticsHistogramSegmentConfig *)arg1 count:(long long)arg2;

@end
