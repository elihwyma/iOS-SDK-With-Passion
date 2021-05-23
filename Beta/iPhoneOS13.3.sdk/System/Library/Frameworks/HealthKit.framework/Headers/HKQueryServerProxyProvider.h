/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskServerProxyProvider.h>

__attribute__((visibility("hidden")))
@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 query:(id)arg2 configuration:(id)arg3 queryUUID:(id)arg4;

@end
