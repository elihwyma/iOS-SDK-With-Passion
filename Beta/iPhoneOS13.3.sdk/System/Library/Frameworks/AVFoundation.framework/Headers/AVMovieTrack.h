/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack

{
    AVMovieTrackInternal *_movieTrackInternal;
}

@property (nonatomic, readonly) CDStruct_e83c9415 mediaPresentationTimeRange;
@property (nonatomic, readonly) CDStruct_e83c9415 mediaDecodeTimeRange;
@property (nonatomic, readonly) long long alternateGroupID;

+ (_Bool)expectsPropertyRevisedNotifications;

- (id)description;
- (id)mediaDataStorage;

@end
