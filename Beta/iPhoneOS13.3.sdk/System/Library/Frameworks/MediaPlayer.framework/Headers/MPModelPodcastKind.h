/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind

{
    MPModelPodcastEpisodeKind *_episodeKind;
}

@property (nonatomic, readonly) MPModelPodcastEpisodeKind *episodeKind;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end
