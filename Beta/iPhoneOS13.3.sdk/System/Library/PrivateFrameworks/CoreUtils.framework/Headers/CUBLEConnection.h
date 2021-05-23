/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBCentralManager, CBL2CAPChannel, CBPeripheral, CUReadRequest, CUWriteRequest, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBLEConnection : NSObject

{
    CDUnknownBlockType _activateCompletion;
    CBCentralManager *_centralManager;
    _Bool _guardConnected;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    struct LogCategory *_ucat;
    unsigned short _destinationPSM;
    int _connectionLatency;
    NSUUID *_destinationUUID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CBL2CAPChannel *_l2capChannel;
    CDUnknownBlockType _serverInvalidationHandler;
}

@property (retain, nonatomic) CBL2CAPChannel *l2capChannel;
@property (copy, nonatomic) CDUnknownBlockType serverInvalidationHandler;
@property (nonatomic) int connectionLatency;
@property (nonatomic) unsigned short destinationPSM;
@property (copy, nonatomic) NSUUID *destinationUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)readWithRequest:(id)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (_Bool)_startConnectingAndReturnError:(id *)arg1;
- (_Bool)_setupIOAndReturnError:(id *)arg1;
- (_Bool)_runConnectStart;
- (_Bool)_runSetupChannel;
- (void)_processReads:(_Bool)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_abortReadsWithError:(id)arg1;
- (_Bool)_processReadStatus;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processWrites;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;

@end
