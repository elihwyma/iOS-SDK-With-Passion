/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

{
    NSData *_imageData;
    NSString *_mimeType;
}

@property (copy, nonatomic, readonly) NSData *imageData;
@property (copy, nonatomic, readonly) NSString *mimeType;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned int)type;
- (_Bool)hasArtworkData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (id)copyImageData;

@end
