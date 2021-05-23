/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint, TKPowerMonitor, TKSmartCardATR, TKSmartCardSessionEngine;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, TKSmartCardSlotDelegate;

@interface TKSmartCardSlotEngine : NSObject

{
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    NSObject<OS_dispatch_source> *_idlePowerDownSource;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMutableArray *_powerRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
    _Bool _securePINVerificationSupported;
    _Bool _securePINChangeSupported;
    _Bool _synchronousSetup;
    _Bool _apduSentSinceLastReset;
    long long _maxInputLength;
    long long _maxOutputLength;
    NSXPCListenerEndpoint *_serverEndpoint;
    id <TKSmartCardSlotDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    TKSmartCardSessionEngine *_session;
}

@property (weak) id <TKSmartCardSlotDelegate> delegate;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property _Bool apduSentSinceLastReset;
@property (weak) TKSmartCardSessionEngine *session;
@property long long maxInputLength;
@property long long maxOutputLength;
@property _Bool securePINVerificationSupported;
@property _Bool securePINChangeSupported;
@property (retain) NSXPCListenerEndpoint *serverEndpoint;
@property _Bool synchronousSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)terminate;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)setupSlotWithReply:(CDUnknownBlockType)arg1;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getAttrib:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)runUserInteraction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)slotRegistryWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)logWithBytes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dictionaryForState:(long long)arg1;
- (void)changeStateTo:(long long)arg1 powerState:(long long)arg2;
- (void)powerRequestFinished;
- (void)powerDownWithEject:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)schedulePowerRequest:(CDUnknownBlockType)arg1;
- (void)scheduleIdlePowerDown;
- (void)setProtocol:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)leaveSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (id)_getReservationId;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)cardPresent:(_Bool)arg1;

@end
