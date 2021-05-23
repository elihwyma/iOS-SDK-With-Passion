/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CAMPowerController : NSObject

{
    _Atomic int _assertionIdentifierGenerator;
    _Bool __isBackgrounded;
    int __powerPressureNotificationToken;
    unsigned int __powerControllerQueue_powerPressureLevel;
    NSMutableDictionary *__assertionsByIdentifier;
    NSObject<OS_dispatch_queue> *__powerControllerQueue;
    unsigned long long __backgroundTaskIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_assertionsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_powerControllerQueue;
@property (nonatomic, readonly) unsigned long long _backgroundTaskIdentifier;
@property (nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) _Bool _isBackgrounded;
@property (nonatomic, readonly) int _powerPressureNotificationToken;
@property (nonatomic, setter=_powerControllerQueue_setPowerPressureLevel:) unsigned int _powerControllerQueue_powerPressureLevel;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (unsigned int)generateAssertionIdentifier;
- (void)_endBackgroundTaskIfNeeded;
- (void)_startBackgroundTaskIfNeeded;
- (void)addAssertionForIndentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)removeAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (unsigned int)powerPressureLevel;

@end
