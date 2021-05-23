/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject

{
    _Bool _photoIsOriginal;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    ISWrappedAVPlayer *_videoPlayer;
    struct CGSize _videoSize;
}

@property (nonatomic, readonly) struct CGImage *photo;
@property (nonatomic, readonly) _Bool photoIsOriginal;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, readonly) struct CGSize videoSize;

- (void)dealloc;
- (id)description;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(struct CGSize)arg5;

@end
