/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXApplicationState : NSObject

{
    _Bool _isRegisteredForEvents;
    long long _applicationState;
}

@property (nonatomic) _Bool isRegisteredForEvents;
@property (nonatomic) long long applicationState;

+ (id)sharedInstance;
+ (void)beginMonitoringApplicationState;

- (id)init;
- (void)dealloc;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)unregisterForEvents;
- (void)registerForEvents;

@end
