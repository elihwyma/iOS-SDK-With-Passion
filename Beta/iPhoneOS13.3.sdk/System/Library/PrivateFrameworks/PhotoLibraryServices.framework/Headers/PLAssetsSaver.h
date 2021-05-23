/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface PLAssetsSaver : NSObject

{
    NSMutableDictionary *_inProgressAvalancheFds;
    NSMutableArray *__pendingSaveAssetJobs;
}

@property (retain, nonatomic) NSMutableArray *_pendingSaveAssetJobs;

+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
+ (id)sharedAssetsSaver;

- (id)init;
- (void)dealloc;
- (id)_photoLibrary;
- (id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 outImageDataInfo:(id *)arg7 outCPLDownloadContext:(id *)arg8;
- (void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_setIsTakingPhoto:(_Bool)arg1;
- (id)_saveIsolationQueue;
- (void)queuePhotoStreamJobDictionary:(id)arg1;
- (void)_queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 imageSurface:(struct __IOSurface *)arg5 previewImageSurface:(struct __IOSurface *)arg6;
- (void)_queueJobDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(struct NSObject *)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(CDUnknownBlockType)arg6;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(struct NSObject *)arg3 createPreviewWellImage:(_Bool)arg4 progressStack:(id)arg5 isSlalom:(_Bool)arg6 assetAdjustments:(id)arg7 videoHandler:(CDUnknownBlockType)arg8 requestEnqueuedBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)_createWriteImageCompletionBlockWithImage:(struct NSObject *)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void *)arg4;
- (CDUnknownBlockType)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_saveImage:(struct NSObject *)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImageRef:(struct CGImage *)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)saveImage:(struct NSObject *)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImageData:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImage:(struct NSObject *)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)savePhotoStreamImage:(struct NSObject *)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(_Bool)arg5 avalancheUUID:(id)arg6;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 importSessionIdentifier:(id)arg3 importedBy:(short)arg4 alternateImportImageDate:(id)arg5 isPhotoStreamsPublishCandidate:(_Bool)arg6 avalancheUUID:(id)arg7 destinationAlbumUUID:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)validateAvalanches:(id)arg1 inLibraryWithURL:(id)arg2;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
