/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSError, NSProgress, NSString, NSUUID, SidecarDevice, SidecarMapTable, SidecarService, SidecarSession, SidecarTransferReceiver;

@protocol SidecarMessage, SidecarRequestDelegate;

@interface SidecarRequest : NSObject

{
    id <SidecarRequestDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    NSArray *_devices_deprecated;
    SidecarDevice *_device;
    SidecarSession *_session;
    SidecarSession *_sessionZombie;
    NSArray *_items;
    id <SidecarMessage> _message;
    NSProgress *_progress;
    SidecarService *_service;
    SidecarTransferReceiver *_transferReceiver;
    SidecarMapTable *_sendTransfers;
    NSError *_error;
    _Atomic long long _state;
    double _timeStart;
    double _timeAccept;
    double _timeTransfer;
    double _timeFinish;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) _Bool didStart;
@property (nonatomic) double timeStart;
@property (nonatomic) double timeAccept;
@property (nonatomic) double timeTransfer;
@property (nonatomic) double timeFinish;
@property (weak) id <SidecarRequestDelegate> delegate;
@property (retain) NSError *error;
@property (nonatomic, readonly) id <SidecarMessage> message;
@property (nonatomic, readonly) SidecarSession *session;
@property (readonly) NSString *localizedItemName;
@property (readonly) NSUUID *uuid;
@property (readonly) SidecarService *service;
@property (copy) NSArray *devices;
@property (nonatomic, readonly) SidecarDevice *device;
@property (readonly) NSProgress *progress;
@property (readonly, getter=isFinished) _Bool finished;
@property (readonly, getter=isCancelled) _Bool cancelled;
@property (readonly) NSArray *items;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSData *data;
@property (readonly) NSString *uniformTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)setItems:(id)arg1;
- (void)_sendMessage:(id)arg1;
- (void)accept;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (id)initWithSession:(id)arg1 message:(id)arg2;
- (void)sidecarSessionStarted:(id)arg1;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarSession:(id)arg1 closedWithError:(id)arg2;
- (void)sidecarServiceTerminate;
- (void)startWithTransport:(long long)arg1;
- (void)startWithTransport:(long long)arg1 reconnectToRequest:(id)arg2;
- (void)sendItems:(id)arg1 complete:(_Bool)arg2;
- (void)_registerStreamListeners;
- (void)_willConnect;
- (void)sidecarTransfer:(id)arg1 didComplete:(id)arg2;
- (void)sidecarTransfer:(id)arg1 receivedItems:(id)arg2 messageType:(long long)arg3;
- (void)sendItems:(id)arg1;
- (id)sessionForDevice:(id)arg1;
- (void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)listenForStreamType:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listenForStreamType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openStreamForType:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openStreamForType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
