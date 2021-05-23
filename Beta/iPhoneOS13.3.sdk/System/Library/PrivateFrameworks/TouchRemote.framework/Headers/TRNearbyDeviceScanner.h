/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class SFDeviceDiscovery;

@protocol OS_dispatch_queue, TRNearbyDeviceScannerDelegate;

@interface TRNearbyDeviceScanner : NSObject

{
    id <TRNearbyDeviceScannerDelegate> _delegate;
    unsigned long long _state;
    SFDeviceDiscovery *_deviceDiscovery;
    NSObject<OS_dispatch_queue> *_scannerQ;
    unsigned long long _requestedService;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQ;
@property unsigned long long requestedService;
@property (weak) id <TRNearbyDeviceScannerDelegate> delegate;

+ (void)initialize;

- (id)init;
- (void)openSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)stopScanning;
- (void)_handleActivationWithError:(id)arg1;
- (void)_deviceFound:(id)arg1;
- (void)_deviceChanged:(id)arg1;
- (void)startScanningForDevicesWithService:(unsigned long long)arg1;

@end
