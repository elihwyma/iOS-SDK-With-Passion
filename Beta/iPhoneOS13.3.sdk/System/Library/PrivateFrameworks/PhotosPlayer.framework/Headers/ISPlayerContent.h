/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject

{
    _Bool _photoHasColorAdjustments;
    _Bool _photoIsOriginal;
    _Bool _supportsVitality;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_variationIdentifier;
    CDStruct_1b6d18a9 _photoTime;
    CDStruct_1b6d18a9 _videoDuration;
}

@property (nonatomic, readonly) struct CGImage *photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 videoDuration;
@property (nonatomic, readonly) AVPlayerItem *videoPlayerItem;
@property (nonatomic, readonly) _Bool photoHasColorAdjustments;
@property (nonatomic, readonly) _Bool photoIsOriginal;
@property (nonatomic, readonly) _Bool supportsVitality;
@property (nonatomic, readonly) NSNumber *variationIdentifier;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 photoHasColorAdjustments:(_Bool)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(_Bool)arg9;

@end
