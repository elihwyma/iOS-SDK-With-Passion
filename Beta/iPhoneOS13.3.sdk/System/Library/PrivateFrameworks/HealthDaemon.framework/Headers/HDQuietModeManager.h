/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, HDDNDModeAssertionService, NSString;

@protocol OS_dispatch_queue;

@interface HDQuietModeManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    _Bool _enableDNDDuringWorkout;
    HDDNDModeAssertionService *_dndModeAssertionService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1;
- (void)_observeDNDWorkoutDefault;
- (void)_queue_takeQuietModeAssertion;
- (void)_queue_releaseQuietModeAssertion;
- (void)_loadWorkoutDNDDefault;
- (void)unitTest_setDNDModeAssertionService:(id)arg1;
- (void)unitTest_setEnableDND:(_Bool)arg1;

@end
