/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject

{
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)blacklist;
- (_Bool)isPredictionGloballyDisabled;

@end
