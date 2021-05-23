/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PHAsset;

@interface PHResourceDownloadRequest : NSObject

{
    NSMutableDictionary *_progressByRequestIdentifier;
    CDUnknownBlockType _downloadCompletionHandler;
    _Bool __downloadCancelled;
    PHAsset *_asset;
    long long _requestType;
    double _progressFraction;
    NSProgress *_progress;
    CDUnknownBlockType _progressChangeHandler;
    NSArray *__assetResources;
    NSMutableArray *__activeAssetResourcesRequest;
}

@property (nonatomic, setter=_setProgressFraction:) double progressFraction;
@property (nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) _Bool _downloadCancelled;
@property (retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources;
@property (nonatomic, readonly) NSMutableArray *_activeAssetResourcesRequest;
@property (readonly) PHAsset *asset;
@property (readonly) long long requestType;
@property (readonly) NSProgress *progress;
@property (copy, nonatomic) CDUnknownBlockType progressChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 includeAllAssetResources:(_Bool)arg3 fulfillOnDemandResources:(_Bool)arg4 error:(id *)arg5;
+ (id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)fetchResourcesToShareForAsset:(id)arg1 requestOptions:(id)arg2 error:(id *)arg3;
+ (id)_resourcesToShareForAsset:(id)arg1 error:(id *)arg2;
+ (_Bool)setValuesInDictionary:(id)arg1 fromDictionary:(id)arg2 keysToCopy:(id)arg3;
+ (id)originalsAndFullSizeResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)singularResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 useOriginalResources:(_Bool)arg4 knownUnsupported:(_Bool)arg5 error:(id *)arg6;
+ (id)resourceInfoKeysForResourceTypesForPhotos;
+ (id)resourceInfoKeysForResourceTypesForVideos;
+ (id)utiKeysForURLKeys;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(long long)arg2;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(long long)arg2 options:(id)arg3;
+ (id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2;
+ (id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithAsset:(id)arg1 requestType:(long long)arg2;
- (void)fetchIsDownloadRequiredWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadRequiredResourcesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2;
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_didFinishDownloadWithSuccess:(_Bool)arg1 resourceInfo:(id)arg2 error:(id)arg3;
- (void)_cancelActiveAssetResourceRequests;
- (void)cancelDownloadRequest;
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(_Bool)arg3;
- (_Bool)isDownloadingRequiredForOptions:(id)arg1 resourceInfo:(id *)arg2;

@end
