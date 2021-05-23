/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTClip, JTCompositionTrackGroup;

@interface EditListCompositionState : NSObject

{
    _Bool _isLastClip;
    _Bool _clipRequiresCA;
    int _overlapLeft;
    int _overlapRight;
    int _audioStartOffset;
    int _audioEndOffset;
    JTCompositionTrackGroup *_currentTrackGroup;
    JTCompositionTrackGroup *_alternateTrackGroup;
    JTClip *_clip;
    CDStruct_e83c9415 _videoCompTimeRange;
    CDStruct_e83c9415 _audioCompTimeRange;
}

@property (retain, nonatomic) JTCompositionTrackGroup *currentTrackGroup;
@property (retain, nonatomic) JTCompositionTrackGroup *alternateTrackGroup;
@property (weak, nonatomic) JTClip *clip;
@property (nonatomic) int overlapLeft;
@property (nonatomic) int overlapRight;
@property (nonatomic) _Bool isLastClip;
@property (nonatomic) _Bool clipRequiresCA;
@property (nonatomic) CDStruct_e83c9415 videoCompTimeRange;
@property (nonatomic) CDStruct_e83c9415 audioCompTimeRange;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) int audioEndOffset;

- (id)description;
- (void)swapTrackGroup;

@end
