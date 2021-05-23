/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface FBApplicationProcessWatchdogPolicy : NSObject <Swift>

{
    double _deviceLaunchScale;
    double _deviceResumeScale;
    double _additionalFirstPartyScale;
    _Bool _enableThirdPartyPre9;
    int _daNotificationToken;
    NSDictionary *_watchdogPolicyExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultPolicy;
+ (double)_scaleForGestaltKey:(struct __CFString *)arg1;
+ (double)_defaultLaunchScale;
+ (double)_defaultResumeScale;
+ (double)_defaultFirstPartyAdditionalScale;

- (id)init;
- (void)dealloc;
- (void)_queue_reloadDefaultSettings;
- (double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(_Bool)arg2;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;

@end
