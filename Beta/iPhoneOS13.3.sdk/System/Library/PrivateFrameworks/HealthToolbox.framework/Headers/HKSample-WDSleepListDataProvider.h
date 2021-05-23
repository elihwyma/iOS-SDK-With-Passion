/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthKit/HKSample.h>

@class NSDateComponentsFormatter;

@interface HKSample (WDSleepListDataProvider)

@property (nonatomic, readonly) NSDateComponentsFormatter *_timeFormatter;

- (id)displayString;
- (id)sleep_displayString;
- (id)quantitySampleForType:(id)arg1;

@end
