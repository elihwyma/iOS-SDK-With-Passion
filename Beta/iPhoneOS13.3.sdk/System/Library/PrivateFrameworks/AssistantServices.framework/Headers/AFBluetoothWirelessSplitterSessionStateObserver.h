/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, NSString;

@protocol AFBluetoothWirelessSplitterSessionStateObserverDelegate, OS_dispatch_queue;

@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFBluetoothWirelessSplitterSessionStateObserverDelegate> _delegate;
    AFNotifyObserver *_notifyObserver;
    long long _state;
}

@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_setState:(long long)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)getStateWithCompletion:(CDUnknownBlockType)arg1;

@end
