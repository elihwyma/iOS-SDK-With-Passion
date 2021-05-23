/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class CompositionTrackGroup, KonaClip;

__attribute__((visibility("hidden")))
@interface EditListCompositionState : NSObject

{
    CompositionTrackGroup *m_currentTrackGroup;
    CompositionTrackGroup *m_alternateTrackGroup;
    KonaClip *m_previousClip;
    KonaClip *m_clip;
    KonaClip *m_nextClip;
    float m_previousClipVolume;
    float m_clipVolume;
    float m_nextClipVolume;
    int m_previousClipType;
    int m_clipType;
    int m_nextClipType;
    struct CGSize m_previousClipNaturalSize;
    struct CGSize m_clipNaturalSize;
    struct CGSize m_nextClipNaturalSize;
    struct CGAffineTransform m_previousClipTransform;
    struct CGAffineTransform m_clipTransform;
    struct CGAffineTransform m_nextClipTransform;
    _Bool m_previousClipRequiresCA;
    _Bool m_clipRequiresCA;
    _Bool m_nextClipRequiresCA;
    CDStruct_e83c9415 m_videoCompTimeRange;
    CDStruct_e83c9415 m_audioCompTimeRange;
    int m_audioStartOffset;
    int m_audioEndOffset;
}

@property (retain, nonatomic) CompositionTrackGroup *currentTrackGroup;
@property (retain, nonatomic) CompositionTrackGroup *alternateTrackGroup;
@property (nonatomic) KonaClip *previousClip;
@property (nonatomic) KonaClip *clip;
@property (nonatomic) KonaClip *nextClip;
@property (nonatomic) float previousClipVolume;
@property (nonatomic) float clipVolume;
@property (nonatomic) float nextClipVolume;
@property (nonatomic, readonly) int previousClipType;
@property (nonatomic, readonly) int clipType;
@property (nonatomic, readonly) int nextClipType;
@property (nonatomic) struct CGSize previousClipNaturalSize;
@property (nonatomic) struct CGSize clipNaturalSize;
@property (nonatomic) struct CGSize nextClipNaturalSize;
@property (nonatomic) struct CGAffineTransform previousClipTransform;
@property (nonatomic) struct CGAffineTransform clipTransform;
@property (nonatomic) struct CGAffineTransform nextClipTransform;
@property (nonatomic) CDStruct_e83c9415 videoCompTimeRange;
@property (nonatomic) CDStruct_e83c9415 audioCompTimeRange;
@property (nonatomic) _Bool previousClipRequiresCA;
@property (nonatomic) _Bool clipRequiresCA;
@property (nonatomic) _Bool nextClipRequiresCA;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) int audioEndOffset;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)swapForTransition;

@end
