/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface APDBrowserBluetoothHelper : NSObject

{
    void *_eventHandlerContext;
    CDUnknownFunctionPointerType _eventHandlerFunc;
    struct OpaqueAPDBluetoothHelper *_helperRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    _Bool _isInvalidated;
    _Bool _bluetoothPowerChangedListeningStarted;
    _Bool _isBluetoothPoweredOn;
}

@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) CDUnknownFunctionPointerType eventHandlerFunc;
@property (nonatomic) struct OpaqueAPDBluetoothHelper *helperRef;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) _Bool isInvalidated;
@property (nonatomic) _Bool bluetoothPowerChangedListeningStarted;

- (id)init;
- (void)dealloc;
- (int)invalidate;
- (int)setPowered:(_Bool)arg1;
- (int)dispatchEvent:(unsigned int)arg1 withEventInfo:(id)arg2;
- (int)ensureBluetoothPowerChangedListenerStopped;
- (int)ensureBluetoothPowerEventMonitorStarted;
- (id)getEventString:(unsigned int)arg1;
- (int)getBluetoothPowerOn:(_Bool *)arg1;
- (int)setEventHandler:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 helperRef:(struct OpaqueAPDBluetoothHelper *)arg3;
- (int)startListeningToEvent:(unsigned int)arg1;
- (int)stopListeningToEvent:(unsigned int)arg1;
- (void)handleBluetoothChangedNotificationInternal:(id)arg1;
- (int)queryBluetoothPower:(_Bool *)arg1;
- (int)setBluetoothPower:(_Bool)arg1;

@end
