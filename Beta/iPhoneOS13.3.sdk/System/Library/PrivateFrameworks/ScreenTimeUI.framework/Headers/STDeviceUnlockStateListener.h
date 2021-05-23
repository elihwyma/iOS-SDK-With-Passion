/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@interface STDeviceUnlockStateListener : NSObject

{
    int _notifyToken;
    CDUnknownBlockType _lockStateChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType lockStateChangeHandler;
@property (nonatomic, readonly) _Bool deviceIsLocked;

- (id)init;
- (void)dealloc;

@end
