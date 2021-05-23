/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUMediaProvider.h>

@class NSMapTable, NSMutableArray;

@interface PUJoiningMediaProvider : PUMediaProvider

{
    NSMapTable *__mediaProviderByClass;
    NSMutableArray *__mediaProviderPredicateRecords;
}

@property (nonatomic, readonly) NSMapTable *_mediaProviderByClass;
@property (nonatomic, readonly) NSMutableArray *_mediaProviderPredicateRecords;

- (id)init;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)registerMediaProvider:(id)arg1 forAssetClass:(Class)arg2;
- (void)registerMediaProvider:(id)arg1 forAssetPassingTest:(CDUnknownBlockType)arg2;
- (id)_mediaProviderForAsset:(id)arg1 requestType:(long long)arg2;

@end
