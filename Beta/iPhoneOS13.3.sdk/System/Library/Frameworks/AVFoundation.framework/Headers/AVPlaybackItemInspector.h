/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspector : AVAssetInspector

{
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem *playbackItem;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)duration;
- (struct CGSize)naturalSize;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (_Bool)providesPreciseDurationAndTiming;
- (id)trackIDs;
- (id)lyrics;
- (id)availableMetadataFormats;
- (long long)trackCount;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2;

@end
