/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TVPAudioSubtitleAdditions)

+ (id)tvp_groupedAudioAVMediaSelectionOptionsFromOptions:(id)arg1;
+ (id)tvp_filteredAndSubsortedMainProgramSubtitleOptionsFromOptions:(id)arg1;
+ (id)tvp_sortedAuxSubtitleOptionsFromOptions:(id)arg1;

- (id)tvp_sortedAudioAVMediaSelectionOptions;
- (id)tvp_sortedSubtitleAVMediaSelectionOptions;

@end
