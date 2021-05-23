/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class NSSet;

@interface HDSampleCountQueryServer : HDQueryServer

{
    NSSet *_sampleQueryDescriptions;
}

+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;

@end
