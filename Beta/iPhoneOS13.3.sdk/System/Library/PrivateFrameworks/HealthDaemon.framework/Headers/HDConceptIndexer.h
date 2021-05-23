/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile;

@protocol OS_dispatch_queue;

@interface HDConceptIndexer : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (_Bool)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sampleQueryDescriptionsFollowingAnchor:(id)arg1;
+ (id)indexSample:(id)arg1 profile:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)processSamplesWithLimit:(unsigned long long)arg1 countOfSamplesProcessed:(long long *)arg2 error:(id *)arg3;
- (_Bool)_syncQueue_processSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long *)arg2 error:(id *)arg3;
- (_Bool)_syncQueue_processUpdatedSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long *)arg2 error:(id *)arg3;
- (_Bool)_syncQueue_processDeletedSamplesWithLimit:(long long)arg1 sampleType:(id)arg2 countOfSamplesProcessed:(long long *)arg3 error:(id *)arg4;
- (_Bool)_syncQueue_resetWithError:(id *)arg1;

@end
