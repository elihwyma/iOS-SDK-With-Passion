/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject

{
    _Bool _callActive;
    NSMutableSet *__disabledReasons;
    NSObject<OS_dispatch_queue> *__avscAccessQueue;
}

@property (nonatomic, readonly) NSMutableSet *_disabledReasons;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, getter=isCallActive) _Bool callActive;

- (id)init;
- (void)dealloc;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)removeDisabledReason:(long long)arg1;
- (void)_enableCallStatusMonitor;
- (id)initWithInitialDisabledReasons:(id)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_descriptionForReasons:(id)arg1;
- (void)_setCallActive:(_Bool)arg1;
- (void)addDisabledReason:(long long)arg1;
- (id)initDisabledForLaunch;

@end
