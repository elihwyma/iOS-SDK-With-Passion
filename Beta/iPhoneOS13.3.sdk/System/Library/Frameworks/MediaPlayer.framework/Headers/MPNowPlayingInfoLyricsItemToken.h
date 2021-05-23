/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MPNowPlayingInfoLyricsItemToken : NSObject

{
    void *_mediaRemoteLyricsItemToken;
}

@property (nonatomic, readonly) void *mediaRemoteLyricsItemToken;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)initWithMediaRemoteLyricsItemToken:(void *)arg1;

@end
