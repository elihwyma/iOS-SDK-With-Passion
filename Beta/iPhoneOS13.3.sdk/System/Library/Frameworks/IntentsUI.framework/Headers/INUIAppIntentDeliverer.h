/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

@class AFSafetyBlock, BKSApplicationStateMonitor, BKSProcessAssertion, INWatchdogTimer, NSString;

@protocol INUIIntentBackgroundHandlingAssertion, OS_dispatch_group, OS_dispatch_queue;

@interface INUIAppIntentDeliverer : NSObject

{
    BKSApplicationStateMonitor *_appStateMonitor;
    BKSProcessAssertion *_backgroundLaunchAssertion;
    INWatchdogTimer *_assertionTimer;
    NSObject<OS_dispatch_group> *_assertionSetupGroup;
    NSObject<OS_dispatch_queue> *_queue;
    INWatchdogTimer *_requestTimer;
    AFSafetyBlock *_requestCompletionBlock;
    id <INUIIntentBackgroundHandlingAssertion> _intentBackgroundHandlingAssertion;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

+ (id)alloc;

- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_processAssertionWasAcquired:(_Bool)arg1;
- (void)_processAssertionWasInvalidatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)processAssertionWasInvalidatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)deliverIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidateIntentDelivery;
- (void)_handleSuccessfulAppLaunchForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startRequestTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateRequestTimer;
- (void)_invalidateIntentBackgroundHandlingAssertion;

@end
