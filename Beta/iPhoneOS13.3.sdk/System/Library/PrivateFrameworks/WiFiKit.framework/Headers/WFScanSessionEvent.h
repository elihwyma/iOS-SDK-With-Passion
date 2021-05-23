/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

@protocol WFAWDWiFiUIScanSessionMetric;

@interface WFScanSessionEvent : NSObject

{
    PBCodable<WFAWDWiFiUIScanSessionMetric> *_metric;
}

@property (retain, nonatomic) PBCodable<WFAWDWiFiUIScanSessionMetric> *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)scanSessionEventWithSectionCounts:(id)arg1 duration:(double)arg2;

- (unsigned int)metricIdentifier;
- (id)initWithScanSectionCounts:(id)arg1 duration:(double)arg2;
- (unsigned long long)_durationBucketFromTimeInterval:(double)arg1;
- (id)_countMetricsFromSectionCounts:(id)arg1;

@end
