/*
 Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

#import <Photos/PHAsset.h>

@interface PHAsset (WatchResize)

+ (void)_nptoArchiveLivePhotoWithDictionary:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)_nptoExportPhotoDataForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_nptoExportPairedVideoForDevice:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchJPEGForWatchWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchIrisForWatchToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_nptoExportPhotoForDevice:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_nptoExportLivePhotoForDevice:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)npto_exportForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
