/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/CompoundClip.h>

@class IrisClipStyle, IrisMovieClip, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface IrisClip : CompoundClip

{
    unsigned long long _irisStyle;
    IrisClipStyle *_irisClipStyle;
    NSArray *_containedClips;
    IrisMovieClip *_introClip;
    IrisMovieClip *_outroClip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) IrisClipStyle *irisClipStyle;
@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) IrisMovieClip *introClip;
@property (retain, nonatomic) IrisMovieClip *outroClip;
@property (nonatomic) unsigned long long irisStyle;
@property (nonatomic, readonly) double minimumDuration;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) _Bool introClipAvailable;
@property (nonatomic, readonly) _Bool outroClipAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedTransitions;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAudioVolume:(float)arg1;
- (int)maxDuration;
- (_Bool)isIris;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (void)setAltAspect:(double)arg1;
- (void)setMinimumPhotoDuration:(double)arg1;
- (void)setIdealPhotoDuration:(double)arg1;
- (void)setMaximumPhotoDuration:(double)arg1;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (struct _NSRange)preferredInTransitionDurationRange;
- (struct _NSRange)preferredOutTransitionDurationRange;

@end
