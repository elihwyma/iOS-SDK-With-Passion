/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface TLSilentModeController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    int _ringerSwitchChangedNotifyToken;
    long long _silentModeStatus;
}

@property (readonly) long long silentModeStatus;

+ (id)sharedSilentModeController;

- (id)init;
- (void)dealloc;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_assertRunningOnAccessQueue;
- (void)_assertNotRunningOnAccessQueue;
- (_Bool)_registerRingerSwitchChangedNotifyToken;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1;
- (void)_setSilentModeStatus:(long long)arg1;

@end
