/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol SBDeviceApplicationSceneStatusBarStateObserver;

@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject

{
    struct SBDeviceApplicationSceneStatusBarStateObserverFlags _flags;
    id <SBDeviceApplicationSceneStatusBarStateObserver> _observer;
}

@property (weak, nonatomic, readonly) id <SBDeviceApplicationSceneStatusBarStateObserver> observer;
@property (nonatomic, readonly) struct SBDeviceApplicationSceneStatusBarStateObserverFlags flags;

- (id)initWithObserver:(id)arg1 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags)arg2;

@end
