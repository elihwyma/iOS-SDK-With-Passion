/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKProxyProvider.h>

@class HKTaskConfiguration, NSString, NSURL, NSUUID;

@interface HKTaskServerProxyProvider : HKProxyProvider

{
    NSUUID *_taskUUID;
    NSURL *_pluginURL;
    HKTaskConfiguration *_taskConfiguration;
}

@property (copy, nonatomic, readonly) NSUUID *taskUUID;
@property (copy, nonatomic, readonly) NSString *taskIdentifier;
@property (copy, nonatomic) NSURL *pluginURL;
@property (copy) HKTaskConfiguration *taskConfiguration;

- (id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4;
- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
