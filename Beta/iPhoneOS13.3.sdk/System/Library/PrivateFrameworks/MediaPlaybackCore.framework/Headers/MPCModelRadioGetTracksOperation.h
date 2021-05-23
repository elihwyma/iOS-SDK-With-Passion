/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class ICRadioGetTracksRequest, NSString, SSVPlayActivityController;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation

{
    SSVPlayActivityController *_playActivityController;
    ICRadioGetTracksRequest *_request;
    NSString *_siriAssetInfo;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)execute;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;
- (void)_runStep:(id)arg1 withFinishHandler:(CDUnknownBlockType)arg2;
- (id)_cacheTracksForStep:(id)arg1;

@end
