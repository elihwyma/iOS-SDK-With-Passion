/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMutableArray, NSPointerArray, NSString;

@protocol QLNotificationCenterProtocol;

@interface QLNotificationCenter : NSObject

{
    id <QLNotificationCenterProtocol> _remoteNotificationCenter;
    NSPointerArray *_observers;
    NSMutableArray *_bufferedNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (long long)_indexOfObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)setRemoteNotificationCenter:(id)arg1;
- (_Bool)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_sendEnqueuedNotifications;

@end
