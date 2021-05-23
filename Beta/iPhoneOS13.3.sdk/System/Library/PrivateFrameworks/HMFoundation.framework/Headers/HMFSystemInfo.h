/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMACAddress, HMFSoftwareVersion, NSString;

@protocol HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoMigrationDataSource, HMFSystemInfoNameDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource;

@interface HMFSystemInfo

{
    id <HMFSystemInfoNameDataSource> _nameDataSource;
    id <HMFSystemInfoMarketingInformationDataSource> _marketingDataSource;
    id <HMFSystemInfoSerialNumberDataSource> _serialNumberDataSource;
    id <HMFSystemInfoProductInfoDataSource> _productInfoDataSource;
    id <HMFSystemInfoSoftwareVersionDataSource> _softwareVersionDataSource;
    id <HMFSystemInfoMigrationDataSource> _migrationDataSource;
    id <HMFSystemInfoWiFiDataSource> _WiFiDataSource;
    id <HMFSystemInfoBluetoothLEDataSource> _bluetoothLEDataSource;
}

@property (nonatomic, readonly) id <HMFSystemInfoNameDataSource> nameDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoMarketingInformationDataSource> marketingDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoSerialNumberDataSource> serialNumberDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoProductInfoDataSource> productInfoDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoSoftwareVersionDataSource> softwareVersionDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoMigrationDataSource> migrationDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoWiFiDataSource> WiFiDataSource;
@property (nonatomic, readonly) id <HMFSystemInfoBluetoothLEDataSource> bluetoothLEDataSource;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *modelIdentifier;
@property (copy, readonly) NSString *model;
@property (copy, readonly) NSString *regionInfo;
@property (copy, readonly) NSString *serialNumber;
@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (copy, readonly) HMFSoftwareVersion *softwareVersion;
@property (readonly, getter=isMigrating) _Bool migrating;
@property (copy, readonly) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly) _Bool supportsBLE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)systemInfo;

- (void)dataSource:(id)arg1 didUpdateName:(id)arg2;
- (void)dataSource:(id)arg1 didUpdateMigrating:(_Bool)arg2;

@end
