/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod, NSString;

__attribute__((visibility("hidden")))
@interface WDSleepDetailViewDurationDataSource : NSObject

{
    HKSleepAnalysis *_sleepAnalysis;
    HKSleepDay *_sleepDay;
    HKSleepPeriod *_sleepPeriod;
}

@property (nonatomic, readonly) HKSleepAnalysis *sleepAnalysis;
@property (nonatomic, readonly) HKSleepDay *sleepDay;
@property (nonatomic, readonly) HKSleepPeriod *sleepPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfRows;
- (id)initWithSleepAnalysis:(id)arg1;
- (id)mainSection;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (id)detailSectionForRow:(long long)arg1 column:(long long)arg2;

@end
