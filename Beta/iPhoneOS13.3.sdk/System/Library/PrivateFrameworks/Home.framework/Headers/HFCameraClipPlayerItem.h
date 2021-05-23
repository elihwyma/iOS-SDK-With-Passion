/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <AVFoundation/AVPlayerItem.h>

@class HFCameraClipVideoAssetContextProvider, HMCameraClip, HMCameraClipManager, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HFCameraClipPlayerItem : AVPlayerItem

{
    HMCameraClip *_clip;
    HMCameraClipManager *_clipManager;
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;
    HFCameraClipVideoAssetContextProvider *_videoContextProvider;
}

@property (nonatomic, readonly) HMCameraClipManager *clipManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceLoaderQueue;
@property (nonatomic, readonly) HFCameraClipVideoAssetContextProvider *videoContextProvider;
@property (nonatomic, readonly) HMCameraClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;

+ (id)_playlistURL;
+ (id)_assetOptionsForClip:(id)arg1;

- (void)dealloc;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2;

@end
