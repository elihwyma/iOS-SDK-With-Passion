/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSKnownKeysDictionary, NSMutableDictionary, NSString;

@protocol PLFileManager, PLPTPTransferableAsset;

@interface PLPTPInfoBuilder : NSObject

{
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    NSKnownKeysDictionary *_info;
    NSMutableDictionary *_relatedFilesMetadata;
}

+ (id)_ptpCalendar;
+ (id)pictureTransferProtocolInformationForAsset:(id)arg1 asFirstAsset:(_Bool)arg2;

- (id)initWithAsset:(id)arg1;
- (id)pictureTransferProtocolInformationAsFirstAsset:(_Bool)arg1;
- (id)initWithAsset:(id)arg1 fileManager:(id)arg2;
- (_Bool)_suppressPtpInfo;
- (_Bool)_buildDirectoryPathAndFilename;
- (void)_buildCloudPhotosEnabledWithFirstAsset:(_Bool)arg1;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildOriginatingAssetID;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildImageDimensions;
- (void)_buildThumbnailDimensions;
- (void)_buildOrientation;
- (void)_buildPhotoKey;
- (void)_buildModificationAndCreationDate;
- (void)_durationOfTheAsset;
- (void)_buildGPSInformation;
- (void)_buildBurst;
- (void)_buildSlowMo;
- (void)_buildTimelapse;
- (void)_buildRelatedFiles;
- (_Bool)_buildSidecarRelatedFiles:(id)arg1;
- (_Bool)_buildDiagnosticRelatedFile:(id)arg1;
- (_Bool)_buildAdjustmentRelatedFile:(id)arg1;

@end
