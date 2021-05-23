/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKQuery;

@interface HeartRateStore : NSObject

{
    _Bool _heartRateEnabled;
    HKHealthStore *_healthStore;
    HKQuery *_heartRateQuery;
    unsigned long long _recentHeartRate;
    double _recentHeartRateTime;
}

@property (retain, nonatomic) HKQuery *heartRateQuery;
@property (nonatomic) unsigned long long recentHeartRate;
@property (nonatomic) double recentHeartRateTime;

+ (id)sharedStore;

- (id)init;
- (void)_updateHeartRateEnabled;
- (void)_updateHeartRateWithCompletion:(CDUnknownBlockType)arg1;
- (void)recentHeartRateWithCompletion:(CDUnknownBlockType)arg1;

@end
