/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, HDProfile, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface HDWorkoutEventsManager : NSObject

{
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_eventCollectors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4;
- (void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
