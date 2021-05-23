/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <Swift>

{
    MPModelPlaylist *_playlist;
}

@property (nonatomic, readonly) MPModelPlaylist *playlist;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlaylist:(id)arg1;

@end
