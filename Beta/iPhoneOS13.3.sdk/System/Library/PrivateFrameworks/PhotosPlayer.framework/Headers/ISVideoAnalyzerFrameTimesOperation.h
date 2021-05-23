/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSOperation.h>

@class AVAsset, AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISVideoAnalyzerFrameTimesOperation : NSOperation

{
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_assetReaderOutput;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _trackID;
    AVAsset *_asset;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) int trackID;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)main;
- (id)initWithAsset:(id)arg1 trackID:(int)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_handleAssetDidLoadValues;

@end
