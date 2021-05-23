/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMFileTransfer : NSObject

{
    _Bool _isIncoming;
    _Bool _isDirectory;
    _Bool _shouldAttemptToResume;
    _Bool _wasRegisteredAsStandalone;
    _Bool _shouldForceArchive;
    _Bool _needsWrapper;
    _Bool _isAuxImage;
    _Bool _isAuxVideo;
    _Bool _isSticker;
    _Bool _hideAttachment;
    _Bool _isLocation;
    _Bool _isContact;
    _Bool _appMessageFallbackImage;
    unsigned short _hfsFlags;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    double _lastUpdatedInterval;
    double _lastAveragedInterval;
    unsigned long long _lastAveragedBytes;
    NSString *_guid;
    NSString *_messageGUID;
    NSDate *_startDate;
    NSDate *_createdDate;
    long long _transferState;
    NSString *_filename;
    NSURL *_transferDataURL;
    NSString *_utiType;
    NSString *_mimeType;
    NSString *_accountID;
    NSString *_otherPerson;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    unsigned long long _averageTransferRate;
    long long _error;
    NSString *_errorDescription;
    NSDictionary *_localUserInfo;
    NSString *_transferredFilename;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_AuxTranscoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSArray *_attachmentSendContexts;
    long long _cloudKitSyncState;
    NSData *_cloudKitServerChangeTokenBlob;
    NSString *_cloudKitRecordID;
    long long _srCloudKitSyncState;
    NSData *_srCloudKitServerChangeTokenBlob;
    NSString *_srCloudKitRecordID;
    NSURL *_localURL;
    NSURL *_temporaryHighQualityLocalURL;
    NSDictionary *_attributionInfo;
    NSString *_originalGUID;
}

@property (nonatomic, setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;
@property (nonatomic, setter=_setLastAveragedInterval:) double _lastAveragedInterval;
@property (nonatomic, readonly) unsigned long long _lastAveragedBytes;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic, setter=_setStartDate:) NSDate *startDate;
@property (nonatomic, setter=_setTransferState:) long long transferState;
@property (nonatomic) _Bool isIncoming;
@property (retain, nonatomic) NSString *transferredFilename;
@property (retain, nonatomic, setter=_setTransferDataURL:) NSURL *transferDataURL;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic, setter=_setLocalPath:) NSString *localPath;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic, setter=_setLocalURL:) NSURL *localURL;
@property (retain, nonatomic) NSURL *temporaryHighQualityLocalURL;
@property (nonatomic) unsigned int hfsType;
@property (nonatomic) unsigned int hfsCreator;
@property (nonatomic) unsigned short hfsFlags;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *otherPerson;
@property (nonatomic) unsigned long long currentBytes;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long averageTransferRate;
@property (nonatomic, setter=_setNeedsWrapper:) _Bool _needsWrapper;
@property (nonatomic) _Bool isDirectory;
@property (nonatomic) _Bool shouldAttemptToResume;
@property (nonatomic, setter=_setForceArchive:) _Bool shouldForceArchive;
@property (nonatomic, setter=_setError:) long long error;
@property (retain, nonatomic, setter=_setErrorDescription:) NSString *errorDescription;
@property (retain, nonatomic) NSString *originalGUID;
@property (nonatomic, readonly) _Bool canBeAccepted;
@property (nonatomic, readonly) _Bool isFinished;
@property (retain, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) _Bool existsAtLocalPath;
@property (nonatomic) _Bool isAuxImage;
@property (nonatomic) _Bool isAuxVideo;
@property (nonatomic) _Bool isSticker;
@property (nonatomic, readonly) _Bool isRecipeBasedSticker;
@property (nonatomic, readonly) _Bool isAnimojiV2;
@property (nonatomic, readonly) _Bool wantsAlphaRemoved;
@property (nonatomic, readonly) _Bool isAutoloopVideo;
@property (nonatomic, readonly) _Bool isOpusAudioMessage;
@property (nonatomic, readonly) _Bool isHEVCWithAlphaVideo;
@property (nonatomic) _Bool isLocation;
@property (nonatomic) _Bool isContact;
@property (nonatomic) _Bool hideAttachment;
@property (nonatomic, readonly) _Bool canMarkPurgable;
@property (retain, nonatomic, readonly) NSString *temporaryHighQualityLocalPath;
@property (retain, nonatomic, readonly) NSString *permanentHighQualityLocalPath;
@property (retain, nonatomic, readonly) NSString *mimeType;
@property (retain, nonatomic) NSDictionary *transcoderUserInfo;
@property (retain, nonatomic) NSDictionary *AuxTranscoderUserInfo;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSArray *attachmentSendContexts;
@property (retain, nonatomic) NSDictionary *stickerUserInfo;
@property (retain, nonatomic) NSDictionary *attributionInfo;
@property (nonatomic, setter=setRegisteredAsStandalone:) _Bool wasRegisteredAsStandalone;
@property (nonatomic) _Bool appMessageFallbackImage;
@property (nonatomic) long long cloudKitSyncState;
@property (retain, nonatomic) NSData *cloudKitServerChangeTokenBlob;
@property (retain, nonatomic) NSString *cloudKitRecordID;
@property (nonatomic) long long srCloudKitSyncState;
@property (retain, nonatomic) NSData *srCloudKitServerChangeTokenBlob;
@property (retain, nonatomic) NSString *srCloudKitRecordID;

+ (_Bool)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)AuxGUIDFromFileTransferGUID:(id)arg1;
+ (id)guidByStrippingAuxPrefix:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_dictionaryRepresentation;
- (void)_clear;
- (void)_calculateTypeInformation;
- (_Bool)_isCloudKitEnabled;
- (_Bool)_missingAttachmentCanBeDownloadedFromCloudKit;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(_Bool)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned int)arg8 hfsCreator:(unsigned int)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(_Bool)arg11;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setDirectory:(_Bool)arg1 hfsType:(unsigned int)arg2 hfsCreator:(unsigned int)arg3 hfsFlags:(unsigned short)arg4;
- (_Bool)_updateWithDictionaryRepresentation:(id)arg1;
- (id)_auxVideoPathIfItExists;
- (void)_swizzleTransferStateIfMissingAttachmentCanBeDownloadedFromCloudKit;

@end
