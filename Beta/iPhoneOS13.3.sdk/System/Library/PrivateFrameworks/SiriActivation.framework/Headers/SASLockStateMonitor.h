/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

{
    _Bool _unlockedByTouchID;
    id <SASLockStateMonitorDelegate> _delegate;
    unsigned long long _lockState;
    NSNumber *_assistantIsEnabled;
}

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) _Bool unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id <SASLockStateMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (_Bool)isBlocked;
- (_Bool)isScreenOn;
- (unsigned long long)_currentLockState;
- (_Bool)hasUnlockedSinceBoot;
- (void)_lockStateDidChange:(id)arg1;
- (void)_updateLockState;

@end
