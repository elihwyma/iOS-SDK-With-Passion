/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaItem, MPMediaQuery;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue

{
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    long long _shuffleType;
    long long _repeatType;
}

@property (nonatomic, readonly) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) MPMediaItem *firstItem;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) long long repeatType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
- (_Bool)verifyWithError:(id *)arg1;
- (id)playbackItemMetadataForMediaItem:(id)arg1;

@end
