/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, EDPersistenceHookRegistry, NSString;

@protocol EDForegroundReporting, EFScheduler, OS_dispatch_queue;

@interface EDClientResumer : NSObject

{
    NSString *_bundleID;
    BKSProcessAssertion *_assertion;
    id <EDForegroundReporting> _foregroundReporter;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_queue;
    id <EFScheduler> _scheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void)invalidate;
- (void)persistenceDidReconcileProtectedData;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)initWithClientBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 foregroundReporter:(id)arg3;

@end
