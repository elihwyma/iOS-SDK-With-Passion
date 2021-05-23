/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKContainerOptions, CKNotificationListener, CKScheduler, NSNumber, NSString, PFCloudKitContainerProvider, PFCloudKitMetadataPurger, PFCloudKitMetricsClient, PFCloudKitStoreMonitorProvider;

@interface NSCloudKitMirroringDelegateOptions : NSObject

{
    NSString *_containerIdentifier;
    NSNumber *_ckAssetThresholdBytes;
    _Bool _useEncryptedStorage;
    _Bool _initializeSchema;
    _Bool _automaticallyDownloadFileBackedFutures;
    _Bool _automaticallyScheduleImportAndExportOperations;
    NSNumber *_operationMemoryThresholdBytes;
    CKContainerOptions *_containerOptions;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    _Bool _skipCloudKitSetup;
    PFCloudKitContainerProvider *_containerProvider;
    PFCloudKitStoreMonitorProvider *_storeMonitorProvider;
    PFCloudKitMetricsClient *_metricsClient;
    PFCloudKitMetadataPurger *_metadataPurger;
    NSString *_apsConnectionMachServiceName;
    _Bool _useDaemon;
    _Bool _useTestDaemon;
    _Bool _preserveLegacyRecordMetadataBehavior;
}

@property (retain, nonatomic) CKScheduler *scheduler;
@property (retain, nonatomic) CKNotificationListener *notificationListener;
@property (nonatomic) _Bool skipCloudKitSetup;
@property (retain, nonatomic) PFCloudKitContainerProvider *containerProvider;
@property (retain, nonatomic) PFCloudKitStoreMonitorProvider *storeMonitorProvider;
@property (retain, nonatomic) PFCloudKitMetricsClient *metricsClient;
@property (retain, nonatomic) PFCloudKitMetadataPurger *metadataPurger;
@property (nonatomic) _Bool useDaemon;
@property (nonatomic) _Bool useTestDaemon;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *ckAssetThresholdBytes;
@property (nonatomic) _Bool initializeSchema;
@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) _Bool useEncryptedStorage;
@property (retain, nonatomic) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) _Bool automaticallyDownloadFileBackedFutures;
@property (nonatomic) _Bool automaticallyScheduleImportAndExportOperations;
@property (nonatomic) _Bool preserveLegacyRecordMetadataBehavior;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copy;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;

@end
