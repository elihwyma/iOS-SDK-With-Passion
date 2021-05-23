/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSData, NSXPCConnection;

@protocol CRVehiclePolicyMonitoring;

@interface CRVehiclePolicyMonitor : NSObject

{
    _Bool _monitoring;
    NSData *_vehicleCertificateSerial;
    id <CRVehiclePolicyMonitoring> _delegate;
    NSXPCConnection *_serviceConnection;
}

@property (retain, nonatomic) NSData *vehicleCertificateSerial;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic, getter=isMonitoring) _Bool monitoring;
@property (weak, nonatomic) id <CRVehiclePolicyMonitoring> delegate;

- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)monitoringConnection;
- (void)willEnableCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)willDisableCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithVehicleCertificateSerial:(id)arg1;

@end
