/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMusicPlayerPlayParameters, NSArray;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor

{
    NSArray *_playParametersQueue;
    MPMusicPlayerPlayParameters *_startItemPlayParameters;
}

@property (copy, nonatomic) NSArray *playParametersQueue;
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayParametersQueue:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2;

@end
