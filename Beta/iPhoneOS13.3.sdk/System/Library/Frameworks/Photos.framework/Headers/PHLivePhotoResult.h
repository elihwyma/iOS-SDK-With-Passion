/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCompositeMediaResult.h>

@interface PHLivePhotoResult : PHCompositeMediaResult

{
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
}

- (struct CGImage *)imageRef;
- (id)exifOrientation;
- (id)imageURL;
- (id)imageData;
- (id)videoURL;
- (_Bool)containsValidData;
- (id)imageUTI;
- (long long)uiOrientation;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (void)_mergeInfoDictionaryFromResult:(id)arg1;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;

@end
