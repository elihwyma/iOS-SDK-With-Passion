/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer

{
    _Bool _deliversUpdates;
    NSMutableSet *_sources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (id)sourceClientProxy;
- (void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_sourceAdded:(id)arg1;
- (double)_queue_queryLogThreshold;

@end
