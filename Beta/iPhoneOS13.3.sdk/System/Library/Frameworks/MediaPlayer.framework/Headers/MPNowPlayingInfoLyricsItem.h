/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject

{
    void *_mediaRemoteLyricsItem;
}

@property (nonatomic, readonly) void *mediaRemoteLyricsItem;
@property (nonatomic, readonly) MPNowPlayingInfoLyricsItemToken *token;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) _Bool userProvided;

- (void)dealloc;
- (id)initWithLyrics:(id)arg1 userProvided:(_Bool)arg2;
- (id)initWithLyrics:(id)arg1 userProvided:(_Bool)arg2 token:(id)arg3;
- (id)initWithMediaRemoteLyricsItem:(void *)arg1;

@end
