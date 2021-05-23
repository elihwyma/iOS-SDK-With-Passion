/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@interface NRDataFilePaths : NSObject

+ (id)pathToNanoRegistryStateDirectory;
+ (id)_pathToNanoRegistryStateDirectory;
+ (id)_pathToNanoRegistryUnpairTriggerFileDirectory;
+ (id)pathToNanoRegistryHistoryFile;
+ (id)pathToNanoRegistryMigrationRoutingSlip;
+ (id)pathToNanoRegistryClassAFile;
+ (id)pathToNanoRegistryHistorySecurePropertiesFile;
+ (id)pathToNanoRegistryUDIDFile;
+ (id)pathToNanoRegistryHistoryRecoveryManagerFile:(id)arg1;
+ (id)_pathToNanoRegistryPairingStorePathDirectory;
+ (id)_pathToDevicePropertiesFile;
+ (id)_pathToSecureDevicePropertiesFile;
+ (id)_pathToRecoveryStateFile;
+ (id)_pathToUnpairTriggerFile;

@end
