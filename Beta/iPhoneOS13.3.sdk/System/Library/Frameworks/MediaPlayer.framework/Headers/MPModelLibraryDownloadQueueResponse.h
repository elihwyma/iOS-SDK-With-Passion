/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelResponse.h>

@class NSString;

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;

@end
