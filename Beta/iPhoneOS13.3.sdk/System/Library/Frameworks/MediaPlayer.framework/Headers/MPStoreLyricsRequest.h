/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <Swift>

{
    MPModelSong *_song;
}

@property (retain, nonatomic) MPModelSong *song;

+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
