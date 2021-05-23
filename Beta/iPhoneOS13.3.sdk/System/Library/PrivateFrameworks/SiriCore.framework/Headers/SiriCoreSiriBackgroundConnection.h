/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, SiriCoreDataCompressor, SiriCoreDataDecompressor, SiriCorePingInfo, SiriCoreSiriConnectionInfo;

@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProvider, SiriCoreSiriBackgroundConnectionDelegate;

@interface SiriCoreSiriBackgroundConnection : NSObject

{
    id <SiriCoreSiriBackgroundConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <SiriCoreConnectionProvider> _connectionProvider;
    SiriCoreSiriConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    NSObject<OS_dispatch_data> *_bufferedProviderHeaderOutputData;
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    NSObject<OS_dispatch_data> *_bufferedUncompressedData;
    SiriCoreDataDecompressor *_inputDecompressor;
    SiriCoreDataCompressor *_outputCompressor;
    struct __CFHTTPMessage *_httpResponseHeader;
    _Bool _isOpened;
    _Bool _isCanceled;
    _Bool _hasReportedError;
    NSMutableDictionary *_errorsForConnectionMethods;
    NSObject<OS_dispatch_source> *_aceHeaderTimerSource;
    unsigned long long _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> *_pingTimerSource;
    unsigned int _currentPingIndex;
    SiriCorePingInfo *_pingInfo;
    unsigned long long _lastInputLength;
    void *_lastInputDataPointer;
    unsigned long long _inputLengthUnchangedCounter;
    unsigned long long _lastOutputLength;
    void *_lastOutputDataPointer;
    unsigned long long _outputLengthUnchangedCounter;
    unsigned int _currentBarrierIndex;
    NSMutableDictionary *_outstandingBarriers;
    long long _connectionMethod;
    NSObject<OS_dispatch_data> *_safetyNetBuffer;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    double _firstStartTime;
    double _currentStartTime;
    double _currentOpenTime;
    double _firstByteReadTime;
    unsigned long long _startCount;
    unsigned long long _metricsCount;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    _Bool _usesProxyConnection;
    _Bool _deviceIsInWalkaboutExperimentGroup;
    _Bool _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_outgoingCommandsWithSendCompletions;
    _Bool _primaryConnectionViable;
    _Bool _betterPathAvailable;
    long long _secondaryConnectionOpenState;
    id <SiriCoreConnectionProvider> _secondaryConnectionProvider;
    _Bool _dispatchedSnapshotMetrics;
}

@property (weak, nonatomic) id <SiriCoreSiriBackgroundConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (retain, nonatomic) Class peerProviderClass;
@property (nonatomic) _Bool usesProxyConnection;
@property (nonatomic) _Bool deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) _Bool siriConnectionUsesPeerManagedSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)initWithQueue:(id)arg1;
- (_Bool)_usingNetwork;
- (void)_closeConnection;
- (id)_connectionType;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)probeConnection;
- (void)connectionProvider:(id)arg1 receivedError:(id)arg2;
- (id)analysisInfo;
- (void)startHeartBeat;
- (void)stopHeartBeat;
- (void)_startWithConnectionInfo:(id)arg1 proposedFallbackMethod:(long long)arg2 allowFallbackToNewMethod:(_Bool)arg3;
- (long long)_nextConnectionMethod;
- (Class)_providerClass;
- (_Bool)_usingPOP;
- (void)_startNetworkProviderWithInfo:(id)arg1;
- (_Bool)_usingPeer;
- (id)_httpHeaderData;
- (id)_aceHeaderData;
- (void)_prepareProviderHeaderWithForceReconnect:(_Bool)arg1;
- (void)_initializeBufferedGeneralOutputDataWithInitialPayload:(_Bool)arg1;
- (id)_getInitialPayloadWithBufferedLength:(unsigned long long *)arg1 forceReconnect:(_Bool)arg2;
- (void)_didEncounterError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(CDUnknownBlockType)arg2;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1;
- (void)_updateBuffersForInitialPayload:(id)arg1 bufferedLength:(unsigned long long)arg2 forceReconnect:(_Bool)arg3;
- (void)_setupReadHandlerOnProvider;
- (void)_networkProviderDidOpen;
- (void)_closeConnectionAndPrepareForReconnect:(_Bool)arg1;
- (void)_cancelSecondaryConnection;
- (void)_forceTriggerRetry;
- (id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4;
- (void)_bufferGeneralData:(id)arg1;
- (void)_cancelOutstandingBarriers;
- (id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2;
- (_Bool)_shouldTrySameConnectionMethodForMethod:(long long)arg1 error:(id)arg2;
- (_Bool)_canFallBackFromError:(id)arg1;
- (void)_fallBackToNextConnectionMethod:(long long)arg1 fromError:(id)arg2 afterDelay:(double)arg3;
- (long long)_normalizeSNR:(long long)arg1;
- (_Bool)_tcpInfoIndicatesPoorLinkQuality;
- (void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2;
- (_Bool)_hasReadACEHeader;
- (_Bool)_usingFlorence;
- (_Bool)_wifiOrCellularMayBeBetterThanCurrentStream;
- (void)_pingTimerFired;
- (void)_resumePingTimer;
- (long long)_checkForProgressOnReadingData;
- (long long)_checkPings;
- (_Bool)_hasReadHTTPHeader;
- (_Bool)_sendAcePingWithId:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)_hasBufferedDataOrOutstandingPings;
- (void)_startSecondaryConnection;
- (_Bool)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(struct __CFHTTPMessage *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_tryReadingParsedDataFromBytes:(const void *)arg1 length:(unsigned long long)arg2 packet:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesParsed:(unsigned long long *)arg5 error:(id *)arg6;
- (void)_handleAceObject:(id)arg1;
- (void)_handlePacket:(CDStruct_95d471ab *)arg1;
- (_Bool)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_tryToWriteBufferedOutputData;
- (void)_sendGeneralData:(id)arg1;
- (void)sendCommand:(id)arg1 moreComing:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_connectionHasBytesAvailable:(id)arg1;
- (_Bool)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(struct __CFHTTPMessage *)arg2 statusCode:(long long *)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (void)_handleAceNop;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleAceEnd;
- (_Bool)_sendAcePongWithId:(unsigned int)arg1 error:(id *)arg2;
- (void)_handleBarrierReply:(unsigned int)arg1;
- (id)_connectionMethodDescription;
- (void)_getWifiMetrics:(id)arg1;
- (void)_getCellularMetrics:(id)arg1;
- (void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(_Bool)arg2;
- (void)connectionProviderReceivedBetterRouteNotification:(id)arg1;
- (_Bool)_usingPOPOnPeer;
- (void)startWithConnectionInfo:(id)arg1;
- (void)_setNetworkProvider:(id)arg1;
- (void)updateActiveBackgroundConnectionWithSecondary;
- (void)setSendPings:(_Bool)arg1;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1;
- (void)sendCommands:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)getConnectionMethodUsed;
- (void)getConnectionMetrics:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
