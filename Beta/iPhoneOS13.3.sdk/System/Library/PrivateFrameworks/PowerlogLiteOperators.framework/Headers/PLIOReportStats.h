/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface PLIOReportStats : NSObject

{
    NSDictionary *_ioReportSample;
    NSDate *_sampleTime;
    NSDate *_sampleTimePrevious;
    struct __IOReportSubscriptionCF *_subscription;
    NSDictionary *_subscribedChannels;
    NSString *_driverName;
}

@property (retain) NSString *driverName;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (id)init;
- (void)dealloc;
- (id)_init;
- (id)initWithGroup:(id)arg1 andSubGroup:(id)arg2 withChannelIDs:(id)arg3 manualChannelOnly:(_Bool)arg4;
- (id)initWithDriverName:(id)arg1 withGroup:(id)arg2;
- (id)getCurrentStats;
- (id)initWithGroup:(id)arg1 andSubGroup:(id)arg2;
- (id)initWithGroup:(id)arg1 andSubGroup:(id)arg2 withChannelIDs:(id)arg3;
- (id)currentValueForSimpleChannel:(id)arg1;
- (_Bool)updateStats;
- (double)getSampleDuration;
- (id)parseSimpleDeltaSample;
- (id)deltaValueForStateChannel:(id)arg1 atIndex:(int)arg2;
- (_Bool)subscribeToGroup:(id)arg1 andSubGroup:(id)arg2 withChannelIDs:(id)arg3;
- (_Bool)subscribeToGroup:(id)arg1 andSubGroup:(id)arg2 withChannelIDs:(id)arg3 manualChannelOnly:(_Bool)arg4;
- (void)clearSubscription;
- (_Bool)updateStatsWithBlock:(CDUnknownBlockType)arg1;
- (id)getDeltaStats;
- (_Bool)subscribeToGroup:(id)arg1 andSubGroup:(id)arg2;
- (id)parseSimpleIOReportSample;
- (id)deltaValueForSimpleChannel:(id)arg1;
- (id)currentValueForStateChannel:(id)arg1 atIndex:(int)arg2;

@end
