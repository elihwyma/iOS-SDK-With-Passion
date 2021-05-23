/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject

{
    CRCarKitServiceClient *_serviceClient;
}

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;

- (id)init;
- (void)fetchAllVehiclesWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncFetchAllVehiclesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_firstVehicleMatchingTest:(CDUnknownBlockType)arg1;
- (void)saveVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPairedVehiclesWithCompletion:(CDUnknownBlockType)arg1;
- (id)vehicleForBluetoothAddress:(id)arg1;
- (id)vehicleNameForWiFiUUID:(id)arg1;
- (id)vehicleForCertificateSerial:(id)arg1;
- (id)saveVehicle:(id)arg1;
- (_Bool)removeVehicle:(id)arg1;
- (id)allVehicles;
- (id)pairedVehicles;

@end
