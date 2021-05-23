/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class CMWakeGestureManager, NSString;

@protocol AVTUIRaiseGestureManagerDelegate, OS_dispatch_queue;

@interface AVTUIRaiseGestureManager : NSObject

{
    id <AVTUIRaiseGestureManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CMWakeGestureManager *_wakeGestureManager;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CMWakeGestureManager *wakeGestureManager;
@property (weak, nonatomic) id <AVTUIRaiseGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2;
- (void)startRaiseGestureUpdates;
- (void)stopRaiseGestureUpdates;

@end
