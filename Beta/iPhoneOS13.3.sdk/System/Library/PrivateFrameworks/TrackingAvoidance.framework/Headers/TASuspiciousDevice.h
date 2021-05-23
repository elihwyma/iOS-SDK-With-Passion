/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

#import <TrackingAvoidance/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, TAMetricsDetection, TASPAdvertisement;

@interface TASuspiciousDevice : NSObject <Swift>

{
    NSData *_address;
    NSDictionary *_detectionSummary;
    NSDate *_date;
    TASPAdvertisement *_latestAdvertisement;
    NSArray *_locationHistory;
    TAMetricsDetection *_detectionMetrics;
}

@property (copy, nonatomic, readonly) NSData *address;
@property (copy, nonatomic, readonly) NSDictionary *detectionSummary;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (copy, nonatomic, readonly) NSArray *locationHistory;
@property (nonatomic, readonly) TAMetricsDetection *detectionMetrics;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionDictionary;
- (id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5;

@end
