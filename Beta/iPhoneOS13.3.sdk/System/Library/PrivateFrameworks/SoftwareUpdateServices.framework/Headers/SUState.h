/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, SUDescriptor, SUDownload, SUInstallPolicy, SUManagedDeviceUpdateDelay, _SUAutoInstallOperationModel;

@interface SUState : NSObject

{
    SUDownload *_lastDownload;
    SUDescriptor *_lastScannedDescriptor;
    SUDescriptor *_currentDescriptor;
    SUDescriptor *_failedPatchDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    _Bool _autodownloadNeedsOneTimeRetry;
    _Bool _stashbagPersisted;
    NSString *_lastProductVersion;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastReleaseType;
    NSDictionary *_unlockCallbacks;
    NSDictionary *_mandatoryUpdateDict;
    _SUAutoInstallOperationModel *_lastAutoInstallOperationModel;
    SUManagedDeviceUpdateDelay *_mdmDelay;
    SUInstallPolicy *_installPolicy;
    _Bool _manifestSubmitted;
    NSString *_sessionID;
    NSString *_lastDeletedSUAssetID;
    NSString *_lastAssetAudience;
}

@property (retain, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel;
@property (copy, nonatomic) SUDownload *lastDownload;
@property (copy, nonatomic) SUDescriptor *lastScannedDescriptor;
@property (copy, nonatomic) SUDescriptor *currentDescriptor;
@property (copy, nonatomic) SUDescriptor *failedPatchDescriptor;
@property (retain, nonatomic) NSDate *lastScannedDescriptorTime;
@property (retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime;
@property (retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime;
@property (nonatomic) _Bool autodownloadNeedsOneTimeRetry;
@property (nonatomic) _Bool stashbagPersisted;
@property (retain, nonatomic) NSString *lastProductVersion;
@property (retain, nonatomic) NSString *lastProductBuild;
@property (retain, nonatomic) NSString *lastProductType;
@property (retain, nonatomic) NSString *lastReleaseType;
@property (retain, nonatomic) NSDictionary *unlockCallbacks;
@property (retain, nonatomic) NSDictionary *mandatoryUpdateDict;
@property (retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay;
@property (retain, nonatomic) SUInstallPolicy *installPolicy;
@property (nonatomic) _Bool manifestSubmitted;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *lastDeletedSUAssetID;
@property (retain, nonatomic) NSString *lastAssetAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)load;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)save;
- (void)resetDownloadAndScanHistory;
- (id)_stateAsDictionary;
- (void)resetAllHistory;

@end
