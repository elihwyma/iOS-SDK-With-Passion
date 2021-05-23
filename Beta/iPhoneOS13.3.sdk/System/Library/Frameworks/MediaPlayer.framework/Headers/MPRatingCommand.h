/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand

{
    float _minimumRating;
    float _maximumRating;
}

@property (nonatomic) float minimumRating;
@property (nonatomic) float maximumRating;

- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithRating:(float)arg1;

@end
