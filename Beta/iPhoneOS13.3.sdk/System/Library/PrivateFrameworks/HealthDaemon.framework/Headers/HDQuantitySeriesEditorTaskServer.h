/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer

{
    HKQuantitySample *_quantitySample;
}

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_commitRemovedDatums:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
