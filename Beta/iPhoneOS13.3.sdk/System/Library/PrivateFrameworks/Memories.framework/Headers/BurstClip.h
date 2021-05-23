/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/CompoundClip.h>

@class BurstClipStyle, NSArray, NSString, PHAsset, UIColor;

__attribute__((visibility("hidden")))
@interface BurstClip : CompoundClip

{
    unsigned long long _allowedBurstStyles;
    unsigned long long _burstStyle;
    UIColor *_threeUpStyleGapColor;
    UIColor *_threeUpStylePopBackgroundColor;
    double _minimumVideoDuration;
    double _idealVideoDuration;
    NSArray *_containedClips;
    NSArray *_allSourceClips;
    BurstClipStyle *_burstClipStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) NSArray *allSourceClips;
@property (retain, nonatomic) BurstClipStyle *burstClipStyle;
@property (nonatomic) unsigned long long allowedBurstStyles;
@property (nonatomic) unsigned long long burstStyle;
@property (retain, nonatomic) UIColor *threeUpStyleGapColor;
@property (retain, nonatomic) UIColor *threeUpStylePopBackgroundColor;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic) double minimumVideoDuration;
@property (nonatomic) double idealVideoDuration;
@property (nonatomic, readonly) double minimumDuration;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic, readonly) double maximumDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)aspectRatio;
- (void)setDuration:(int)arg1;
- (_Bool)isPhoto;
- (_Bool)isBurst;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (void)setAltAspect:(double)arg1;
- (id)representingClip;
- (id)pickedKBClips;
- (void)setMinimumPhotoDuration:(double)arg1;
- (void)setIdealPhotoDuration:(double)arg1;
- (id)supportedBurstStylesArray;
- (id)initWithKenBurnsClip:(id)arg1 sourceClips:(id)arg2;
- (id)bestClipsForClipCount:(unsigned long long)arg1;
- (id)pickedIndices;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)descriptionOfBurstStyle;
- (unsigned long long)supportedBurstStyles;
- (void)fetchIfNeeded;
- (id)userPickedIndices;
- (id)autoPickedIndices;
- (unsigned long long)lastInterestingIndex;
- (id)indicesWithBurstSelectionType:(unsigned long long)arg1;
- (id)lastInterestingClip;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;

@end
