/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

{
    MPRadioStation *_radioStation;
}

@property (nonatomic, readonly) MPRadioStation *radioStation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadioStation:(id)arg1;

@end
