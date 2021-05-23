/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

#import <SoftwareUpdateCore/Swift-Protocol.h>

@class MAAsset, NSArray, NSData, NSDate, NSDictionary, NSString, SUCoreDocumentation, SUCoreMAIdentifier;

@interface SUCoreDescriptor : NSObject <Swift>

{
    _Bool _streamingZipCapable;
    _Bool _autoDownloadAllowableOverCellular;
    _Bool _downloadAllowableOverCellular;
    _Bool _downloadable;
    _Bool _disableSiriVoiceDeletion;
    _Bool _disableCDLevel4;
    _Bool _disableAppDemotion;
    _Bool _disableInstallTonight;
    _Bool _rampEnabled;
    _Bool _autoUpdateEnabled;
    _Bool _criticalCellularOverride;
    _Bool _criticalOutOfBoxOnly;
    NSString *_publisher;
    NSString *_productSystemName;
    long long _updateType;
    NSString *_assetID;
    NSString *_uniqueBuildID;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_releaseType;
    NSDate *_releaseDate;
    NSString *_prerequisiteBuild;
    NSString *_prerequisiteOSVersion;
    NSArray *_supportedDevices;
    unsigned long long _downloadSize;
    unsigned long long _unarchivedSize;
    unsigned long long _msuPrepareSize;
    unsigned long long _installationSize;
    unsigned long long _minimumSystemPartitionSize;
    NSDictionary *_systemPartitionPadding;
    unsigned long long _mdmDelayInterval;
    NSString *_setupCritical;
    NSString *_lastEmergencyBuild;
    NSString *_lastEmergencyOSVersion;
    NSData *_sepDigest;
    NSData *_sepTBMDigests;
    NSData *_rsepDigest;
    NSData *_rsepTBMDigests;
    NSString *_documentationID;
    SUCoreDocumentation *_documentation;
    NSString *_softwareUpdateURL;
    NSData *_measurement;
    NSString *_measurementAlgorithm;
    SUCoreMAIdentifier *_softwareUpdateAssetIdentifier;
    SUCoreMAIdentifier *_documentationAssetIdentifier;
    MAAsset *_softwareUpdateAsset;
    MAAsset *_documentationAsset;
}

@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *uniqueBuildID;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *productSystemName;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSString *publisher;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) NSString *prerequisiteBuild;
@property (retain, nonatomic) NSString *prerequisiteOSVersion;
@property (retain, nonatomic) NSArray *supportedDevices;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) unsigned long long unarchivedSize;
@property (nonatomic) unsigned long long msuPrepareSize;
@property (nonatomic) unsigned long long installationSize;
@property (nonatomic) unsigned long long minimumSystemPartitionSize;
@property (nonatomic) _Bool streamingZipCapable;
@property (retain, nonatomic) NSDictionary *systemPartitionPadding;
@property (nonatomic) _Bool autoDownloadAllowableOverCellular;
@property (nonatomic) _Bool downloadAllowableOverCellular;
@property (nonatomic) _Bool downloadable;
@property (nonatomic) _Bool disableSiriVoiceDeletion;
@property (nonatomic) _Bool disableCDLevel4;
@property (nonatomic) _Bool disableAppDemotion;
@property (nonatomic) _Bool disableInstallTonight;
@property (nonatomic) _Bool rampEnabled;
@property (nonatomic) unsigned long long mdmDelayInterval;
@property (nonatomic) _Bool autoUpdateEnabled;
@property (retain, nonatomic) NSString *setupCritical;
@property (nonatomic) _Bool criticalCellularOverride;
@property (nonatomic) _Bool criticalOutOfBoxOnly;
@property (retain, nonatomic) NSString *lastEmergencyBuild;
@property (retain, nonatomic) NSString *lastEmergencyOSVersion;
@property (retain, nonatomic) NSData *sepDigest;
@property (retain, nonatomic) NSData *sepTBMDigests;
@property (retain, nonatomic) NSData *rsepDigest;
@property (retain, nonatomic) NSData *rsepTBMDigests;
@property (retain, nonatomic) NSString *documentationID;
@property (retain, nonatomic) SUCoreDocumentation *documentation;
@property (retain, nonatomic) NSString *softwareUpdateURL;
@property (retain, nonatomic) NSData *measurement;
@property (retain, nonatomic) NSString *measurementAlgorithm;
@property (retain, nonatomic) SUCoreMAIdentifier *softwareUpdateAssetIdentifier;
@property (retain, nonatomic) SUCoreMAIdentifier *documentationAssetIdentifier;
@property (retain, nonatomic) MAAsset *softwareUpdateAsset;
@property (retain, nonatomic) MAAsset *documentationAsset;
@property (retain, nonatomic, readonly) NSString *humanReadableUpdateName;
@property (nonatomic, readonly) _Bool fullReplacement;
@property (nonatomic, readonly) unsigned long long preparationSize;
@property (nonatomic, readonly) unsigned long long totalRequiredFreeSpace;

+ (_Bool)supportsSecureCoding;
+ (id)cleanProductVersion:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)overview;
- (id)updateTypeName;
- (id)initWithSUAsset:(id)arg1 releaseDate:(id)arg2;
- (id)criticalOverrideCellularPolicy;
- (id)getMASoftwareUpdateAsset;
- (id)getMADocumentationAsset;

@end
