/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSOperation.h>

@class AVAsset, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ISPlayerItemChefOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _includeVideo;
    _Bool _includeAudio;
    AVAsset *_asset;
    CDUnknownBlockType _resultHandler;
    CDStruct_1b6d18a9 _photoTime;
    CDStruct_e83c9415 _trimmedTimeRange;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) CDStruct_e83c9415 trimmedTimeRange;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoTime;
@property (nonatomic, readonly) _Bool includeVideo;
@property (nonatomic, readonly) _Bool includeAudio;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)main;
- (id)initWithAsset:(id)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 photoTime:(CDStruct_1b6d18a9)arg3 includeAudio:(_Bool)arg4 includeVideo:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)_handleValuesDidLoad;
- (void)_preparePlayerItem;

@end
