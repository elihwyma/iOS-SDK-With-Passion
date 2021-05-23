/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SRDeviceUsageReport : NSObject

{
    double _duration;
    long long _totalScreenWakes;
    long long _totalUnlocks;
    double _totalUnlockDuration;
    NSMutableDictionary *_mutableApplicationUsageByCategory;
    NSMutableDictionary *_mutableNotificationUsageByCategory;
    NSMutableDictionary *_mutableWebUsageByCategory;
    double _startTime;
}

@property (retain) NSMutableDictionary *mutableApplicationUsageByCategory;
@property (retain) NSMutableDictionary *mutableNotificationUsageByCategory;
@property (retain) NSMutableDictionary *mutableWebUsageByCategory;
@property double startTime;
@property double duration;
@property long long totalScreenWakes;
@property long long totalUnlocks;
@property double totalUnlockDuration;
@property (copy, readonly) NSDictionary *applicationUsageByCategory;
@property (copy, readonly) NSDictionary *notificationUsageByCategory;
@property (copy, readonly) NSDictionary *webUsageByCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)deviceUsageReportWithInterval:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;

@end
