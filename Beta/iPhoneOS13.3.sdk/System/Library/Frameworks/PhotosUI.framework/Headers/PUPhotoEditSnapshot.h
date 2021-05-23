/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVURLAsset, NSData, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshot : NSObject

{
    long long _workImageVersion;
    PHAdjustmentData *_adjustmentData;
    NSData *_imageData;
    NSData *_baseImageData;
    AVURLAsset *_videoComplement;
    AVURLAsset *_baseVideoComplement;
}

@property (nonatomic, setter=_setWorkImageVersion:) long long workImageVersion;
@property (retain, nonatomic, setter=_setAdjustmentData:) PHAdjustmentData *adjustmentData;
@property (retain, nonatomic, setter=_setImageData:) NSData *imageData;
@property (retain, nonatomic, setter=_setBaseImageData:) NSData *baseImageData;
@property (retain, nonatomic, setter=_setVideoComplement:) AVURLAsset *videoComplement;
@property (retain, nonatomic, setter=_setBaseVideoComplement:) AVURLAsset *baseVideoComplement;

+ (void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (id)_copyAsset:(id)arg1;
- (id)_copyData:(id)arg1;
- (id)_copyDataAtURL:(id)arg1;
- (void)_copySourceData:(id)arg1 destinationData:(out id *)arg2 destinationURL:(out id *)arg3;

@end
