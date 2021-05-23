/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class BKSAccelerometer, NSMutableSet, NSString;

@protocol CKDeviceOrientationManagerDelegate;

__attribute__((visibility("hidden")))
@interface CKDeviceOrientationManager : NSObject

{
    id <CKDeviceOrientationManagerDelegate> _delegate;
    BKSAccelerometer *_accelerometer;
    NSMutableSet *_listenerKeys;
}

@property (retain, nonatomic) BKSAccelerometer *accelerometer;
@property (retain, nonatomic) NSMutableSet *listenerKeys;
@property (weak, nonatomic) id <CKDeviceOrientationManagerDelegate> delegate;
@property (nonatomic, readonly, getter=isListeningForOrientationEvents) _Bool listeningForOrientationEvents;
@property (nonatomic, readonly) long long currentDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)beginListeningForOrientationEventsWithKey:(id)arg1;
- (void)endListeningForOrientationEventsWithKey:(id)arg1;
- (void)_updateListeningState;
- (long long)_springboardDeviceLockOrientation;
- (_Bool)_wantsOrientationEvents;
- (void)_broadcastOrientation:(long long)arg1;

@end
