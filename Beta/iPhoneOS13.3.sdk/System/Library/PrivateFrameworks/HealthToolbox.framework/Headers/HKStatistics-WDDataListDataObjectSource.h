/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthKit/HKStatistics.h>

@class NSString;

@interface HKStatistics (WDDataListDataObjectSource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)source;
- (id)device;

@end
