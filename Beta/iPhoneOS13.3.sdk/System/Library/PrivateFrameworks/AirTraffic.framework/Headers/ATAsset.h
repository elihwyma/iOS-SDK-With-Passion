/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATStoreInfo, NMSMediaItemDownloadInfo, NSData, NSDictionary, NSError, NSNumber, NSString, NSURL;

@interface ATAsset : NSObject

{
    NSString *_identifier;
    NSString *_dataclass;
    NSString *_assetType;
    NSDictionary *_variantOptions;
    NSString *_localPath;
    NSURL *_icon;
    NSString *_prettyName;
    _Bool _isDownload;
    _Bool _isRestore;
    _Bool _bypassStore;
    _Bool _installOnly;
    _Bool _readyForStore;
    _Bool _isPrioritized;
    _Bool _isForeground;
    _Bool _lyricsEmbeddedInAsset;
    long long _storePID;
    unsigned int _priority;
    float _downloadProgress;
    float _installProgress;
    _Bool _powerRequired;
    _Bool _canUseCellularData;
    int _protectionType;
    ATStoreInfo *_storeInfo;
    NSString *_storePlist;
    NSString *_infoPlist;
    NSError *_error;
    NSDictionary *_clientParams;
    double _transferStartTime;
    double _transferDuration;
    double _queueStartTime;
    double _queueDuration;
    NSData *_resumeData;
    long long _enqueueSource;
    _Bool _allowDownloadOnConstrainedNetwork;
    unsigned long long _downloadPauseReason;
    NSNumber *_downloadSourceContainerId;
    _Bool _downloadOnly;
    _Bool _installStarted;
    _Bool _legacy;
    _Bool _installed;
    long long _assetState;
    NMSMediaItemDownloadInfo *_mediaItemDownloadInfo;
    unsigned long long _totalBytes;
    unsigned long long _bytesRemaining;
    unsigned long long _completedAssetParts;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (nonatomic) unsigned long long completedAssetParts;
@property (nonatomic, getter=isLegacy) _Bool legacy;
@property (nonatomic, getter=isInstalled) _Bool installed;
@property (nonatomic) double transferStartTime;
@property (nonatomic) double queueStartTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *dataclass;
@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSDictionary *variantOptions;
@property (retain, nonatomic) NSString *prettyName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSURL *icon;
@property (nonatomic) _Bool isDownload;
@property (nonatomic) _Bool isRestore;
@property (nonatomic) _Bool bypassStore;
@property (nonatomic) _Bool installOnly;
@property (nonatomic) _Bool downloadOnly;
@property (nonatomic) _Bool readyForStore;
@property (nonatomic) _Bool isPrioritized;
@property (nonatomic) _Bool isForeground;
@property (nonatomic) _Bool lyricsEmbeddedInAsset;
@property (nonatomic) long long storePID;
@property (nonatomic) unsigned int priority;
@property (nonatomic) float downloadProgress;
@property (nonatomic) float installProgress;
@property (retain, nonatomic) ATStoreInfo *storeInfo;
@property (retain, nonatomic) NSString *storePlist;
@property (retain, nonatomic) NSString *infoPlist;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool installStarted;
@property (nonatomic) long long assetState;
@property (nonatomic) double queueDuration;
@property (nonatomic) double transferDuration;
@property (nonatomic) int protectionType;
@property (retain, nonatomic) NSData *resumeData;
@property (nonatomic) long long enqueueSource;
@property (nonatomic) _Bool allowDownloadOnConstrainedNetwork;
@property (retain, nonatomic) NMSMediaItemDownloadInfo *mediaItemDownloadInfo;
@property (nonatomic) unsigned long long downloadPauseReason;
@property (retain, nonatomic) NSNumber *downloadSourceContainerId;
@property (nonatomic) _Bool powerRequired;
@property (nonatomic) _Bool canUseCellularData;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long bytesRemaining;
@property (retain, nonatomic) NSDictionary *clientParams;

+ (_Bool)supportsSecureCoding;
+ (id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
+ (id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4;
+ (id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5;
+ (id)assetWithSerializedAsset:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)_variantDescription;
- (id)_ATAssetTypeFromDataClass:(id)arg1;
- (unsigned long long)assetParts;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
- (id)serializedAsset;

@end
