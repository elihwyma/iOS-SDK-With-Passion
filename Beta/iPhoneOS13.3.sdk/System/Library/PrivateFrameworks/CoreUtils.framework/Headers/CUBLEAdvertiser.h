/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBPeripheralManager, CURetrier, NSData, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CUBLEAdvertiser : NSObject

{
    _Bool _activateCalled;
    NSDictionary *_advertiseParametersCurrent;
    _Bool _changesPending;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    CBPeripheralManager *_peripheralManager;
    CURetrier *_retrier;
    _Bool _startAdvertisingCalled;
    struct LogCategory *_ucat;
    unsigned int _advertiseFlags;
    NSData *_appleManufacturerData;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSData *_lgBTAddress;
    NSData *_lgDeviceID;
    NSString *_label;
}

@property (copy, nonatomic) NSData *appleManufacturerData;
@property (nonatomic) unsigned int advertiseFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSData *lgBTAddress;
@property (copy, nonatomic) NSData *lgDeviceID;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (id)_advertiseParameters;
- (void)_advertiseParametersAddLGWake:(id)arg1;
- (void)_advertiseParametersAddOSR;
- (id)_advertiseParametersSummary:(id)arg1;

@end
