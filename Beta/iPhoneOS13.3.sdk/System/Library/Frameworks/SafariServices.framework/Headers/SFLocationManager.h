/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, CLInUseAssertion, NSCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFLocationManager : NSObject

{
    CLInUseAssertion *_assertion;
    NSCountedSet *_clients;
    NSMutableSet *_foregroundApplications;
    BKSApplicationStateMonitor *_stateMonitor;
}

+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (id)sharedLocationManager;

- (id)init;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_setApplication:(id)arg1 isForeground:(_Bool)arg2;
- (void)_updateAssertion;
- (void)_updateApplicationsToMonitor;
- (void)addClientForApplication:(id)arg1;
- (void)removeClientForApplication:(id)arg1;

@end
