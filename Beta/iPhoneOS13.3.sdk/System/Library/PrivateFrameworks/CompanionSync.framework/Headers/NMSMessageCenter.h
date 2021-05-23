/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSService, NMSPersistentDictionary, NMSWindowData, NSDate, NSMutableDictionary, NSString, _NMSDispatchQueue, _SYMultiSuspendableQueue;

@protocol NMSMessageCenterDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface NMSMessageCenter : NSObject

{
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    struct __CFString *_loggingFacility;
    IDSService *_service;
    _Bool _resumed;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    unsigned long long _currentBytesInFlight;
    NMSWindowData *_windowData;
    NSObject<OS_dispatch_source> *_windowTimeout;
    _NMSDispatchQueue *_windowQueue;
    _Bool _checkedForQWS;
    _SYMultiSuspendableQueue *_idsIncomingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _enableTransmissionWindow;
    _Bool _delegateRequiresACKs;
    id <NMSMessageCenterDelegate> _delegate;
    NSObject<OS_os_activity> *_transportActivity;
    unsigned long long _maxMessagesInFlight;
    unsigned long long _minMessagesInFlight;
    unsigned long long _maxBytesInFlight;
    double _windowResponseTimeout;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id <NMSMessageCenterDelegate> delegate;
@property (nonatomic) _Bool delegateRequiresACKs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic, readonly, getter=_currentBytesInFlight) unsigned long long currentBytesInFlight;
@property (retain, nonatomic) NSObject<OS_os_activity> *transportActivity;
@property (nonatomic, readonly) IDSService *idsService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *actionQ;
@property (nonatomic) _Bool enableTransmissionWindow;
@property (nonatomic) unsigned long long maxMessagesInFlight;
@property (nonatomic) unsigned long long minMessagesInFlight;
@property (nonatomic) unsigned long long maxBytesInFlight;
@property (nonatomic) double windowResponseTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)messageWindowCountEnabled;
+ (void)setMessageWindowCountEnabled:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (id)requestHandlers;
- (void)sendRequest:(id)arg1;
- (id)responseHandlers;
- (void)_obliterate;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheFolderPath:(id)arg3;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (void)addRequestHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addResponseHandler:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addErrorHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)deviceIDFromDevice:(id)arg1;
- (void)sendFile:(id)arg1;
- (_Bool)cancelMessageWithID:(id)arg1 error:(id *)arg2;
- (void)suspendIncomingMessages;
- (void)resumeIncomingMessages;
- (id)initWithIDSServiceIdentifier:(id)arg1;
- (void)_setNextWindowTimeoutFireDate;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_checkForSwitch;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (id)_buildDataForRequest:(id)arg1 options:(id *)arg2;
- (id)_buildDataForResponse:(id)arg1 options:(id *)arg2;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (id)_decodeIncomingRequestData:(id)arg1 context:(id)arg2;
- (void)_timeoutWindowedMessages;
- (id)errorHandlers;
- (void)_expireMessages;
- (void)dropExtantMessages;
- (void)_sendResponse:(id)arg1;

@end
