/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUMediaProvider.h>

@class AVAsset, AVAssetImageGenerator, AVVideoComposition, NSCache, NSMutableArray, NSMutableDictionary, NSObject, UIImage;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUFilmstripMediaProvider : PUMediaProvider

{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSMutableDictionary *_ivarQueue_resultsByRequestNumber;
    NSMutableDictionary *_ivarQueue_completionHandlersByRequestNumber;
    NSMutableArray *_ivarQueue_pendingResults;
    _Bool _deliversImagesInOrder;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _timeTolerance;
    UIImage *_placeholderImage;
    AVAssetImageGenerator *__imageGenerator;
    long long __requestNumber;
    NSCache *__imageCache;
}

@property (retain, nonatomic, setter=_setImageGenerator:) AVAssetImageGenerator *_imageGenerator;
@property (nonatomic, setter=_setRequestNumber:) long long _requestNumber;
@property (retain, nonatomic, setter=_setImageCache:) NSCache *_imageCache;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic) double timeTolerance;
@property (nonatomic) _Bool deliversImagesInOrder;
@property (retain, nonatomic) UIImage *placeholderImage;

- (id)init;
- (void)dealloc;
- (void)cancelAllRequests;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (void)_handleSourceTimeLoadedForAsset:(id)arg1 time:(double)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 requestNumber:(long long)arg5;
- (void)_generateImageForResult:(id)arg1;
- (void)_didGenerateImage:(id)arg1 error:(id)arg2 requestedTime:(CDStruct_1b6d18a9)arg3 actualTime:(CDStruct_1b6d18a9)arg4 generatorResult:(long long)arg5 forResult:(id)arg6;
- (void)_deliverPendingResults;
- (void)_deliverResult:(id)arg1;
- (void)_deliverPlaceholderImage;

@end
