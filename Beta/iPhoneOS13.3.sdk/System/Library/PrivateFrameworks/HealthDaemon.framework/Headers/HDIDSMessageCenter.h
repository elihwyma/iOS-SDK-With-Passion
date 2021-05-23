/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, HDIDSPersistentDictionary, IDSService, NSMutableDictionary, NSString, NSUUID;

@protocol HDIDSMessageCenterDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HDIDSMessageCenter : NSObject

{
    HDDaemon *_daemon;
    NSString *_serviceIdentifier;
    NSString *_shortServiceIdentifier;
    NSUUID *_pairingUUID;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    double _nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    _Atomic _Bool _invalidated;
    id <HDIDSMessageCenterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <HDIDSMessageCenterDelegate> delegate;
@property (nonatomic, readonly) IDSService *idsService;
@property (copy, nonatomic, readonly) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createPersistentDictionaryWithURL:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (id)_queue;
- (void)resume;
- (id)_logPrefix;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (id)deviceForFromID:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)_expireMessages;
- (void)_sendResponse:(id)arg1;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2;
- (id)initWithIDSServiceIdentifier:(id)arg1 persistentDictionary:(id)arg2 queue:(id)arg3 daemon:(id)arg4;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (id)nanoSyncDevices;
- (void)cancelPendingRequestsWithMessageID:(unsigned short)arg1 device:(id)arg2;
- (void)_updateExpireTimerWithTimestamp:(double)arg1;

@end
