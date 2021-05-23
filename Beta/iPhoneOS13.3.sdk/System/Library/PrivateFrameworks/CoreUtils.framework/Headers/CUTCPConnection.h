/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBonjourDevice, CUNANDataSession, CUNetLinkEndpoint, CUNetLinkManager, CUReadRequest, CUWiFiManager, CUWriteRequest, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPConnection : NSObject

{
    struct AsyncConnection *_connector;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    _Bool _activateCalled;
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct _opaque_pthread_mutex_t _mutex;
    CUNetLinkEndpoint *_netLinkEndpoint;
    unsigned int _trafficFlagsApplied;
    _Bool _trafficFlagsPending;
    struct LogCategory *_ucat;
    CUWiFiManager *_wifiTrafficManager;
    unsigned long long _ifExtendedFlags;
    unsigned int _ifFlags;
    unsigned int _ifIndex;
    unsigned int _ifMedia;
    char _ifName[17];
    int _defaultPort;
    unsigned int _flags;
    int _flowControlState;
    int _keepAliveSeconds;
    unsigned int _netTransportType;
    int _socketFD;
    unsigned int _trafficFlags;
    double _connectTimeoutSecs;
    double _dataTimeoutSecs;
    CUBonjourDevice *_destinationBonjour;
    NSString *_destinationString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _flowControlChangedHandler;
    NSString *_interfaceName;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CUNANDataSession *_nanDataSession;
    CUNetLinkManager *_netLinkManager;
    CDUnknownBlockType _serverInvalidationHandler;
    CDUnion_fab80606 _peerAddr;
    CDUnion_fab80606 _selfAddr;
}

@property (retain, nonatomic) CUNANDataSession *nanDataSession;
@property (copy, nonatomic) CDUnknownBlockType serverInvalidationHandler;
@property (nonatomic, readonly) CDUnion_fab80606 peerAddr;
@property (nonatomic, readonly) CDUnion_fab80606 selfAddr;
@property (nonatomic) double connectTimeoutSecs;
@property (nonatomic) double dataTimeoutSecs;
@property (retain, nonatomic) CUBonjourDevice *destinationBonjour;
@property (copy, nonatomic) NSString *destinationString;
@property (nonatomic) int defaultPort;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) CDUnknownBlockType flowControlChangedHandler;
@property (nonatomic, readonly) int flowControlState;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) int keepAliveSeconds;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) CUNetLinkManager *netLinkManager;
@property (nonatomic, readonly) unsigned int netTransportType;
@property (nonatomic) int socketFD;
@property (nonatomic) unsigned int trafficFlags;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)readWithRequest:(id)arg1;
- (void)writeWithRequest:(id)arg1;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (_Bool)_setupIOAndReturnError:(id *)arg1;
- (void)_processReads:(_Bool)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_abortReadsWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (_Bool)_activateDirectAndReturnError:(id *)arg1;
- (_Bool)_startConnectingToBonjourDevice:(id)arg1 error:(id *)arg2;
- (_Bool)_startConnectingToDestination:(id)arg1 error:(id *)arg2;
- (void)_netLinkStateChanged;
- (void)_updateTrafficRegistration;
- (_Bool)_readableData;
- (_Bool)_readStatus;
- (void)_processWrites:(_Bool)arg1;

@end
