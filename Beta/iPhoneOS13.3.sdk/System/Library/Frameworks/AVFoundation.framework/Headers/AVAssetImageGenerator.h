/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetImageGeneratorInternal, AVVideoComposition, NSString;

@protocol AVVideoCompositing;

@interface AVAssetImageGenerator : NSObject

{
    AVAssetImageGeneratorInternal *_priv;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic) _Bool appliesPreferredTrackTransform;
@property (nonatomic) struct CGSize maximumSize;
@property (copy, nonatomic) NSString *apertureMode;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) id <AVVideoCompositing> customVideoCompositor;
@property (nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceBefore;
@property (nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceAfter;

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (struct CGImage *)copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 actualTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (void)_serverDied;
- (id)_NSErrorForError:(int)arg1;
- (struct CGSize)_scaledSizeForRenderSize:(struct CGSize)arg1;
- (id)_videoSettingWithSize:(struct CGSize)arg1;
- (id)_makeAutoreleasedAssetReader;
- (struct CGImage *)_copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 usingAssetReader:(id)arg2 error:(id *)arg3;
- (id)_optionsDictionary;
- (_Bool)_ensureFigAssetImageGeneratorReturningError:(id *)arg1;
- (id)_requestWithRequestID:(id)arg1;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelAllCGImageGeneration;
- (void)_didGenerateCGImage:(id)arg1;
- (void)_failedToGenerateCGImage:(id)arg1;

@end
