/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportAsset.h>

@class ICCameraFile, NSArray;

@interface PHImportDeviceAsset : PHImportAsset

{
    ICCameraFile *_cameraFile;
}

@property (nonatomic, readonly) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)arg1 source:(id)arg2;
+ (void)validateCameraFile:(id)arg1;

- (id)duration;
- (struct CGSize)imageSize;
- (id)assetId;
- (id)representedObject;
- (id)originatingAssetID;
- (id)burstUUID;
- (_Bool)isTagged;
- (_Bool)hasAdjustments;
- (_Bool)isRAW;
- (id)spatialOverCaptureIdentifier;
- (_Bool)isSpatialOverCapture;
- (_Bool)canDelete;
- (_Bool)canReference;
- (void)loadMetadataSync;
- (id)exifImageDate;
- (_Bool)isLivePhoto;
- (_Bool)canPreserveFolderStructure;
- (id)parentFolderPath;
- (_Bool)isSloMo;
- (_Bool)hasAudioAttachment;
- (_Bool)isRender;
- (_Bool)isBase;
- (_Bool)isViewable;
- (int)burstPickType;
- (id)mediaGroupId;
- (void)loadMetadataAsync:(CDUnknownBlockType)arg1;
- (void)thumbnailUsingRequest:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (void)downloadToPathAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSource:(id)arg1 cameraFile:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4;
- (_Bool)containsDateKey:(id)arg1;
- (_Bool)performAdditionalLivePhotoChecksWithImageAsset:(id)arg1;
- (id)createMetadataFromCameraFile:(id)arg1;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;

@end
