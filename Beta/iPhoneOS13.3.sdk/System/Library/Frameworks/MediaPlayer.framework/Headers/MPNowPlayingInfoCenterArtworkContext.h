/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaItemArtwork, NSData, NSString;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject

{
    NSString *_artworkIdentifier;
    MPMediaItemArtwork *_artwork;
    NSData *_artworkData;
}

@property (copy, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (retain, nonatomic) NSData *artworkData;

@end
