/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, AVAssetImageGenerator;

@interface SLSheetPreviewImageSource : NSObject

{
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}

@property (readonly) ALAssetsLibrary *assetsLibrary;

- (void)_generatePreviewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)previewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)cancelVideoPreviewGeneration;

@end
