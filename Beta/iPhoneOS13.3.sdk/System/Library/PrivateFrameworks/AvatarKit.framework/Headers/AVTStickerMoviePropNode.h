/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <SceneKit/SCNNode.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVPlayer, AVPlayerItem, NSURL;

@interface AVTStickerMoviePropNode : SCNNode

{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_assetReaderOutput;
    struct opaqueCMSampleBuffer *_currentSampleBuffer;
    _Bool _enableLoop;
    _Bool _isObservingPlayerItemStatus;
    _Bool _applyToEmission;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    CDUnknownBlockType _loadCompletionHandler;
    NSURL *_movieURL;
    AVAsset *_movieAsset;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) CDUnknownBlockType loadCompletionHandler;
@property (nonatomic) _Bool isObservingPlayerItemStatus;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) AVAsset *movieAsset;
@property (nonatomic) _Bool applyToEmission;
@property (nonatomic) _Bool enableLoop;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setup;
- (id)clone;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)initWithMovieURL:(id)arg1 geometry:(id)arg2 applyToEmission:(_Bool)arg3;
- (void)preparePlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct opaqueCMSampleBuffer *)copySampleBufferAtTime:(CDStruct_1b6d18a9)arg1;
- (void)stopObservingPlayerItemStatusIfNeeded;
- (void)startObservingPlayerItemStatus;
- (void)itemDidFinishPlaying:(id)arg1;

@end
