/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBPeripheralManager, NSString;

@protocol OS_dispatch_queue;

@interface CUBLEServer : NSObject

{
    CDUnknownBlockType _activateCompletion;
    struct NSMutableSet *_connections;
    _Bool _invalidateCalled;
    CBPeripheralManager *_peripheralManager;
    struct LogCategory *_ucat;
    unsigned short _listenPSM;
    unsigned short _listeningPSM;
    CDUnknownBlockType _connectionStartedHandler;
    CDUnknownBlockType _connectionEndedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (copy, nonatomic) CDUnknownBlockType connectionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionEndedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned short listenPSM;
@property (nonatomic) unsigned short listeningPSM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startIfNeeded;
- (void)_handleConnectionInvalidated:(id)arg1;

@end
