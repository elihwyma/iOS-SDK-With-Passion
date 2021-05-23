/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSXPCConnection;

@protocol GameControllerDaemon, OS_dispatch_queue;

@interface _GCControllerManager : NSObject

{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
    struct __IOHIDManager *_hidManager;
    NSMutableDictionary *_controllersByUDID;
    NSMutableDictionary *_controllersByRegistryID;
    struct IONotificationPort *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    CDUnknownBlockType _logger;
    _Bool _idleTimerNeedsReset;
    NSTimer *_idleWatchTimer;
    _Bool _shouldKeepRunning;
    CDUnknownBlockType _requestConnectedHostsCallback;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    long long _currentMediaRemoteInputMode;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    _Bool _shouldMonitorBackgroundEvents;
    _Bool _isAppInBackground;
    GCController *_firstMicroGamepad;
    NSThread *_hidInputThread;
    struct __CFRunLoop *_hidInputThreadRunLoop;
    struct __CFRunLoopSource *_hidThreadRunLoopSource;
    NSMutableArray *_hidThreadExecutionBlocks;
}

@property (nonatomic, readonly) _Bool isAppInBackground;
@property (nonatomic) struct __IOHIDManager *hidManager;
@property (copy, nonatomic) CDUnknownBlockType logger;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id <GameControllerDaemon> remote;
@property (nonatomic) _Bool idleTimerNeedsReset;
@property (retain, nonatomic, readonly) NSThread *hidInputThread;
@property (nonatomic, readonly) struct __CFRunLoop *hidInputThreadRunLoop;
@property (nonatomic, readonly) struct __CFRunLoopSource *hidThreadRunLoopSource;
@property (nonatomic, readonly) NSMutableArray *hidThreadExecutionBlocks;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *controllersQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)open;
- (id)controllers;
- (void)addController:(id)arg1;
- (void)removeController:(id)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)replyConnectedHosts:(id)arg1;
- (void)publishController:(id)arg1;
- (void)unpublishController:(id)arg1;
- (void)startIdleWatchTimer;
- (void)CBApplicationWillResignActive;
- (void)CBApplicationDidBecomeActive;
- (void)launchHIDInputThread;
- (void)stopHIDDeviceMonitor;
- (void)updateControllerWithEvent:(struct __IOHIDEvent *)arg1;
- (void)addControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)startHIDDeviceMonitor;
- (void)removeControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)removeController:(id)arg1 registryID:(id)arg2;
- (void)threadHIDInputOnMain:(id)arg1;
- (void)stopHIDEventMonitor;
- (void)async_HIDBlock:(CDUnknownBlockType)arg1;
- (void)addConnectedDevices;
- (void)startHIDEventMonitor;
- (void)updateIdleTimer:(id)arg1;
- (_Bool)combineSiriRemoteHIDDevicesWithNewController:(id)arg1 existingController:(id)arg2;
- (void)logController:(id)arg1;
- (_Bool)shouldStoreController:(id)arg1;
- (void)storeController:(id)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)addControllerForAppStoreRemote:(id)arg1;
- (void)starSessionWillBegin;
- (void)starSessionDidEnd;
- (void)threadHIDInputOffMain:(id)arg1;
- (void)requestConnectedHostsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isExistingController:(id)arg1;
- (void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (_Bool)isPhysicalB239:(id)arg1;
- (void)removeCoalescedControllerComponent:(id)arg1;

@end
