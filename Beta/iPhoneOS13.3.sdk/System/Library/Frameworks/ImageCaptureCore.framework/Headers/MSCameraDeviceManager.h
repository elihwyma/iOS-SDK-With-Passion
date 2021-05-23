/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <ImageCaptureCore/ICDeviceManager.h>

__attribute__((visibility("hidden")))
@interface MSCameraDeviceManager : ICDeviceManager

- (void)notifyAddedItems:(id)arg1;
- (void)notifyContentCatalogPercentCompleted:(id)arg1;
- (void)startDeviceWithHandle:(id)arg1;
- (id)deviceManagerConnection;
- (void)getFileThumbnailImp:(id)arg1;
- (void)getFileMetadataImp:(id)arg1;
- (void)getFileDataImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (long long)checkFile:(id)arg1 andDevice:(id)arg2;
- (void)executeCompletionBlockWithErrorCode:(long long)arg1 info:(id)arg2 file:(id)arg3 completionDict:(id)arg4 completionBlk:(CDUnknownBlockType)arg5;
- (struct CGImage *)removeLetterboxFromThumbnail:(struct CGImage *)arg1 fullSize:(struct CGSize)arg2;
- (struct CGImage *)removeLetterboxFromThumbnail:(struct CGImage *)arg1;
- (void)updateCameraFolder:(id)arg1 withInfo:(id)arg2;
- (void)updateCameraFile:(id)arg1 withInfo:(id)arg2;
- (struct CGSize)cropThumbSize:(struct CGSize)arg1 fullSize:(struct CGSize)arg2 finalSize:(struct CGSize)arg3;

@end
