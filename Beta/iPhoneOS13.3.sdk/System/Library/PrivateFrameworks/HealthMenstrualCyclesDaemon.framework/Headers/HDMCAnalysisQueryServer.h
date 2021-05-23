/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDMCProfileExtension, HKMCAnalysis, NSString;

@interface HDMCAnalysisQueryServer : HDQueryServer

{
    HDMCProfileExtension *_profileExtension;
    HKMCAnalysis *_analysis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (id)objectTypes;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (id)_analysisQueryClientProxy;
- (void)_handleAnalysis:(id)arg1;

@end
