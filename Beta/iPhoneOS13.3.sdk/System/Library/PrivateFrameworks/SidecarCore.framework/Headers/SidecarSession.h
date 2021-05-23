/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSUUID, SidecarDevice, SidecarService;

@protocol OS_dispatch_queue, SidecarSessionDelegate;

@interface SidecarSession : NSObject

{
    id <SidecarSessionDelegate> _delegate;
    SidecarDevice *_device;
    SidecarService *_service;
    long long _transport;
    NSUUID *_uuid;
    long long _dataLink;
    long long _handle;
    unsigned int _isRemote:1;
    _Atomic long long _state;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) long long handle;
@property (readonly) NSUUID *uuid;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) int dataLink;
@property (weak) id <SidecarSessionDelegate> delegate;
@property (nonatomic, readonly) SidecarDevice *device;
@property (nonatomic, readonly) SidecarService *service;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_closeWithError:(id)arg1;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (void)connectWithTransport:(long long)arg1 reconnectToSession:(id)arg2;
- (void)closeWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRemote:(id)arg1 device:(id)arg2 dataLink:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (void)timeSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;

@end
