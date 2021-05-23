/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack

{
    AVCompositionTrackInternal *_priv;
}

@property (copy, nonatomic, readonly) NSArray *segments;
@property (readonly) NSArray *formatDescriptionReplacements;

- (void)dealloc;
- (id)description;
- (_Bool)isEnabled;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;

@end
