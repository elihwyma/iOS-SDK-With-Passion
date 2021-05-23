/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, AVAssetExportSession, NSError, NSMutableArray;

@protocol OS_dispatch_queue;

@interface SLAssetDataProvider : NSObject

{
    ALAssetsLibrary *_assetsLibrary;
    int _numRequestedImages;
    unsigned long long _maxByteSize;
    NSMutableArray *_deliveryQueue;
    NSError *_lastError;
    AVAssetExportSession *_assetExportSession;
    NSObject<OS_dispatch_queue> *_downsamplingQueue;
    CDUnknownBlockType _fetchCompletion;
}

@property (copy) CDUnknownBlockType fetchCompletion;

- (id)init;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_checkDeliveryComplete;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)fetchedAsset:(id)arg1;
- (void)_assetFetchFailedWithError:(id)arg1;
- (id)_generateTemporaryFilename;
- (void)exportDataFromVideoAssetURL:(id)arg1 toFileURL:(id)arg2 exportPreset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mappedDataFromVideoAtFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
