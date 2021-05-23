/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector

{
    struct OpaqueFigPlaybackItem *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEnabled;
- (int)trackID;
- (id)mediaType;
- (id)asset;
- (struct CGSize)dimensions;
- (CDStruct_e83c9415)timeRange;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (id)formatDescriptions;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (float)estimatedDataRate;
- (float)peakDataRate;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (unsigned int)_figMediaType;

@end
